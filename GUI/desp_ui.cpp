#include "desp_ui.h"
#include "despesastipo.h"
#include "ui_desp_ui.h"
#include <QString>
#include <QDebug>
#include <iostream>
#include <Qt>
#include <QColor>
#include <QMessageBox>
#include <cmath>
#include <sstream>
#include <QKeyEvent>
#include <QEvent>
#include <QTimer>


using namespace std;

QString nomeGlobal;
desp_ui::desp_ui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::desp_ui)
{
    ui->setupUi(this);
}

desp_ui::~desp_ui()
{
    delete ui;
}
void desp_ui::nomeDaPessoa(QString nomeDapssoa){

    //qDebug() << nomeDapssoa;
    nomeGlobal = nomeDapssoa;
    ui->textEdit_3->setTextColor(QColor( "purple" ));
    ui->textEdit_3->setText(nomeDapssoa);
    ui->textEdit_3->setAlignment(Qt::AlignCenter);
}
void desp_ui::on_pushButton_clicked(){   this->close(); }
void desp_ui::on_pushButton_2_clicked()
{
    bool mercado =    ui->mercado->isChecked();
    bool estudos =    ui->estudos->isChecked();
    bool lazer =      ui->lazer->isChecked();
    bool outros =     ui->outros->isChecked();
    bool animais =    ui->animais->isChecked();
    bool saude =      ui->saude->isChecked();
    bool seguros =    ui->seguros->isChecked();
    bool transporte = ui->transporte->isChecked();
    bool vestuario =  ui->vestuario->isChecked();
    bool okay, vazio;
    if(mercado|estudos|lazer|outros|animais|saude|seguros|transporte|vestuario){

            if(ui->mercado->isChecked()){

                        okay =isFloat (ui->textEdit->toPlainText().toStdString());
                        vazio=ui->textEdit->toPlainText().isEmpty();
                        if(okay & !vazio){
                            despesasTipo *novaDespesa =new despesasTipo(nomeGlobal,
                                                                        ui->dateEdit->date().year(),
                                                                        ui->dateEdit->date().month(),
                                                                        ui->textEdit->toPlainText().toFloat(),
                                                                        ui->mercado->text());
                            delete novaDespesa;
                            QTimer::singleShot(200,this , SLOT(confima()));
                        }else{  erroRR();    }
                }
            if(ui->estudos->isChecked ()){
                okay =isFloat (ui->textEdit->toPlainText().toStdString());
                vazio=ui->textEdit->toPlainText().isEmpty();
                if(okay & !vazio){
                    despesasTipo *novaDespesa =new despesasTipo(nomeGlobal,
                                                                ui->dateEdit->date().year(),
                                                                ui->dateEdit->date().month(),
                                                                ui->textEdit->toPlainText().toFloat(),
                                                                ui->estudos->text());
                     delete novaDespesa;
                     QTimer::singleShot(200,this , SLOT(confima()));
                }else{  erroRR();}
            }
            if(ui->lazer->isChecked ()){
                okay =isFloat (ui->textEdit->toPlainText().toStdString());
                vazio=ui->textEdit->toPlainText().isEmpty();
                if(okay & !vazio){
                    despesasTipo *novaDespesa =new despesasTipo(nomeGlobal,
                                                                ui->dateEdit->date().year(),
                                                                ui->dateEdit->date().month(),
                                                                ui->textEdit->toPlainText().toFloat(),
                                                                ui->lazer->text());
                     delete novaDespesa;
                     QTimer::singleShot(200,this , SLOT(confima()));
                }else{  erroRR();}
            }
            if(ui->outros->isChecked ()){
                okay =isFloat (ui->textEdit->toPlainText().toStdString());
                vazio=ui->textEdit->toPlainText().isEmpty();
                if(okay & !vazio){
                    despesasTipo *novaDespesa =new despesasTipo(nomeGlobal,
                                                                ui->dateEdit->date().year(),
                                                                ui->dateEdit->date().month(),
                                                                ui->textEdit->toPlainText().toFloat(),
                                                                ui->outros->text());
                     delete novaDespesa;
                     QTimer::singleShot(200,this , SLOT(confima()));
                }else{  erroRR();}
            }
            if(ui->animais->isChecked ()){
                okay =isFloat (ui->textEdit->toPlainText().toStdString());
                vazio=ui->textEdit->toPlainText().isEmpty();
                if(okay & !vazio){
                    despesasTipo *novaDespesa =new despesasTipo(nomeGlobal,
                                                                ui->dateEdit->date().year(),
                                                                ui->dateEdit->date().month(),
                                                                ui->textEdit->toPlainText().toFloat(),
                                                                ui->animais->text());
                    delete novaDespesa;
                     QTimer::singleShot(200,this , SLOT(confima()));
                }else{  erroRR();}
            }
            if(ui->saude->isChecked ()){
                okay =isFloat (ui->textEdit->toPlainText().toStdString());
                vazio=ui->textEdit->toPlainText().isEmpty();
                if(okay & !vazio){
                    despesasTipo *novaDespesa =new despesasTipo(nomeGlobal,
                                                                ui->dateEdit->date().year(),
                                                                ui->dateEdit->date().month(),
                                                                ui->textEdit->toPlainText().toFloat(),
                                                                ui->saude->text());
                     delete novaDespesa;
                     QTimer::singleShot(200,this , SLOT(confima()));
                }else{  erroRR();}
            }
            if(ui->seguros->isChecked ()){
                okay =isFloat (ui->textEdit->toPlainText().toStdString());
                vazio=ui->textEdit->toPlainText().isEmpty();
                if(okay & !vazio){
                    despesasTipo *novaDespesa =new despesasTipo(nomeGlobal,
                                                                ui->dateEdit->date().year(),
                                                                ui->dateEdit->date().month(),
                                                                ui->textEdit->toPlainText().toFloat(),
                                                                ui->seguros->text());
                     delete novaDespesa;
                     QTimer::singleShot(200,this , SLOT(confima()));
                }else{  erroRR();}
            }
            if(ui->transporte->isChecked ()){
                okay =isFloat (ui->textEdit->toPlainText().toStdString());
                vazio=ui->textEdit->toPlainText().isEmpty();
                if(okay & !vazio){
                    despesasTipo *novaDespesa =new despesasTipo(nomeGlobal,
                                                                ui->dateEdit->date().year(),
                                                                ui->dateEdit->date().month(),
                                                                ui->textEdit->toPlainText().toFloat(),
                                                                ui->transporte->text());
                    delete novaDespesa;
                     QTimer::singleShot(200,this , SLOT(confima()));
                }else{  erroRR();}
            }
            if(ui->vestuario->isChecked ()){
                okay =isFloat (ui->textEdit->toPlainText().toStdString());
                vazio=ui->textEdit->toPlainText().isEmpty();
                if(okay & !vazio){
                    despesasTipo *novaDespesa =new despesasTipo(nomeGlobal,
                                                                ui->dateEdit->date().year(),
                                                                ui->dateEdit->date().month(),
                                                                ui->textEdit->toPlainText().toFloat(),
                                                                ui->vestuario->text());
                    delete novaDespesa;
                     QTimer::singleShot(200,this , SLOT(confima()));
        }else{  erroRR();}
    }


    } else {
        QMessageBox messageBox;
        messageBox.critical(0,"Erro"," Selecione uma DESPESA!");
        messageBox.setFixedSize(500,200);
    }
}



void desp_ui::on_mercado_clicked()
{


}

bool desp_ui::isFloat( string myString ) {
    std::istringstream iss(myString);
    float f;
    iss >> noskipws >> f;
    return iss.eof() && !iss.fail();
}

void desp_ui::erroRR(){
    QMessageBox messageBox2;
    messageBox2.critical(0,"Erro no valor (R$) !! ","1 - Deve apresentar um valor correnpondente em R$ \n2 - Ser superior a 0!\n\n                        Tente novamente");
    messageBox2.setFixedSize(500,200);
}

void desp_ui::confima(){
    QMessageBox messageBox3;
    messageBox3.information(0,"                                :)        ","Despesa adicionada com sucesso!");
    messageBox3.setFixedSize(500,200);
}


