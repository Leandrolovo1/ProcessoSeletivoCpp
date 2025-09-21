#include "telacadastro.h"
#include "ui_telacadastro.h"
#include <QMessageBox>
#include "TelaLogin.h"

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

void TelaCadastro::on_CreateButton_clicked()
{
    QString nome = ui->NameField->text();
    QString email = ui->EmailField->text();
    QString senha = ui->PasswordField->text();
    bool administrador = ui->PrivilegesCheckBox->isChecked();

    if(nome.isEmpty() || senha.isEmpty() || email.isEmpty() || !administrador){
        QMessageBox::information(this, "Atenção", "NOME, EMAIL ou SENHA NÃO podem estar vazios!");
    } else {
        QMessageBox::information(this, "Sucesso", "Usuário criado.");
    }
}

void TelaCadastro::on_voltarButton_clicked()
{
}
