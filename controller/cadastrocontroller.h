#ifndef CADASTROCONTROLLER_H
#define CADASTROCONTROLLER_H
#include "database/databasemanager.h"
#include <QSqlDatabase>
#include "models/usuario.h"
#include <QObject>
#include "repository/cadastrorepository.h"
#include <QString>
class cadastroController : public QObject{
Q_OBJECT
public:
    explicit cadastroController(QSqlDatabase &db, QObject* parent = nullptr);
    bool criarUsuario(const QString nome, const QString email, const QString senha, const bool administrador);

private:
   cadastroRepository m_repository;
};
#endif // CADASTROCONTROLLER_H
