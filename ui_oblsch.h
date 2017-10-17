/********************************************************************************
** Form generated from reading UI file 'oblsch.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBLSCH_H
#define UI_OBLSCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oblsch
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radio1;
    QRadioButton *radio2;
    QRadioButton *radio3;
    QRadioButton *radio4;
    QRadioButton *radio5;
    QRadioButton *radio6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *textEdit_1;
    QLineEdit *textEdit_2;

    void setupUi(QWidget *oblsch)
    {
        if (oblsch->objectName().isEmpty())
            oblsch->setObjectName(QStringLiteral("oblsch"));
        oblsch->setEnabled(true);
        oblsch->resize(750, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(oblsch->sizePolicy().hasHeightForWidth());
        oblsch->setSizePolicy(sizePolicy);
        oblsch->setMinimumSize(QSize(750, 400));
        oblsch->setMaximumSize(QSize(750, 400));
        oblsch->setWindowTitle(QString::fromUtf8("Obliczenia wysoko\305\233ci schod\303\263w"));
        textBrowser = new QTextBrowser(oblsch);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 210, 731, 181));
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textBrowser->setMouseTracking(true);
        textBrowser->setFocusPolicy(Qt::StrongFocus);
        textBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        textBrowser->setAcceptDrops(true);
        textBrowser->setInputMethodHints(Qt::ImhMultiLine);
        textBrowser->setTabChangesFocus(false);
        textBrowser->setUndoRedoEnabled(false);
        textBrowser->setOverwriteMode(false);
        pushButton = new QPushButton(oblsch);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 150, 111, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton_2 = new QPushButton(oblsch);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 140, 121, 51));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        pushButton_2->setFont(font);
        pushButton_2->setAutoExclusive(false);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);
        layoutWidget = new QWidget(oblsch);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 12, 438, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radio1 = new QRadioButton(layoutWidget);
        radio1->setObjectName(QStringLiteral("radio1"));
        radio1->setEnabled(true);
        radio1->setCursor(QCursor(Qt::ArrowCursor));
        radio1->setAcceptDrops(false);
        radio1->setAutoFillBackground(false);
        radio1->setCheckable(true);
        radio1->setChecked(true);
        radio1->setAutoRepeat(false);
        radio1->setAutoExclusive(true);

        verticalLayout->addWidget(radio1);

        radio2 = new QRadioButton(layoutWidget);
        radio2->setObjectName(QStringLiteral("radio2"));

        verticalLayout->addWidget(radio2);

        radio3 = new QRadioButton(layoutWidget);
        radio3->setObjectName(QStringLiteral("radio3"));

        verticalLayout->addWidget(radio3);

        radio4 = new QRadioButton(layoutWidget);
        radio4->setObjectName(QStringLiteral("radio4"));

        verticalLayout->addWidget(radio4);

        radio5 = new QRadioButton(layoutWidget);
        radio5->setObjectName(QStringLiteral("radio5"));

        verticalLayout->addWidget(radio5);

        radio6 = new QRadioButton(layoutWidget);
        radio6->setObjectName(QStringLiteral("radio6"));

        verticalLayout->addWidget(radio6);

        label = new QLabel(oblsch);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 40, 121, 31));
        label_2 = new QLabel(oblsch);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(690, 40, 41, 31));
        label_3 = new QLabel(oblsch);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(480, 80, 151, 51));
        textEdit_1 = new QLineEdit(oblsch);
        textEdit_1->setObjectName(QStringLiteral("textEdit_1"));
        textEdit_1->setGeometry(QRect(640, 40, 39, 21));
        textEdit_2 = new QLineEdit(oblsch);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(640, 90, 41, 21));
        layoutWidget->raise();
        textBrowser->raise();
        pushButton->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        textEdit_1->raise();
        textEdit_2->raise();

        retranslateUi(oblsch);

        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(oblsch);
    } // setupUi

    void retranslateUi(QWidget *oblsch)
    {
#ifndef QT_NO_TOOLTIP
        textBrowser->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        textBrowser->setHtml(QApplication::translate("oblsch", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("oblsch", "Zapisz do pliku", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("oblsch", "Oblicz", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        radio1->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        radio1->setText(QApplication::translate("oblsch", "Budynki mieszkalne jednorodzinne oraz mieszkania dwupoziomowe.", Q_NULLPTR));
        radio2->setText(QApplication::translate("oblsch", "Budynki mieszkalne wielorodzinne oraz budynki u\305\274ytecznosci publicznej.", Q_NULLPTR));
        radio3->setText(QApplication::translate("oblsch", "Przedszkola i \305\274\305\202obki.", Q_NULLPTR));
        radio4->setText(QApplication::translate("oblsch", "Budynki opieki zdrowotnej.", Q_NULLPTR));
        radio5->setText(QApplication::translate("oblsch", "Gara\305\274e wbudowane i wolno stoj\304\205ce oraz budynki us\305\202ugowe do 10 osob.", Q_NULLPTR));
        radio6->setText(QApplication::translate("oblsch", "Schody do kondygnacji podziemnej.", Q_NULLPTR));
        label->setText(QApplication::translate("oblsch", "Wysoko\305\233\304\207 kondygnacji:", Q_NULLPTR));
        label_2->setText(QApplication::translate("oblsch", "cm", Q_NULLPTR));
        label_3->setText(QApplication::translate("oblsch", "Minimalna ilo\305\233\304\207 rozwi\304\205za\305\204: ", Q_NULLPTR));
        textEdit_1->setText(QApplication::translate("oblsch", "300", Q_NULLPTR));
        textEdit_2->setText(QApplication::translate("oblsch", "3", Q_NULLPTR));
        Q_UNUSED(oblsch);
    } // retranslateUi

};

namespace Ui {
    class oblsch: public Ui_oblsch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBLSCH_H
