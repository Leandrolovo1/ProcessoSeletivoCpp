#include "telacadastroprodutos.h"
#include "ui_telacadastroprodutos.h"

TelaCadastroProdutos::TelaCadastroProdutos(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaCadastroProdutos)
{
    ui->setupUi(this);
}

TelaCadastroProdutos::~TelaCadastroProdutos()
{
    delete ui;
}
