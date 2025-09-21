#ifndef TELALOGIN_H
#define TELALOGIN_H
#include "ui_telalogin.h"
#include "controller/loginController.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private slots:
    void on_LoginButton_clicked();
    void on_SignInButton_clicked();
public:
    explicit MainWindow(QSqlDatabase &db, QWidget *parent = nullptr);

    ~MainWindow();

private:
    Ui::MainWindow *ui;
    loginController m_controller;
};
#endif // TELALOGIN_H
