#ifndef CREATEPRODUTOCONTROLLER_H
#define CREATEPRODUTOCONTROLLER_H

#include <QObject>
#include "repository/createprodutorepository.h"
#include <QSqlDatabase>

class createProdutoController : public QObject
{
    Q_OBJECT
public:
    explicit createProdutoController(QSqlDatabase& db, QObject* parent = nullptr);

    // Método para criar um produto
    bool criarProduto(const QString& nome, const QString& unidade, double preco, int quantidade);

    // Método para atualizar um produto
    bool atualizarProduto(int id, const QString& nome, const QString& unidade, double preco, int quantidade);

private:
    createProdutoRepository m_repository;
};

#endif // CREATEPRODUTOCONTROLLER_H
