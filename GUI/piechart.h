#ifndef PIECHART_H
#define PIECHART_H

#include <QWidget>

class pieChart : public QWidget
{
    Q_OBJECT
public:
    explicit pieChart(QWidget *parent = 0);
    void setVar(int one, int two);


protected :
    void paintEvent(QPaintEvent *);

signals:

public slots:
};

#endif // PIECHART_H
