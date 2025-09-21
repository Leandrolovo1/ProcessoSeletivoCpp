#include "repository/usuariorepository.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

UsuarioRepository::UsuarioRepository(QSqlDatabase &db, QObject* parent)
    : QObject(parent), m_db(db)
{
}

usuario UsuarioRepository::realizarLogin(const QString& nome)
{
    QSqlQuery query(m_db);
    query.prepare("SELECT id, nome, senha FROM Usuarios WHERE nome = :nome");
    query.bindValue(":nome", nome);

    if (query.exec() && query.next()) {
        return usuario(query.value("id").toInt(),
                       query.value("nome").toString(),
                       query.value("senha").toString());
    }

    qDebug() << "Usuario com nome " << nome << " nao encontrado.";
    return usuario();
}
