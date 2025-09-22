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

    void connectionError(const QString &errorText);

private:

    explicit databaseManager(QObject *parent = nullptr);


    ~databaseManager();


    QSqlDatabase m_db;


    databaseManager(const databaseManager&) = delete;
    databaseManager& operator=(const databaseManager&) = delete;

};

#endif
