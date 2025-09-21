#ifndef USUARIOREPOSITORIO_H
#define USUARIOREPOSITORIO_H
#include <QString>
#include <QObject>
#include <QSqlDatabase>
#include "models/usuario.h"

class UsuarioRepository : public QObject
{
    Q_OBJECT
public:
    explicit UsuarioRepository(QSqlDatabase &db, QObject* parent = nullptr);

    usuario realizarLogin(const QString& nome);

private:
    QSqlDatabase m_db;
};

#endif // USUARIOREPOSITORIO_H
