#ifndef NOVOCADASTRO_H
#define NOVOCADASTRO_H

#include <QDialog>
#include <string>
#include <QObject>
#include <QString>
#include <QWidget>

namespace Ui {
class novoCadastro;
}

class novoCadastro : public QDialog
{
    Q_OBJECT
signals:
    void  sendTextInt( const QString & newText );
    void  sendTextIntList( const QString & newText );

public:
    explicit novoCadastro(QWidget *parent = 0);
    ~novoCadastro();
    bool verificaSeExiste(std::string novaPessoa);
    void lerDaBaseDDados();
    bool escreveNaBaseDDados(std::string pessoaNova);
private slots:
    std::string on_pushButton_clicked();

private:
    Ui::novoCadastro *ui;
};

#endif // NOVOCADASTRO_H
