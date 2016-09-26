#include "novocadastro.h"
#include "ui_novocadastro.h"
#include <iostream>
#include <QString>
#include <QStringList>
#include <QDebug>
#include <iostream>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <fstream>
#include <ios>
#include <QMessageBox>
#include <QDir>

QString suxc = QDir::currentPath();
QStringList pathDir =suxc.split("/build");
QString finalPath_ = pathDir[0]+"/bancoDDado.txt";
//QString finalPath_ = pathDir[0]+"/calcGastosFinal/bancoDDado.txt";
const char *pathToremove_ =  (finalPath_.toStdString()).c_str();


using namespace std;

novoCadastro::novoCadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::novoCadastro)
{
    ui->setupUi(this);
}

novoCadastro::~novoCadastro()
{
    delete ui;
}


std::string novoCadastro::on_pushButton_clicked()
{

    QString cadastroAux;
    std::string cadastro;
    int aux ;
    bool existe = false;
    cadastro = ui->lineEdit->text().toStdString() + ",";
    aux =  ui->dateEdit->date().day();
    cadastro = cadastro+ std::to_string(aux)+ ",";
    aux =  ui->dateEdit->date().month();
    cadastro = cadastro+ std::to_string(aux)+ ",";
    aux =  ui->dateEdit->date().year();
    cadastro = cadastro+ std::to_string(aux)+ ",";
    cadastro = cadastro+ ui->lineEdit_2->text().toStdString() + ",";
    cadastro = cadastro+ ui->lineEdit_3->text().toStdString();


    existe = escreveNaBaseDDados(cadastro);

    if(existe==false){
    emit sendTextInt( ui->lineEdit->text() );
    emit sendTextIntList( cadastroAux.fromStdString(cadastro));
    }
    this->close();
    return cadastro;

}

bool novoCadastro::escreveNaBaseDDados(std::string pessoNova) {

    bool verificaSejaexiste = false;

    ofstream output(finalPath_.toStdString(), std::ios::app);
    verificaSejaexiste = verificaSeExiste(pessoNova);

    if (verificaSejaexiste == false){
        output << pessoNova << endl;
    }
    if (verificaSejaexiste == true){
        QMessageBox messageBox;
        messageBox.critical(0,"Erro"," Ja esta na base de dados. Tente novamente!");
        messageBox.setFixedSize(500,200);
        this->close();
    }

    return verificaSejaexiste;
}

void novoCadastro::lerDaBaseDDados() {

    //bool exite = false;
    string linha;
    ifstream abreArquivo;
    abreArquivo.open(finalPath_.toStdString());  //open the file

    while (!abreArquivo.eof()) // To get you all the lines.
    {
        getline(abreArquivo, linha); // Saves the line in STRING.
        stringstream ss(linha);
        std::string token;

        while (std::getline(ss, token, ','))
        {
          //  std::cout << token << '\n';
        }

    }
    abreArquivo.close();
}

bool novoCadastro::verificaSeExiste(string novaPessoa) {

    bool exite = false;
    string linha;
    ifstream abreArquivo;
    abreArquivo.open(finalPath_.toStdString());
    while (!abreArquivo.eof())
    {
        getline(abreArquivo, linha);
      //  cout << linha <<endl;
        if (linha == novaPessoa)
            exite = true;
    }
    abreArquivo.close();
    return exite;
}

