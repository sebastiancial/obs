#include "oblsch.h"
#include "ui_oblsch.h"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QDateTime>


//Zmienne globalne



oblsch::oblsch(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oblsch)
{
    ui->setupUi(this);

}

oblsch::~oblsch()
{

    delete ui;
}


//FUNKCJE ZWIAZANE BEZPOSRENIO Z GUI

void oblsch::on_radio1_clicked()
{
    x=1;
}

void oblsch::on_radio2_clicked()
{
    x=2;
}

void oblsch::on_radio3_clicked()
{
    x=3;
}

void oblsch::on_radio4_clicked()
{
    x=4;
}

void oblsch::on_radio5_clicked()
{
    x=5;
}

void oblsch::on_radio6_clicked()
{
    x=6;
}


void oblsch::on_pushButton_2_clicked()
{
    tekstf = QString("");

    //Oszukaństwo w celu uniknięcia błedu
    if(x!=1 && x!=2 && x!=3 && x!=4 && x!=5 && x!=6 ){
        x=1;}

    wybor(x);//wybór z wysokości granicznych z normy

    // Pobieranie wartości zmiennych
    QString temp;

    temp = ui->textEdit_2->text();
    ilosc_rozw = temp.toInt();
    if (ilosc_rozw>20) ilosc_rozw=20;
    if (ilosc_rozw<2) ilosc_rozw=1;

    temp = ui->textEdit_1->text();
    H = temp.toDouble();


    //Wykonywanie obliczeń
    obliczenia();

    //Łączenie tablicy tekstowej w jeden tekst
    for(int i=0;i<licznik;i++){
    tekstf += tekst[i];
    }

    ui->textBrowser->setText(tekstf);





}



void oblsch::on_pushButton_clicked()//przygotowanie pliku tekstowego
{


    QDateTime dateTime = dateTime.currentDateTime();
    QString czas = dateTime.toString("dd.MM.yyyy_hh.mm.ss_");
    QString txt = QString(".txt");
    QString wartosc = QString("H=%1cm_wybor=%2").arg(H/10000,1,1,1,QChar(' ')).arg(x);
    QString nazwa=QString("./workspace/")+czas+wartosc+txt;
    QFile plik(nazwa);
    QString wstep2;
    switch(x)
    {
    case 1:
        wstep2 = QString("budynków mieszkalnych jednorodzinnych oraz mieszkań dwupoziomowych. \n\n");
    break;
    case 2:
        wstep2 = QString("budynków mieszkalnych wielorodzinnych oraz budynków użyteczności publicznej. \n\n");
    break;
    case 3:
        wstep2 = QString("przedszkoli i żłobków. \n\n");
    break;
    case 4:
        wstep2 = QString("budynków opieki zdrowotnej. \n\n");
    break;
    case 5:
        wstep2 = QString("garaży wbudowanych i wolno stojących oraz budynków usługowych do 10 osób. \n\n");
    case 6:
        wstep2 = QString("schodów do kondygnacji podziemnej. \n\n");
    break;
    default:
    break;
    }
    QString norma = QString ("");//jaka norma?
    QString wstep = QString("Wyniki obliczeń dla podanej wysokości kondygnacji H = %1 cm. \nWyliczenia dla ").arg(H/10000,1,1,1,QChar(' '))+wstep2;
        plik.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text);

        QTextStream stream(&plik);
        stream <<wstep + tekstf + norma;

        plik.close();

}


// FUNKCJE DODATKOWE


void oblsch::obliczenia()
{

//czyszczenie zmiennych niezbędnych do obliczeń
licznik=0;
zm_pom=0;

int tab_powt[ilosc_rozw+1];


H = H*10000; // dokladnosc 0,0001 cm
int H_int=H; // z double do int


licz:
for(int i=0;i<d*10000+1;i++)
{
    int mod2=hmin*10000+i; //dodaje do hmin po czesci milimetra
    int mod=H_int%mod2; //sprawdzam dokladnosc dzielenia modulo


    if( mod <=30 ) // mozna ustawic dokladnosc liczenia
    {
        //int mod2r=mod2;
        int mod2r=MyRound(mod2);//uciecie 3 ostatnich cyfr
        for(int k=0;k<=licznik;k++)
        {
            if(tab_powt[k]==mod2r)
            {
                goto skok;

            }


        }
        tab_powt[licznik]=mod2r;
        //tekst[licznik] = QString("Wysokość stopnia = %1\n").arg(mod2r);

        //pokaz(mod2);

        double mod2d,h; //mod w double, wys stopnia,
        double is; //ilosc stopni

        mod2d=mod2; // int to double
        h=mod2d/10000; // do dokladnosci w cm
        //cout <<setprecision(3)<<fixed<< "Wysokosc stopnia: "<< h << " cm\n"; // z dokladnoscia do 4 miejsc po przecinku
        smin = 60 - 2*h;
        smax = 65 - 2*h;
        is=H/h/10000;
        is=round(is);//zaokraglenie do pełnych wartosci
        //cout <<setprecision(0)<<fixed<< is<<" stopni o szerokosci stopnia od "<<setprecision(2)<<fixed<<smin<<"cm do "<<smax<<"cm\n"
        //<<"Dlugosc biegu od "<<setprecision(2)<<fixed<<is*smin<<"cm do "<<is*smax<<"cm\n\n";

        tekst[licznik] = QString("Wysokość stopnia = %1 cm. Razem %2 stopni o szerokości stopnia od %3 cm do %4 cm. \nCałkowita długość biegu od %5 cm do %6 cm.\n").arg(h).arg(is).arg(smin,2,2,2,QChar(' ')).arg(smax,2,2,2,QChar(' ')).arg(round(is*smin)).arg(round(is*smax));

        licznik++;

        skok:
            ;

    }

}

if(licznik < (ilosc_rozw+zm_pom))
{
    hmin=hmin-0.1; //zmniejsza dokladnosc, zmniejsza minimalna wyskosc stopnia o 0.1
    hmax=hmax+0.1;
    d=d+0.2; //zwieksza minimalna wysokosc stopnia o 0.1, rozniaca zmienia sie o 0.2
    if(zm_pom==0)
    {
        tekst[licznik] = QString("\nUwaga! Brak wymaganej ilości rozwiązań. Została zmniejszona minimalna wysokość stopnia  i zwiększona maksymalna wysokość stopnia. \nNastępne wyniki wykraczają poza norme.\n\n");
        zm_pom=1;
        licznik++;
    }




    goto licz; //przeskakuje program do sprawdzania wys stopnia
}

//for(int i=0;i<=licznik;i++){
//tekst[i] = QString("Wysokość stopnia = %1\n").arg(tab_powt[i]);}


}

int oblsch::MyRound(int liczba)
{
    double ld=liczba;
    ld=ld/100;
    ld=round(ld);
    liczba=ld;
    liczba=liczba*100;
    return liczba;
}

void oblsch::wybor(int x)
{

        switch( x )
    {
    case 1:
         hmin=14.5;
         hmax=19;
         d=hmax-hmin;
        break;
    case 2:
         hmin=14.5;
         hmax=17.5;
         d=hmax-hmin;
        break;
    case 3:
         hmin=14.5;
         hmax=15;
         d=hmax-hmin;
        break;
    case 4:
         hmin=14.5;
         hmax=15;
         d=hmax-hmin;
        break;
    case 5:
         hmin=14.5;
         hmax=19;
         d=hmax-hmin;
        break;
    case 6:
         hmin=14.5;
         hmax=20;
         d=hmax-hmin;
        break;
    default:

        break;
    }
}





