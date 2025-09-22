#include "createprodutocontroller.h"

createProdutoController::createProdutoController(QSqlDatabase& db, QObject* parent)
    : QObject(parent), m_repository(db, this)
{
}

bool createProdutoController::criarProduto(const QString& nome, const QString& unidade, double preco, int quantidade)
{
    if (nome.isEmpty() || unidade.isEmpty()) {
        qDebug() << "Nome e unidade são campos obrigatórios.";
        return false;
    }

    return m_repository.criar(nome, unidade, preco, quantidade);
}
