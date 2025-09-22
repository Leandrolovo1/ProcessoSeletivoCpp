#include "TelaLogin.h"
#include "telaCadastro.h"
#include "ui_TelaLogin.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_controller(databaseManager::instance().getDatabase(), this)
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
        TelaCadastroProdutos *TelaCadastroprodutos = new TelaCadastroProdutos(databaseManager::instance().getDatabase());

        TelaCadastroprodutos->show();
        this->close();

    }
}
void MainWindow::on_SignInButton_clicked(){
    TelaCadastro *telacadastro = new TelaCadastro(databaseManager::instance().getDatabase());
    telacadastro->show();
    this->close();
}
