#include "piechart.h"
#include <Qpainter>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <QRectF>

int valor1,valor2;
pieChart::pieChart(QWidget *parent) : QWidget(parent)
{

}

void pieChart::paintEvent(QPaintEvent *)
{
      Qt::GlobalColor cor[]=  {Qt::red,
            Qt::yellow ,
            Qt::black,
            Qt::darkGreen,
            Qt::magenta,
            Qt::green,
            Qt::cyan,
            Qt::darkRed,
            Qt::darkMagenta,
            Qt::darkYellow,
            Qt::blue,
            Qt::gray};



    QPainter painter(this);
    QRectF size(50,10,this->width()-100,this->width()-100);

    if(valor1>0){
        painter.setBrush(cor[1]);
        painter.drawPie(size,0,30*16);

        painter.setBrush(cor[2]);
        painter.drawPie(size,30*16,65*16);

        painter.setBrush(cor[3]);
        painter.drawPie(size,65*16,75*16);

        painter.setBrush(cor[4]);
        painter.drawPie(size,75*16,83*16);

        painter.setBrush(cor[5]);
        painter.drawPie(size,83*16,105*16);

        painter.setBrush(cor[6]);
        painter.drawPie(size,105*16,155*16);

        painter.setBrush(cor[7]);
        painter.drawPie(size,155*16,170*16);

        painter.setBrush(cor[8]);
        painter.drawPie(size,170*16,200*16);
/*
        painter.setBrush(cor[9]);
        painter.drawPie(size,220*16,360*16);

*/

       }
}


void pieChart::setVar(int one, int two){
    valor1=one;
    valor2=two;
}
