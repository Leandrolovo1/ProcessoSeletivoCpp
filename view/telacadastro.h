#ifndef TELACADASTRO_H
#define TELACADASTRO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class TelaCadastro;
}
QT_END_NAMESPACE
class TelaCadastro : public QMainWindow
{
    Q_OBJECT

public:
    explicit TelaCadastro(QWidget *parent = nullptr);
    ~TelaCadastro();

private:
    Ui::TelaCadastro *ui;
};

#endif // TELACADASTRO_H
