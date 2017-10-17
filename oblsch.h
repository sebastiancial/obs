#ifndef OBLSCH_H
#define OBLSCH_H

#include <QWidget>



namespace Ui {
class oblsch;
}

class oblsch : public QWidget
{

    Q_OBJECT

public:

    //Zmienne globalne w klasie oblsch
    int x, ilosc_rozw, licznik, mod2, zm_pom;
    double hmin, hmax, d, H;
    double smin, smax;
    int tab_powt[];
    QString  tekst[100], tekstf;



    //Funkcje globalne
    void wybor(int x);
    void obliczenia();
    int MyRound(int liczba);
    void pokaz(int mod2);


    explicit oblsch(QWidget *parent = 0);
    ~oblsch();
    Window(QWidget *parent = 0);




private slots:


    void on_radio1_clicked();
    void on_radio2_clicked();
    void on_radio3_clicked();
    void on_radio4_clicked();
    void on_radio5_clicked();
    void on_radio6_clicked();

    void on_pushButton_2_clicked();


    void on_pushButton_clicked();

private:
    Ui::oblsch *ui;






};



#endif // OBLSCH_H
