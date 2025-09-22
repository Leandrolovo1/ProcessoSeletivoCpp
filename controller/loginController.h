
#ifndef LOGINCONTROLLER_H
#define LOGINCONTROLLER_H
#include <QObject>
#include <QSqlDatabase>
#include "repository/usuariorepository.h"
#include "models/usuario.h"
#include <QString>
#include <QMessageBox>
#include "database/databasemanager.h"


class loginController : public QObject{
Q_OBJECT
public:
    explicit loginController(QSqlDatabase &db, QObject* parent = nullptr);

    bool validarLogin(const QString nome, const QString senha);

private:
    UsuarioRepository m_repository;
};

#endif // LOGINCONTROLLER_H
