#include "telacadastro.h"
#include "ui_telacadastro.h"

TelaCadastro::TelaCadastro(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaCadastro)
{
    ui->setupUi(this);
}

TelaCadastro::~TelaCadastro()
{
    delete ui;
}
