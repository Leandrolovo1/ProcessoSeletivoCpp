#include "telacadastroprodutos.h"
#include "ui_telacadastroprodutos.h"
#include "database/databasemanager.h"
#include "TelaLogin.h"

TelaCadastroProdutos::TelaCadastroProdutos(QSqlDatabase &db, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaCadastroProdutos)
    , m_db(db)
{
    ui->setupUi(this);
}

TelaCadastroProdutos::~TelaCadastroProdutos()
{
    delete ui;
}
void TelaCadastroProdutos::on_voltarButton_clicked()
{
    MainWindow *telaLogin = new MainWindow();
    telaLogin->show();
    this->close();
}


void TelaCadastroProdutos::on_CreateProdutoButton_clicked()
{

}

