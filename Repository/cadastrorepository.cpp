#include "cadastrorepository.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
cadastroRepository::cadastroRepository(QSqlDatabase &db, QObject* parent)
    : QObject(parent), m_db(db)
{

}
bool cadastroRepository::criarUsuario(const QString& nome,const QString& email, const QString& senha, const bool& administrador)
{
    QSqlQuery query(m_db);
    query.prepare("INSERT INTO Usuarios (nome, email, senha, adm) "
                  "VALUES (:nome, :email, :senha, :administrador)");

    query.bindValue(":nome", nome);
    query.bindValue(":email", email);
    query.bindValue(":senha", senha);
    query.bindValue(":administrador", administrador);

    if (!query.exec()) {
        qDebug() << "Erro ao inserir usuário:" << query.lastError().text();
        return false;
    }
    qDebug() << "Usuario com nome " << nome << " criado com sucesso.";
    return true;
}
