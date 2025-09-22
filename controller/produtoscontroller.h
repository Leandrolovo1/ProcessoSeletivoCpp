#ifndef PRODUTOSCONTROLLER_H
#define PRODUTOSCONTROLLER_H

#include <QObject>
#include <QSqlDatabase>
#include "Repository/produtosrepository.h"
#include "models/produto.h"
#include <QList>

class ProdutosController : public QObject
{
    Q_OBJECT
public:
    explicit ProdutosController(QSqlDatabase& db, QObject* parent = nullptr);

    bool criarProduto(const QString& nome, const QString& unidade, double preco, int quantidade);
    bool atualizarProduto(int id, const QString& nome, const QString& unidade, double preco, int quantidade);
    bool deletarProduto(int id);
    QList<produto> listarProdutos();
    produto buscarProdutoPorId(int id);

private:
    ProdutoRepository m_repository;
};

#endif // PRODUTOSCONTROLLER_H
