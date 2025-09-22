#include "createprodutorepository.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

createProdutoRepository::createProdutoRepository(QSqlDatabase& db, QObject* parent)
    : QObject(parent), m_db(db)
{
}

bool createProdutoRepository::criar(const QString& nome, const QString& unidade, double preco, int quantidade)
{
    QSqlQuery query(m_db);
    query.prepare("INSERT INTO produtos (nome, unidade_medida, preco, quantidade) "
                  "VALUES (:nome, :unidade_medida, :preco, :quantidade)");

    query.bindValue(":nome", nome);
    query.bindValue(":unidade_medida", unidade);
    query.bindValue(":preco", preco);
    query.bindValue(":quantidade", quantidade);

    if (!query.exec()) {
        qDebug() << "Erro ao inserir produto:" << query.lastError().text();
        return false;
    }
    qDebug() << "Produto criado com sucesso!";
    return true;
}
