/********************************************************************************
** Form generated from reading UI file 'novocadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOVOCADASTRO_H
#define UI_NOVOCADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_novoCadastro
{
public:
    QFrame *frame;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit_2;
    QTextBrowser *textBrowser_5;
    QFrame *frame_2;
    QTextBrowser *textBrowser_3;
    QDateEdit *dateEdit;
    QFrame *frame_3;
    QTextBrowser *textBrowser_6;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QFrame *frame_4;
    QTextBrowser *textBrowser_4;

    void setupUi(QDialog *novoCadastro)
    {
        if (novoCadastro->objectName().isEmpty())
            novoCadastro->setObjectName(QStringLiteral("novoCadastro"));
        novoCadastro->resize(454, 193);
        frame = new QFrame(novoCadastro);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 431, 41));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 10, 271, 21));
        textBrowser_2 = new QTextBrowser(frame);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setEnabled(false);
        textBrowser_2->setGeometry(QRect(10, 10, 401, 21));
        textBrowser_2->setFrameShape(QFrame::NoFrame);
        textBrowser_2->raise();
        lineEdit->raise();
        textBrowser = new QTextBrowser(novoCadastro);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setEnabled(false);
        textBrowser->setGeometry(QRect(0, 0, 451, 191));
        textBrowser->setFrameShape(QFrame::Box);
        lineEdit_2 = new QLineEdit(novoCadastro);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 110, 191, 21));
        textBrowser_5 = new QTextBrowser(novoCadastro);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setEnabled(false);
        textBrowser_5->setGeometry(QRect(320, 110, 101, 21));
        textBrowser_5->setFrameShape(QFrame::NoFrame);
        frame_2 = new QFrame(novoCadastro);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 60, 431, 41));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        textBrowser_3 = new QTextBrowser(frame_2);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setEnabled(false);
        textBrowser_3->setGeometry(QRect(10, 10, 321, 16));
        textBrowser_3->setFrameShape(QFrame::NoFrame);
        dateEdit = new QDateEdit(frame_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(140, 10, 201, 23));
        dateEdit->setCalendarPopup(true);
        frame_3 = new QFrame(novoCadastro);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 140, 431, 41));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Raised);
        textBrowser_6 = new QTextBrowser(frame_3);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setEnabled(false);
        textBrowser_6->setGeometry(QRect(10, 10, 161, 21));
        textBrowser_6->setFrameShape(QFrame::NoFrame);
        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 0, 91, 41));
        QFont font;
        font.setPointSize(11);
        pushButton->setFont(font);
        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 10, 191, 21));
        frame_4 = new QFrame(novoCadastro);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(10, 100, 431, 41));
        frame_4->setFrameShape(QFrame::Panel);
        frame_4->setFrameShadow(QFrame::Raised);
        textBrowser_4 = new QTextBrowser(frame_4);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setEnabled(false);
        textBrowser_4->setGeometry(QRect(10, 10, 401, 21));
        textBrowser_4->setFrameShape(QFrame::NoFrame);
        textBrowser->raise();
        frame->raise();
        frame_2->raise();
        frame_4->raise();
        textBrowser_5->raise();
        lineEdit_2->raise();
        frame_3->raise();

        retranslateUi(novoCadastro);

        QMetaObject::connectSlotsByName(novoCadastro);
    } // setupUi

    void retranslateUi(QDialog *novoCadastro)
    {
        novoCadastro->setWindowTitle(QApplication::translate("novoCadastro", "Dialog", 0));
        lineEdit->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("novoCadastro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#00007f;\">Nome completo :</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt; color:#00007f;\"><br /></p></body></html>", 0));
        textBrowser->setHtml(QApplication::translate("novoCadastro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:7pt; color:#aa5500;\">DADOS PESSOAIS</span></p></body></html>", 0));
        lineEdit_2->setText(QString());
        textBrowser_5->setHtml(QApplication::translate("novoCadastro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Reais</span></p></body></html>", 0));
        textBrowser_3->setHtml(QApplication::translate("novoCadastro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#00007f;\">Data de Nascimento :</span></p></body></html>", 0));
        dateEdit->setDisplayFormat(QApplication::translate("novoCadastro", "dd/MM/yyyy", 0));
        textBrowser_6->setHtml(QApplication::translate("novoCadastro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#00007f;\">ID que identifica Familia<br /></span><span style=\" font-family:'Sans Serif'; font-size:8pt; color:#00007f;\">(EX: SOBRENOME_UPERCASE) </span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("novoCadastro", "Cadastrar", 0));
        lineEdit_3->setText(QString());
        textBrowser_4->setHtml(QApplication::translate("novoCadastro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#00007f;\">Renda mensal * : </span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class novoCadastro: public Ui_novoCadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOVOCADASTRO_H
