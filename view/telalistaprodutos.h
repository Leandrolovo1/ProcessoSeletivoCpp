#ifndef TELALISTAPRODUTOS_H
#define TELALISTAPRODUTOS_H

#include <QMainWindow>

namespace Ui {
class TelaListaProdutos;
}

class TelaListaProdutos : public QMainWindow
{
    Q_OBJECT

public:
    explicit TelaListaProdutos(QWidget *parent = nullptr);
    ~TelaListaProdutos();

private:
    Ui::TelaListaProdutos *ui;
};

#endif // TELALISTAPRODUTOS_H
