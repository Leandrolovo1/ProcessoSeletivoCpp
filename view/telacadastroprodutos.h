#ifndef TELACADASTROPRODUTOS_H
#define TELACADASTROPRODUTOS_H
#include "database/databasemanager.h"
#include <QMainWindow>
#include "TelaLogin.h"
#include "database/databasemanager.h"

namespace Ui {
class TelaCadastroProdutos;
}

class TelaCadastroProdutos : public QMainWindow
{
    Q_OBJECT
private slots:
    void on_CreateProdutoButton_clicked();
    void on_voltarButton_clicked();
public:
    explicit TelaCadastroProdutos(QSqlDatabase &db, QWidget *parent = nullptr);
    ~TelaCadastroProdutos();

private:
    Ui::TelaCadastroProdutos *ui;
    // Se a classe precisar usar o banco de dados depois, armazene a referência aqui
    QSqlDatabase &m_db;
};

#endif // TELACADASTROPRODUTOS_H
