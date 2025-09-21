#ifndef TELACADASTRO_H
#define TELACADASTRO_H
#include "ui_TelaCadastro.h"
#include "TelaLogin.h"

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
    explicit TelaCadastro(QWidget *parent = nullptr);
    ~TelaCadastro();
    // ...
signals:
    void backToLoginRequested(); // Este é o novo sinal


private:
    Ui::TelaCadastro *ui;
};

#endif // TELACADASTRO_H
