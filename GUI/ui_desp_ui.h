/********************************************************************************
** Form generated from reading UI file 'desp_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESP_UI_H
#define UI_DESP_UI_H

#include <QtCore/QDate>
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

class Ui_desp_ui
{
public:
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_5;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_2;
    QTextEdit *textEdit_2;
    QDateEdit *dateEdit;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QRadioButton *mercado;
    QRadioButton *transporte;
    QRadioButton *estudos;
    QRadioButton *lazer;
    QRadioButton *vestuario;
    QRadioButton *saude;
    QRadioButton *animais;
    QRadioButton *seguros;
    QRadioButton *outros;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_3;

    void setupUi(QDialog *desp_ui)
    {
        if (desp_ui->objectName().isEmpty())
            desp_ui->setObjectName(QStringLiteral("desp_ui"));
        desp_ui->resize(300, 265);
        textBrowser_3 = new QTextBrowser(desp_ui);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setEnabled(false);
        textBrowser_3->setGeometry(QRect(140, 100, 151, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        textBrowser_3->setFont(font);
        textBrowser_3->setAutoFillBackground(false);
        textBrowser_3->setFrameShape(QFrame::NoFrame);
        textBrowser_5 = new QTextBrowser(desp_ui);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setEnabled(false);
        textBrowser_5->setGeometry(QRect(130, 230, 101, 31));
        textBrowser_5->setFont(font);
        textBrowser_5->setAutoFillBackground(false);
        textBrowser_5->setFrameShape(QFrame::NoFrame);
        pushButton = new QPushButton(desp_ui);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 230, 61, 22));
        textBrowser_4 = new QTextBrowser(desp_ui);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setEnabled(false);
        textBrowser_4->setGeometry(QRect(160, 180, 121, 31));
        textBrowser_4->setFont(font);
        textBrowser_4->setAutoFillBackground(false);
        textBrowser_4->setFrameShape(QFrame::NoFrame);
        textBrowser_2 = new QTextBrowser(desp_ui);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setEnabled(false);
        textBrowser_2->setGeometry(QRect(130, 40, 161, 61));
        textBrowser_2->setFont(font);
        textBrowser_2->setAutoFillBackground(false);
        textBrowser_2->setFrameShape(QFrame::NoFrame);
        textEdit_2 = new QTextEdit(desp_ui);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(140, 200, 151, 23));
        dateEdit = new QDateEdit(desp_ui);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(140, 80, 151, 21));
        QFont font1;
        font1.setPointSize(10);
        dateEdit->setFont(font1);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dateEdit->setAccelerated(false);
        dateEdit->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        dateEdit->setProperty("showGroupSeparator", QVariant(false));
        dateEdit->setMaximumTime(QTime(23, 59, 59));
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(0);
        dateEdit->setTimeSpec(Qt::LocalTime);
        dateEdit->setDate(QDate(2016, 1, 1));
        textEdit = new QTextEdit(desp_ui);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(140, 121, 151, 21));
        textEdit->setMinimumSize(QSize(0, 5));
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setFrameShadow(QFrame::Sunken);
        textEdit->setLineWidth(1);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setAutoFormatting(QTextEdit::AutoNone);
        textEdit->setLineWrapMode(QTextEdit::NoWrap);
        textEdit->setLineWrapColumnOrWidth(0);
        textEdit->setReadOnly(false);
        groupBox = new QGroupBox(desp_ui);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 111, 215));
        mercado = new QRadioButton(groupBox);
        mercado->setObjectName(QStringLiteral("mercado"));
        mercado->setGeometry(QRect(10, 30, 100, 20));
        transporte = new QRadioButton(groupBox);
        transporte->setObjectName(QStringLiteral("transporte"));
        transporte->setGeometry(QRect(10, 50, 100, 20));
        estudos = new QRadioButton(groupBox);
        estudos->setObjectName(QStringLiteral("estudos"));
        estudos->setGeometry(QRect(10, 70, 100, 20));
        lazer = new QRadioButton(groupBox);
        lazer->setObjectName(QStringLiteral("lazer"));
        lazer->setGeometry(QRect(10, 90, 81, 20));
        vestuario = new QRadioButton(groupBox);
        vestuario->setObjectName(QStringLiteral("vestuario"));
        vestuario->setGeometry(QRect(10, 110, 100, 20));
        saude = new QRadioButton(groupBox);
        saude->setObjectName(QStringLiteral("saude"));
        saude->setGeometry(QRect(10, 170, 100, 20));
        animais = new QRadioButton(groupBox);
        animais->setObjectName(QStringLiteral("animais"));
        animais->setGeometry(QRect(10, 150, 100, 20));
        seguros = new QRadioButton(groupBox);
        seguros->setObjectName(QStringLiteral("seguros"));
        seguros->setGeometry(QRect(10, 130, 100, 20));
        outros = new QRadioButton(groupBox);
        outros->setObjectName(QStringLiteral("outros"));
        outros->setGeometry(QRect(10, 190, 100, 20));
        pushButton_2 = new QPushButton(desp_ui);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 150, 151, 26));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        textEdit_3 = new QTextEdit(desp_ui);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(-10, 10, 331, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        textEdit_3->setFont(font2);
        textEdit_3->setLayoutDirection(Qt::LeftToRight);
        textEdit_3->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        textEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3->setLineWrapMode(QTextEdit::WidgetWidth);

        retranslateUi(desp_ui);

        QMetaObject::connectSlotsByName(desp_ui);
    } // setupUi

    void retranslateUi(QDialog *desp_ui)
    {
        desp_ui->setWindowTitle(QApplication::translate("desp_ui", "Dialog", 0));
        textBrowser_3->setHtml(QApplication::translate("desp_ui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:7pt; color:#00007f;\">Valor R$: (Ex: 110.55)</span></p></body></html>", 0));
        textBrowser_5->setHtml(QApplication::translate("desp_ui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; color:#aa0000;\">(*) Opcional</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("desp_ui", "Sair", 0));
        textBrowser_4->setHtml(QApplication::translate("desp_ui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:7pt; font-weight:400; color:#00007f;\">Obs</span><span style=\" font-family:'Sans Serif'; font-size:7pt; font-weight:400; color:#ff0000;\">*</span><span style=\" font-family:'Sans Serif'; font-size:7pt; font-weight:400; color:#00007f;\">(Ex: Roda do Carro ):</span></p></body></html>", 0));
        textBrowser_2->setHtml(QApplication::translate("desp_ui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:7pt; color:#00007f;\">Adicionar despesas para </span><span style=\" font-family:'Sans Serif'; font-size:7pt; font-weight:400; color:#00007f;\"><br /></span><span style=\" font-family:'Sans Serif'; font-size:7pt; color:#00007f;\">(Mes / Ano) :</span></p></body></html>", 0));
        textEdit_2->setHtml(QApplication::translate("desp_ui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        dateEdit->setDisplayFormat(QApplication::translate("desp_ui", "MM/yyyy", 0));
        textEdit->setHtml(QApplication::translate("desp_ui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        groupBox->setTitle(QApplication::translate("desp_ui", "Tipo de despesas", 0));
        mercado->setText(QApplication::translate("desp_ui", "Mercado", 0));
        transporte->setText(QApplication::translate("desp_ui", "Transporte", 0));
        estudos->setText(QApplication::translate("desp_ui", "Estudos", 0));
        lazer->setText(QApplication::translate("desp_ui", "Lazer", 0));
        vestuario->setText(QApplication::translate("desp_ui", "Vestuario", 0));
        saude->setText(QApplication::translate("desp_ui", "Saude", 0));
        animais->setText(QApplication::translate("desp_ui", "Animais", 0));
        seguros->setText(QApplication::translate("desp_ui", "Seguros", 0));
        outros->setText(QApplication::translate("desp_ui", "Outros", 0));
        pushButton_2->setText(QApplication::translate("desp_ui", "ADD Despesa", 0));
        textEdit_3->setHtml(QApplication::translate("desp_ui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt; font-weight:400;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class desp_ui: public Ui_desp_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESP_UI_H
