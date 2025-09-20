#ifndef TELALOGIN_H
#define TELALOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow; // A classe gerada pelo uic é Ui::MainWindow
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui; // O ponteiro deve ser para Ui::MainWindow
};
#endif // TELALOGIN_H
