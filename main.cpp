#include "view/TelaLogin.h"
#include "database/databasemanager.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "ProcessoSeletivoCpp_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    QSqlDatabase& db = databaseManager::instance().getDatabase();

    if (!db.isOpen()) {
        return -1;
    }

    MainWindow w;
    w.show();
    return a.exec();
}
