#include "produtoscontroller.h"
#include "models/produto.h"
#include <QDebug>

ProdutosController::ProdutosController(QSqlDatabase& db, QObject* parent)
    : QObject(parent), m_repository(db, this) {}

bool ProdutosController::criarProduto(const QString& nome, const QString& unidade, double preco, int quantidade)
{
    return m_repository.criarProduto(nome, unidade, preco, quantidade);
}

bool ProdutosController::atualizarProduto(int id, const QString& nome, const QString& unidade, double preco, int quantidade)
{
    return m_repository.atualizarProduto(id, nome, unidade, preco, quantidade);
}

bool ProdutosController::deletarProduto(int id)
{
    return m_repository.deletarProduto(id);
}

QList<produto> ProdutosController::listarProdutos()
{
    return m_repository.listarTodos();
}

produto ProdutosController::buscarProdutoPorId(int id)
{
    return m_repository.buscarPorId(id);
}
