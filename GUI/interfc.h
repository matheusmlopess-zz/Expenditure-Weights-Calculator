#ifndef INTERFC_H
#define INTERFC_H

#include <QObject>
#include <QString>


class interfc : public QObject
{

    Q_OBJECT
signals:
  void  sendText( const QString & newText );
  void  sendTextList( const QString & newText );


public:
     interfc();
    ~interfc();
    void novaEntrada();

private slots:
    void updateTextInt(const QString & newText );
    void updateTextIntList(const QString & newText );

};

#endif // INTERFC_H
