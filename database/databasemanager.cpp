#include "databasemanager.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>

databaseManager::databaseManager(QObject *parent)
    : QObject(parent)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE", "my_connection");
}

databaseManager::~databaseManager()
{
    closeDatabase();
}

bool databaseManager::openDatabase(const QString& dbName)
{
    m_db.setDatabaseName(dbName);
    if (!m_db.open()) {
        qDebug() << "Erro ao abrir o banco de dados:" << m_db.lastError().text();
        return false;
    }
    qDebug() << "Banco de dados aberto com sucesso!!!";
    return true;
}

void databaseManager::closeDatabase()
{
    if (m_db.isOpen()) {
        m_db.close();
        qDebug() << "Conexão com o banco de dados fechada.";
    }
}

bool databaseManager::createTables()
{
    QSqlQuery query(m_db);
    QString createTableSql =
        "CREATE TABLE IF NOT EXISTS usuarios ("
        "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
        "nome VARCHAR(50) NOT NULL,"
        "email VARCHAR(40) UNIQUE NOT NULL,"
        "senha VARCHAR(12 NOT NULL,"
        "admnistrador INTEGER NOT NULL))";

    if (!query.exec(createTableSql)) {
        qDebug() << "Erro ao criar tabela 'usuarios':" << query.lastError().text();
        return false;
    }

    qDebug() << "Tabela 'usuarios' criada ou já existe.";
    return true;
}
