#ifndef CREATEPRODUTO_H
#define CREATEPRODUTO_H

#include <QMainWindow>
#include "controller/produtoscontroller.h" // Apenas um controller
#include "view/telacadastroprodutos.h"
#include "models/produto.h"

namespace Ui {
class createproduto;
}

class createproduto : public QMainWindow
{
    Q_OBJECT
public:
    explicit createproduto(QWidget *parent = nullptr);
    explicit createproduto(int idProduto, QWidget *parent = nullptr);
    ~createproduto();

private slots:
    void on_CreateButton_clicked();
    void on_VoltarButton_clicked();

private:
    void carregarDadosDoProduto(int id);

private:
    Ui::createproduto* ui;
    ProdutosController m_controller; // Use este aqui
    int m_idProduto;
};

#endif // CREATEPRODUTO_H
