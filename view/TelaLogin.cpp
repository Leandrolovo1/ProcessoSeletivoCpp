#include "TelaLogin.h"
#include "telacadastroprodutos.h"
#include "telaCadastro.h"
#include "ui_TelaLogin.h"
#include <QMessageBox>
#include <QString>
MainWindow::MainWindow(QSqlDatabase &db, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_controller(db, this)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_LoginButton_clicked(){
    QString nome = ui-> NameField->text().trimmed();
    QString senha = ui-> PasswordField->text();

    bool sucesso = m_controller.validarLogin(nome, senha);

    if(!sucesso){
        QMessageBox::information(this, "ERRO", "Ouve um erro, verique se preencheu corretamente todos os campos.");
    }else{
        QMessageBox::information(this, "Sucesso", "Login Efetuado.");
        TelaCadastroProdutos *TelaCadastroprodutos = new TelaCadastroProdutos();

        TelaCadastroprodutos->show();
        this->close();

    }
}
void MainWindow::on_SignInButton_clicked(){
    TelaCadastro *telacadastro = new TelaCadastro();
    telacadastro->show();
    this->close();
}
