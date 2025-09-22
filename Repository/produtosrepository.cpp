#include "Repository/produtosrepository.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

ProdutoRepository::ProdutoRepository(QSqlDatabase& db, QObject* parent)
    : QObject(parent), m_db(db)
{
}

QList<produto> ProdutoRepository::listarTodos()
{
    QList<produto> produtos;
    QSqlQuery query(m_db);
    if (!query.exec("SELECT id, nome, unidade_medida, preco, quantidade FROM produtos")) {
        qDebug() << "Erro ao listar produtos:" << query.lastError().text();
        return produtos;
    }
    while (query.next()) {
        produtos.append(produto(
            query.value(0).toInt(),
            query.value(1).toString(),
            query.value(2).toString(),
            query.value(3).toDouble(),
            query.value(4).toInt()
            ));
    }
    return produtos;
}

bool ProdutoRepository::criarProduto(const QString& nome, const QString& unidade, double preco, int quantidade)
{
    QSqlQuery query(m_db);
    query.prepare("INSERT INTO produtos (nome, unidade_medida, preco, quantidade) VALUES (:nome, :unidade, :preco, :quantidade)");
    query.bindValue(":nome", nome);
    query.bindValue(":unidade", unidade);
    query.bindValue(":preco", preco);
    query.bindValue(":quantidade", quantidade);
    return query.exec();
}

bool ProdutoRepository::atualizarProduto(int id, const QString& nome, const QString& unidade, double preco, int quantidade)
{
    QSqlQuery query(m_db);
    query.prepare("UPDATE produtos SET nome = :nome, unidade_medida = :unidade, preco = :preco, quantidade = :quantidade WHERE id = :id");
    query.bindValue(":nome", nome);
    query.bindValue(":unidade", unidade);
    query.bindValue(":preco", preco);
    query.bindValue(":quantidade", quantidade);
    query.bindValue(":id", id);
    return query.exec();
}

bool ProdutoRepository::deletarProduto(int id)
{
    QSqlQuery query(m_db);
    query.prepare("DELETE FROM produtos WHERE id = :id");
    query.bindValue(":id", id);
    return query.exec();
}

produto ProdutoRepository::buscarPorId(int id)
{
    QSqlQuery query(m_db);
    query.prepare("SELECT id, nome, unidade_medida, preco, quantidade FROM produtos WHERE id = :id");
    query.bindValue(":id", id);
    if (query.exec() && query.next()) {
        return produto(
            query.value("id").toInt(),
            query.value("nome").toString(),
            query.value("unidade_medida").toString(),
            query.value("preco").toDouble(),
            query.value("quantidade").toInt()
            );
    }
    return produto(); // Retorna produto vazio se não encontrar
}
