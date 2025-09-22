#ifndef CADASTROREPOSITORY_H
#define CADASTROREPOSITORY_H
#include <QString>
#include <QObject>
#include <QSqlDatabase>
#include "models/usuario.h"
class cadastroRepository : public QObject
{
    Q_OBJECT
public:
    explicit cadastroRepository(QSqlDatabase &db, QObject* parent = nullptr);
    bool criarUsuario(const QString& nome, const QString& email, const QString& senha, const bool& administrador);
private:
    QSqlDatabase& m_db;
};

#endif // CADASTROREPOSITORY_H
