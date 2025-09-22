#ifndef TELACADASTRO_H
#define TELACADASTRO_H
#include "ui_TelaCadastro.h"
#include "TelaLogin.h"
#include "database/databasemanager.h"
#include "controller/cadastroController.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class TelaCadastro;
}
QT_END_NAMESPACE

class TelaCadastro : public QMainWindow
{
    Q_OBJECT
private slots:
    void on_CreateButton_clicked();
    void on_voltarButton_clicked();
public:
    explicit TelaCadastro(QSqlDatabase &db, QWidget *parent = nullptr);
    ~TelaCadastro();
    // ...

private:
    Ui::TelaCadastro *ui;
    QSqlDatabase &m_db;
    cadastroController m_controller;
};

#endif // TELACADASTRO_H
