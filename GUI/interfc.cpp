#include "interfc.h"
#include "pessoas.h"
#include "novocadastro.h"

#include <QObject>
#include <iostream>
#include <QString>
#include <stdlib.h>
#include <QDebug>


interfc::interfc()
{

}


void interfc::novaEntrada(){
    novoCadastro *novaPessoa = new novoCadastro;
    QObject::connect( novaPessoa, SIGNAL( sendTextInt( const QString & ) ), this, SLOT( updateTextInt( const QString & ) ) );
    QObject::connect( novaPessoa, SIGNAL( sendTextIntList( const QString & ) ), this, SLOT( updateTextIntList( const QString & ) ) );
    novaPessoa->setModal(true);
    novaPessoa->exec();
}

void interfc::updateTextInt( const QString & newText )
{
     emit sendText( newText );
}

void interfc::updateTextIntList( const QString & newText2 )
{
     emit sendTextList( newText2 );
}


interfc::~interfc()
{

}
