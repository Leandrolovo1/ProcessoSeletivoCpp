#ifndef TELACADASTROPRODUTOS_H
#define TELACADASTROPRODUTOS_H

#include <QMainWindow>

namespace Ui {
class TelaCadastroProdutos;
}

class TelaCadastroProdutos : public QMainWindow
{
    Q_OBJECT
private slots:
    //void on_CreateProdutoButton_clicked();
public:
    explicit TelaCadastroProdutos(QWidget *parent = nullptr);
    ~TelaCadastroProdutos();

private:
    Ui::TelaCadastroProdutos *ui;
};

#endif // TELACADASTROPRODUTOS_H
