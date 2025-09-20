#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>

class databaseManager : public QObject
{
    Q_OBJECT
public:
    explicit databaseManager(QObject *parent = nullptr);
    ~databaseManager();

    bool openDatabase(const QString& dbName);
    void closeDatabase();

    bool createTables();

private:
    QSqlDatabase m_db;
};

#endif
