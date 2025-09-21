#include "telalistaprodutos.h"
#include "ui_telalistaprodutos.h"

TelaListaProdutos::TelaListaProdutos(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaListaProdutos)
{
    ui->setupUi(this);
}

TelaListaProdutos::~TelaListaProdutos()
{
    delete ui;
}
