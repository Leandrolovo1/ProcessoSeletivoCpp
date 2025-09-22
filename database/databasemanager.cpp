#include "databasemanager.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>

databaseManager::databaseManager(QObject *parent)
    : QObject(parent)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE", "my_connection");
    //troque o endereço do arquivo db_processo.db para ao do seu computador
    QString caminhoBanco = "D:/Usuarios/LeandroLovo/Area de trabalho/CPP/BD/db_processo.db";
    m_db.setDatabaseName(caminhoBanco);
    if (!m_db.open()) {
        qDebug() << "Erro ao conectar com o banco de dados!";
        qDebug() << "Motivo do erro: " << m_db.lastError().text();
        emit connectionError(m_db.lastError().text());
    } else {
        qDebug() << "!!!A conexao com o banco de dados foi feita!!!!";
    }
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
databaseManager& databaseManager::instance()
{
    static databaseManager instance;
    return instance;
}

QSqlDatabase& databaseManager::getDatabase()
{
    return m_db;
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
