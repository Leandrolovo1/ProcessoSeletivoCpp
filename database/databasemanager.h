#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>

class databaseManager : public QObject
{
    Q_OBJECT
public:
    static databaseManager& instance();

    bool openDatabase(const QString& dbName);
    void closeDatabase();
    QSqlDatabase& getDatabase();

    bool createTables();
signals:
    // Sinal para avisar se a conexão falhou
    void connectionError(const QString &errorText);

private:
    // Construtor privado para impedir a criação de outras instâncias
    explicit databaseManager(QObject *parent = nullptr);

    // Destrutor privado para impedir a exclusão da instância
    ~databaseManager();

    // Membro de dados para a conexão
    QSqlDatabase m_db;

    // Métodos de cópia privados para evitar cópias da instância (evita erros)
    databaseManager(const databaseManager&) = delete;
    databaseManager& operator=(const databaseManager&) = delete;

};

#endif
