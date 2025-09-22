#ifndef PRODUTOREPOSITORY_H
#define PRODUTOREPOSITORY_H

#include <QObject>
#include <QSqlDatabase>
#include <QList>
#include "models/produto.h"

class produto; // Forward declaration

class ProdutoRepository : public QObject
{
    Q_OBJECT
public:
    explicit ProdutoRepository(QSqlDatabase& db, QObject* parent = nullptr);
    QList<produto> listarTodos();
    bool criarProduto(const QString& nome, const QString& unidade, double preco, int quantidade);
    bool atualizarProduto(int id, const QString& nome, const QString& unidade, double preco, int quantidade);
    bool deletarProduto(int id);
    produto buscarPorId(int id);

private:
    QSqlDatabase& m_db;
};

#endif // PRODUTOREPOSITORY_H
