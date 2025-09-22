#ifndef CREATEPRODUTOREPOSITORY_H
#define CREATEPRODUTOREPOSITORY_H

#include <QObject>
#include <QSqlDatabase>
#include <QString>

class createProdutoRepository : public QObject
{
    Q_OBJECT
public:
    explicit createProdutoRepository(QSqlDatabase& db, QObject* parent = nullptr);
    bool criar(const QString& nome, const QString& unidade, double preco, int quantidade);

private:
    QSqlDatabase& m_db;
};

#endif // CREATEPRODUTOREPOSITORY_H
