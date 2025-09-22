#ifndef TELACADASTROPRODUTOS_H
#define TELACADASTROPRODUTOS_H

#include <QMainWindow>
#include <QSqlDatabase>
#include "controller/produtoscontroller.h"

namespace Ui {
class TelaCadastroProdutos;
}

class TelaCadastroProdutos : public QMainWindow
{
    Q_OBJECT
public:
    explicit TelaCadastroProdutos(QSqlDatabase &db, QWidget *parent = nullptr);
    ~TelaCadastroProdutos();

    void carregarTabelaDeProdutos();

private slots:
    void on_voltarButton_clicked();
    void on_CreateProdutoButton_clicked();
    void on_deleteButton_clicked();
    void on_updateButton_clicked();

private:
    Ui::TelaCadastroProdutos* ui;
    QSqlDatabase& m_db;
    ProdutosController m_controller;
};

#endif // TELACADASTROPRODUTOS_H
