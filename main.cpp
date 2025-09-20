#include "view/TelaLogin.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString caminhoBanco = "D:/Usuarios/LeandroLovo/Area de trabalho/CPP/BD/db_processo";
    db.setDatabaseName(caminhoBanco);

    if (!db.open()) {
        qDebug() << "Erro ao conectar com o banco de dados!.";
        qDebug() << "Motivo do erro:" << db.lastError().text();
        return -1; // Encerra o programa se a conexão falhar
    } else {
        qDebug() << "Sucesso! A conexao com o banco de dados foi feita.";
    }

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "ProcessoSeletivoCpp_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();
    return a.exec();
}
