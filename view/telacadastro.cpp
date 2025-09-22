#include "view/telacadastro.h"
#include "ui_telacadastro.h"
#include <QMessageBox>
#include "TelaLogin.h"

TelaCadastro::TelaCadastro(QSqlDatabase &db, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaCadastro)
    , m_db(db)
    ,m_controller(databaseManager::instance().getDatabase(), this)
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

    bool sucesso = m_controller.criarUsuario(nome, email, senha, administrador);

    if (sucesso) {
        QMessageBox::information(this, "Sucesso", "Usuário criado com sucesso.");
        MainWindow *telaLogin = new MainWindow();
        telaLogin->show();
        this->close();
    } else {
        QMessageBox::information(this, "Atenção", "Houve um erro ao cadastrar o usuário. Verifique os dados.");
    }
}

void TelaCadastro::on_voltarButton_clicked()
{
    MainWindow *telaLogin = new MainWindow();
    telaLogin->show();
    this->close();
}
