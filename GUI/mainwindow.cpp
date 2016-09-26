#include "mainwindow.h"
#include "pessoas.h"
#include "ui_mainwindow.h"
#include "piechart.h"
#include "desp_ui.h"
#include "novocadastro.h"
#include "metodoum.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <list>
#include <ios>
#include <fstream>
#include <chrono>
#include <thread>
#include <sstream>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <QObject>
#include "interfc.h"
#include <map>
#include <ctime>
#include <time.h>
#include <cstdio>
#include <chrono>
#include <thread>
#include <QListWidget>
#include <QListWidgetItem>
#include <QStringList>
#include <QString>
#include <QCoreApplication>
#include <QDir>
#include <QDateTime>
#include <sstream>
#include <fstream>
#include <iostream>
#include <ios>

#include <QApplication>
#include <QtGui>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QPen>


QT_CHARTS_USE_NAMESPACE

namespace coverte{
   template < typename T > std::string inteiro_paraTexto( const T& n ){
               std::ostringstream stm ;
               stm << n ;
       return  stm.str() ; //retorna string de um inteiro
   }
}

using namespace std;
float salarioCorrigido[12];
    float salario [12];
metodoUM * novaAnalise = new metodoUM;
QString suxd = QDir::currentPath();
QStringList pathDirs =suxd.split("/build");
QString finalPath2 = pathDirs[0]+"/bancoDDado.txt";
QString paraDespesas = pathDirs[0];

const char *pathToremove =  (finalPath2.toStdString()).c_str();
const char *pathParRenomear =  (paraDespesas.toStdString()).c_str();
map<QString,QString> pessoasDB;

//****Inicializa GUI********************************//
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow){
   ui->setupUi(this);
   ui->pushButton_3->hide();
   ui->pushButton_4->hide();
   ui->pushButton_9->hide();
   ui->pushButton_10->hide();
   ui->textBrowser_2->hide();
   ui->tabWidget->setCurrentIndex(0);
   ui->tabWidget->setTabEnabled(0,0);
   ui->tabWidget->setTabEnabled(1,0);
   ui->tabWidget->setTabEnabled(2,0);








   lerDaBaseDDados();
}


MainWindow::~MainWindow(){   delete ui;  }

/*********pushbtm Add Pessoa ***********/
void MainWindow::on_pushButton_clicked(){
    interfc *newtest = new interfc;
    QObject::connect( newtest, SIGNAL( sendText( const QString & ) ), this, SLOT( updateText( const QString & ) ) );
    QObject::connect( newtest, SIGNAL( sendTextList( const QString & ) ), this, SLOT( updateList( const QString & ) ) );
    newtest->novaEntrada();
    ui->textBrowser_2->hide();
}

/************* Botao Exportar ***********/
void MainWindow::on_pushButton_11_clicked(){
        ui->textBrowser_2->hide();
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index)
{

    QString stringComNomeDaEntrada= ui->listWidget->item(index.row())->text(), dadosPessoais,aux,
            ano="Ano Nasc.: ",
            dia    ="Dia Nasc.: ",
            mes    ="Mes Nasc.: ",
            renda  ="Salario atual.: ",
            idade  ="idade .: ",
            idFAM  ="ID_Fam.: ";
    QDateTime now = QDateTime::currentDateTime();
            ui->textBrowser_2->hide();
            ui->pushButton_3->show();
            ui->pushButton_4->show();
            ui->pushButton_9->show();
            ui->pushButton_10->show();
            ui->textBrowser->clear();
            ui->tabWidget->setCurrentIndex(0);
            ui->tabWidget->setTabEnabled(0,0);
            ui->tabWidget->setTabEnabled(1,0);
            ui->tabWidget->setTabEnabled(2,0);
    dadosPessoais=pessoasDB.find(stringComNomeDaEntrada)->second;

    QStringList fields = dadosPessoais.split(",");
    aux=fields[3];
    int idadeInt = now.date().year() - aux.toInt();
    aux = QString::number(idadeInt);
            ui->textBrowser->append(fields[0]);
            ui->textBrowser->append(idade+aux);
            ui->textBrowser->append(idFAM+fields[5]);
            ui->textBrowser->append(renda+fields[4]);
            ui->textBrowser->append("_____________________________");
            ui->textBrowser->append("Outros");
            ui->textBrowser->append(dia+fields[1]);
            ui->textBrowser->append(mes+fields[2]);
            ui->textBrowser->append(ano+fields[3]);
}

/*****Altera Entrada*******/
void MainWindow::on_pushButton_3_clicked(){
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->pushButton_9->hide();
    ui->pushButton_10->hide();
    //interfc *newtest = new interfc;

    QString stringComNomeDaEntrada= ui->listWidget->currentItem()->text(), dadosPessoais,aux;
            ui->textBrowser_2->hide();
            ui->textBrowser->clear();
    dadosPessoais=pessoasDB.find(stringComNomeDaEntrada)->second;
    QStringList fields = dadosPessoais.split(",");

    novoCadastro *novaPessoa = new novoCadastro;
                  novaPessoa->setModal(true);
                  novaPessoa->exec();

                          removedABaseDDados(pessoasDB.find(ui->listWidget->currentItem()->text())->second);
                          ui->listWidget->clear();
                          pessoasDB.clear();
                          lerDaBaseDDados();

/*
                        string linha,tipoDespesas,nome;
                             ifstream abreArquivo,calculo;
                             abreArquivo.open("belezaa.txt");
                                  while (!abreArquivo.eof()){
                                      getline(abreArquivo, linha);
                                      stringstream ss(linha);
                                      std::string token;
                                      int posicao =0;
                                      while (std::getline(ss, token, '_')){
                                              if(!token.empty()){
                                              if(posicao==0) tipoDespesas=token;
                                              if(posicao==1) nome= token;
                                              posicao++;
                                          }
                                      }
                                        //cout << linha << endl;

                                      if(!linha.empty() && !abreArquivo.eof() ){
                                      string linha2;
                                      calculo.open(linha);
                                          while(!calculo.eof()) {
                                              getline(calculo, linha2);
                                              //cout << linha2 << endl;
                                          }
                                          calculo.close();


                                          string teste = tipoDespesas+;
                                          string c = paraDespesas.toStdString() + a;
                                          const char *C = c.c_str();
                                          rename(C, "belezaa.txt");

                                       cout << "        [ " << tipoDespesas << " ] " << "nome : "  << nome << endl;
                                      }
                                  }

                                  string a = "/ANTIGO.txt";
                                  string c = paraDespesas.toStdString() + a;
                                  const char *C = c.c_str();
                                  rename(C, "belezaa.txt");
                                  */



}
/*****Exclui Entrada******/
void MainWindow::on_pushButton_4_clicked(){
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->pushButton_9->hide();
        ui->pushButton_10->hide();
    //    qDebug()<<pessoasDB.find(ui->listWidget->currentItem()->text())->second;
        removedABaseDDados(pessoasDB.find(ui->listWidget->currentItem()->text())->second);
        ui->listWidget->clear();
        pessoasDB.clear();
        lerDaBaseDDados();
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->pushButton_9->hide();
    ui->pushButton_10->hide();
    ui->tabWidget->setTabEnabled(0,1);
    ui->tabWidget->setCurrentIndex(0);
    ui->textBrowser_2->show();
    ui->textBrowser_2->clear();
    ui->textBrowser_2->append("1-Carregar Usuario : Carrega os usuarios ja cadastrados no program \n");
    ui->textBrowser_2->append("2-ADD Entrada - ");
    ui->textBrowser_2->append("3- Excluir dados de uma pessoa ja cadastrada  	   	       \n"  );
    ui->textBrowser_2->append("                    MENU DE DESPESAS                           \n "  );
    ui->textBrowser_2->append("4- Adiciona ou exclui despesas a uma pessoa ja cadastrada	  \n "  );
    ui->textBrowser_2->append("    Para adicionar basta digitar o valor normalmente           \n "  );
    ui->textBrowser_2->append("    Para excluir digite o sinal de menos (-) precedendo o valor \n"  );
    ui->textBrowser_2->append("5- Resultado de analises financeiras (pessoa ja cadastrada)  \n"  );
    ui->textBrowser_2->append("                OPCOES do ADMINISTRADOR                        \n "  );
    ui->textBrowser_2->append("6- Lista todas as pessoas cadastradas no programa		      \n "  );
    ui->textBrowser_2->append("7- Lista as familias cadastradas no programa   		        \n "  );
    ui->textBrowser_2->append("  ");
    ui->textBrowser_2->append("8- LEIAME(Descreve as opcoes do menu)                       \n "  );
}

void MainWindow::on_pushButton_released(){    if(ui->listWidget->count()>0)
                                                 ui->listWidget->item(0)->setSelected(true);            }
/******SIGNALS RECIVERS *****/
void  MainWindow::updateText( const QString & newText  ){    ui->listWidget->addItem(newText);          }
void  MainWindow::updateList( const QString & newText2 ){    QStringList fields = newText2.split(",");
                                                             pessoasDB[fields[0]] = newText2;           }
/*****pseudoDB handlers******/
void MainWindow::lerDaBaseDDados (){
    ui->textBrowser_2->hide();
    QFile file(finalPath2);
    QTextStream in(&file);
        if(!file.open(QIODevice::ReadOnly)) {  QMessageBox::information(0, "error", file.errorString()); }
        while(!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split(",");
                 ui->listWidget->addItem(fields[0]);
                 pessoas *novaPessoa = new pessoas(fields[0],
                                                   fields[1].toInt(),
                                                   fields[2].toInt(),
                                                   fields[3].toInt(),
                                                   fields[4].toInt(),
                                                   fields[5]         );
                 pessoasDB[fields[0]] = line;
                 delete novaPessoa;
        }
        file.close();
}

void MainWindow::removedABaseDDados(QString removeDaBaseDDads){
    string linha, removeDaBaseDDados = removeDaBaseDDads.toStdString();
    fstream abreArquivoRecover,abreArquivo;
    ofstream output("swap.txt", std::ios::app);
    abreArquivo.open(finalPath2.toStdString(), std::fstream::in| std::fstream::ios_base::out);

            while (!abreArquivo.eof()) 	{
                getline(abreArquivo, linha);
              //  cout << linha << endl;
                    if (linha != removeDaBaseDDados)
                                output << linha <<endl;
            }
            abreArquivo.close();
            output.close();
            remove(pathToremove);

    abreArquivoRecover.open("swap.txt");
    abreArquivo.open(finalPath2.toStdString(), std::fstream::ios_base::out);

            while (!abreArquivoRecover.eof()) 	{
                    getline(abreArquivoRecover, linha);
                            if(!linha.empty())
                                abreArquivo << linha << endl;
            }
            abreArquivoRecover.close();
            abreArquivo.close();
            remove("swap.txt");
}

/***********ADD despesas******/
void MainWindow::on_pushButton_9_clicked()
{

  //  qDebug() << ui->listWidget->currentItem()->text();
  //  qDebug() << ui->listWidget->currentRow();
    desp_ui *novaDespesa = new desp_ui;
    novaDespesa->nomeDaPessoa(ui->listWidget->currentItem()->text());

    std::ostringstream geraTxt2;
    geraTxt2 << paraDespesas.toStdString() <<"/Despesas_"<< ui->listWidget->currentItem()->text().toStdString()<<".txt";

    std::ofstream fs(geraTxt2.str());
        if(!fs)
        {
            QMessageBox messageBox1;
            messageBox1.critical(0,"Erro"," Arquivo não encontrado!");
            messageBox1.setFixedSize(500,200);

        }
        fs.close();


    novaDespesa->setModal(true);
    novaDespesa->exec();


}

/***Analise financeira****/
void MainWindow::on_pushButton_10_clicked()
{
    ui->grafico->show();
    ui->tabWidget->setCurrentIndex(1);
    ui->tabWidget->setTabEnabled(1,1);


    QString stringComNomeDaEntrada = ui->listWidget->currentItem()->text(),aux;
    QString dadosPessoais=pessoasDB.find(stringComNomeDaEntrada)->second;
    QStringList fields = dadosPessoais.split(",");
    QString salarioMedio = fields[4];


    for (int i = 0; i < 12; i++)
        salario[i]=salarioMedio.toFloat();
    ui->salJan->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[0])));
    ui->salFev->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[1])));
    ui->salMar->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[2])));
    ui->salAbr->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[3])));
    ui->salMai->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[4])));
    ui->salJun->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[5])));
    ui->salJul->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[6])));
    ui->salAgo->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[7])));
    ui->salSet->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[8])));
    ui->salOut->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[9])));
    ui->salNov->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[10])));
    ui->salDez->setText(aux.fromStdString(coverte::inteiro_paraTexto(salario[11])));

}

/******controla o mes***************/
void MainWindow::on_horizontalSlider_sliderMoved(int position){

    ui->lcdNumber->display(position);
    int mesEscolhido = ui->lcdNumber->value();
    int anoEscolhido = ui->dateEdit->date().year();
    std::ostringstream identificaArquivo;
    identificaArquivo << paraDespesas.toStdString() <<"/Despesas_"<< ui->listWidget->currentItem()->text().toStdString()<<".txt";

    metodoUM * novaAnalise2 = new metodoUM;
    novaAnalise2->MetodoUM(mesEscolhido,anoEscolhido,identificaArquivo.str());
    QCPBars *myBars = new QCPBars(ui->grafico->xAxis,ui->grafico->yAxis);
    myBars->setName("Analise Finaceira");
    QVector<double> keyData;
    QVector<double> valueData;
    keyData << 1.0 << 2.0 << 3.0 <<4.0<<5.0<<6.0<<7.0<<8.0<<9.0;
    valueData << novaAnalise2->getMercadoValor() << novaAnalise2->getTransporteValor()  << novaAnalise2->getVestuarioValor()
              << novaAnalise2->getAnimaisValor() << novaAnalise2->getLazerValor()  << novaAnalise2->getSaudeValor()
              << novaAnalise2->getEstudosValor() << novaAnalise2->getSegurosValor() << novaAnalise2->getOutrosValor() ;

    myBars->setData(keyData, valueData);
    ui->grafico->rescaleAxes();
    ui->grafico->replot();
    ui->grafico->repaint();

}

/***** Salarioo********/
void MainWindow::on_pushButton_5_clicked()
{
    ui->grafico->repaint();
    salarioCorrigido[0] = ui->salJan->toPlainText().toFloat();
    salarioCorrigido[1] = ui->salFev->toPlainText().toFloat();
    salarioCorrigido[2] = ui->salMar->toPlainText().toFloat();
    salarioCorrigido[3] = ui->salAbr->toPlainText().toFloat();
    salarioCorrigido[4] = ui->salMai->toPlainText().toFloat();
    salarioCorrigido[5] = ui->salJun->toPlainText().toFloat();
    salarioCorrigido[6] = ui->salJul->toPlainText().toFloat();
    salarioCorrigido[7] = ui->salAgo->toPlainText().toFloat();
    salarioCorrigido[8] = ui->salSet->toPlainText().toFloat();
    salarioCorrigido[9] = ui->salOut->toPlainText().toFloat();
    salarioCorrigido[10] = ui->salNov->toPlainText().toFloat();
    salarioCorrigido[11] = ui->salDez->toPlainText().toFloat();

    QVector<double> x(13), y(100); // initialize with entries 0..100
    for (int i=0; i<12; ++i)
    {
      x[i] = i;
      y[i] = salarioCorrigido[i];
    }

    ui->grafico->addGraph();
    ui->grafico->graph(0)->setData(x, y);
     // give the axes some labels:
    ui->grafico->xAxis->setLabel("Despesas");
    ui->grafico->yAxis->setLabel("Salario");
     // set axes ranges, so we see all data:
    ui->grafico->xAxis->setRange(0, 10);
    ui->grafico->yAxis->setRange(0, 2000);
    ui->grafico->repaint();
    ui->grafico->replot();
}

/***analise por mes****/
void MainWindow::on_radioButton_3_clicked()
{

    ui->grafico->show();
    int mesEscolhido = 1;
    int anoEscolhido =  ui->dateEdit->date().year();
    std::ostringstream identificaArquivo;
    identificaArquivo << paraDespesas.toStdString() <<"/Despesas_"<< ui->listWidget->currentItem()->text().toStdString()<<".txt";

    cout << identificaArquivo.str() << endl;

    //novaAnalise = new metodoUM;
    //novaAnalise->MetodoUM(mesEscolhido,anoEscolhido,identificaArquivo.str());


    QVector<double> x(13), y(100); // initialize with entries 0..100
    for (int i=0; i<12; ++i)
    {
      x[i] = i;
      y[i] = salarioCorrigido[i];
    }

    ui->grafico->addGraph();
    ui->grafico->graph(0)->setData(x, y);
     // give the axes some labels:
    ui->grafico->xAxis->setLabel("Despesas");
    ui->grafico->yAxis->setLabel("Salario");
     // set axes ranges, so we see all data:
    ui->grafico->xAxis->setRange(0, 10);
    ui->grafico->yAxis->setRange(0, 2000);

    ui->grafico->repaint();
    ui->grafico->replot();



    metodoUM * novaAnalise2 = new metodoUM;
    novaAnalise2->MetodoUM(mesEscolhido,anoEscolhido,identificaArquivo.str());


    QCPBars *myBars = new QCPBars(ui->grafico->xAxis,ui->grafico->yAxis);
    // now we can modify properties of myBars:
    myBars->setName("Analise Finaceira");
    QVector<double> keyData;
    QVector<double> valueData;
    keyData << 1.0 << 2.0 << 3.0 <<4.0<<5.0<<6.0<<7.0<<8.0<<9.0;
    valueData << novaAnalise2->getMercadoValor() << novaAnalise2->getTransporteValor()  << novaAnalise2->getVestuarioValor()
              << novaAnalise2->getAnimaisValor() << novaAnalise2->getLazerValor()  << novaAnalise2->getSaudeValor()
              << novaAnalise2->getEstudosValor() << novaAnalise2->getSegurosValor() << novaAnalise2->getOutrosValor() ;

    myBars->setData(keyData, valueData);

    ui->grafico->repaint();
    ui->grafico->replot();

   // ui->grafico->rescaleAxes();
    /*
    ui->tabWidget->setCurrentIndex(1);
    ui->tabWidget->setTabEnabled(1,1);
    ui->grafico->repaint();

    int mesEscolhido = 1;
    int anoEscolhido =  ui->dateEdit->date().year();
    std::ostringstream identificaArquivo;
    identificaArquivo << paraDespesas.toStdString() <<"/Despesas_"<< ui->listWidget->currentItem()->text().toStdString()<<".txt";
    metodoUM *novaAnalise0 = new metodoUM;
    novaAnalise0->MetodoUM(mesEscolhido,anoEscolhido,identificaArquivo.str());

   QCPBars *myBars = new QCPBars(ui->grafico->xAxis,ui->grafico->yAxis);
   // now we can modify properties of myBars:
   myBars->setName("Analise Finaceira");
   QVector<double> keyData;
   QVector<double> valueData;
   keyData << 1.0 << 2.0 << 3.0 << 4.0 << 5.0 << 6.0 << 7.0 << 8.0 << 9.0;
   valueData << novaAnalise0->getMercadoValor() << novaAnalise0->getTransporteValor()  << novaAnalise0->getVestuarioValor()
             << novaAnalise0->getAnimaisValor() << novaAnalise0->getLazerValor()  << novaAnalise0->getSaudeValor()
             << novaAnalise0->getEstudosValor() << novaAnalise0->getSegurosValor() << novaAnalise0->getOutrosValor() ;

    myBars->setData(keyData, valueData);
  //ui->grafico->rescaleAxes();
    ui->grafico->replot();
    */

    ui->radioButton_3->setAutoExclusive(true);
}

/******para a analise anual *****/
void MainWindow::on_radioButton_2_clicked()
{

    ui->tabWidget->setCurrentIndex(2);
    ui->tabWidget->setTabEnabled(2,1);

    pieChart *novo = new pieChart;
    novo->setVar(30,180);

    ui->widget_2->setEnabled(true);
    ui->widget_2->show();

}


void MainWindow::on_salJan_textChanged(){}

void MainWindow::on_salFev_textChanged(){}
