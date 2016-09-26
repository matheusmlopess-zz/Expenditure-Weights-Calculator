/********************************************************************************
** Form generated from reading UI file 'despesasUImess.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESPESASUIMESS_H
#define UI_DESPESASUIMESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_despesas
{
public:
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_11;
    QDateEdit *dateEdit;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;

    void setupUi(QDialog *despesas)
    {
        if (despesas->objectName().isEmpty())
            despesas->setObjectName(QStringLiteral("despesas"));
        despesas->resize(411, 250);
        groupBox = new QGroupBox(despesas);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 141, 221));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 30, 100, 20));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 50, 100, 20));
        radioButton_6 = new QRadioButton(groupBox);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(10, 70, 100, 20));
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 90, 81, 20));
        radioButton_10 = new QRadioButton(groupBox);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setGeometry(QRect(10, 110, 100, 20));
        radioButton_7 = new QRadioButton(groupBox);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(10, 170, 100, 20));
        radioButton_8 = new QRadioButton(groupBox);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(10, 150, 100, 20));
        radioButton_9 = new QRadioButton(groupBox);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(10, 130, 100, 20));
        radioButton_11 = new QRadioButton(groupBox);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setGeometry(QRect(10, 190, 100, 20));
        dateEdit = new QDateEdit(despesas);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(260, 60, 121, 21));
        QFont font;
        font.setPointSize(10);
        dateEdit->setFont(font);
        dateEdit->setCalendarPopup(false);
        dateEdit->setTimeSpec(Qt::LocalTime);
        textBrowser_2 = new QTextBrowser(despesas);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setEnabled(false);
        textBrowser_2->setGeometry(QRect(160, 30, 281, 61));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        textBrowser_2->setFont(font1);
        textBrowser_2->setAutoFillBackground(false);
        textBrowser_2->setFrameShape(QFrame::NoFrame);
        pushButton = new QPushButton(despesas);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 210, 80, 22));
        pushButton_2 = new QPushButton(despesas);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 120, 111, 31));
        textBrowser_3 = new QTextBrowser(despesas);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setEnabled(false);
        textBrowser_3->setGeometry(QRect(160, 90, 101, 31));
        textBrowser_3->setFont(font1);
        textBrowser_3->setAutoFillBackground(false);
        textBrowser_3->setFrameShape(QFrame::NoFrame);
        textEdit = new QTextEdit(despesas);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(160, 120, 121, 31));
        textEdit_2 = new QTextEdit(despesas);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(160, 180, 241, 21));
        textBrowser_4 = new QTextBrowser(despesas);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setEnabled(false);
        textBrowser_4->setGeometry(QRect(160, 160, 101, 31));
        textBrowser_4->setFont(font1);
        textBrowser_4->setAutoFillBackground(false);
        textBrowser_4->setFrameShape(QFrame::NoFrame);
        textBrowser_5 = new QTextBrowser(despesas);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setEnabled(false);
        textBrowser_5->setGeometry(QRect(160, 210, 101, 31));
        textBrowser_5->setFont(font1);
        textBrowser_5->setAutoFillBackground(false);
        textBrowser_5->setFrameShape(QFrame::NoFrame);
        textBrowser_4->raise();
        groupBox->raise();
        textBrowser_2->raise();
        dateEdit->raise();
        pushButton->raise();
        pushButton_2->raise();
        textBrowser_3->raise();
        textEdit->raise();
        textEdit_2->raise();
        textBrowser_5->raise();

        retranslateUi(despesas);

        QMetaObject::connectSlotsByName(despesas);
    } // setupUi

    void retranslateUi(QDialog *despesas)
    {
        despesas->setWindowTitle(QApplication::translate("despesas", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("despesas", "Adicionar Despesas:", 0));
        radioButton->setText(QApplication::translate("despesas", "Mercado", 0));
        radioButton_2->setText(QApplication::translate("despesas", "Transporte", 0));
        radioButton_6->setText(QApplication::translate("despesas", "Estudos", 0));
        radioButton_5->setText(QApplication::translate("despesas", "Lazer", 0));
        radioButton_10->setText(QApplication::translate("despesas", "Vestuario", 0));
        radioButton_7->setText(QApplication::translate("despesas", "Saude", 0));
        radioButton_8->setText(QApplication::translate("despesas", "Animais", 0));
        radioButton_9->setText(QApplication::translate("despesas", "Seguros", 0));
        radioButton_11->setText(QApplication::translate("despesas", "Outros", 0));
        dateEdit->setDisplayFormat(QApplication::translate("despesas", "MM/yyyy", 0));
        textBrowser_2->setHtml(QApplication::translate("despesas", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400; color:#00007f;\">Adicionar despesas para <br /><br />(Mes / Ano) :</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("despesas", "Sair", 0));
        pushButton_2->setText(QApplication::translate("despesas", "ADD Despesa", 0));
        textBrowser_3->setHtml(QApplication::translate("despesas", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400; color:#00007f;\">VALOR R$:</span></p></body></html>", 0));
        textBrowser_4->setHtml(QApplication::translate("despesas", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400; color:#00007f;\">Obs*:</span></p></body></html>", 0));
        textBrowser_5->setHtml(QApplication::translate("despesas", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:400; color:#aa0000;\">(*) Opcional</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class despesas: public Ui_despesas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESPESASUIMESS_H
