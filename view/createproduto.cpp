#include "createproduto.h"
#include "ui_createproduto.h"
#include "database/databasemanager.h"
#include <QMessageBox>
#include "controller/produtoscontroller.h" // Inclua este

// Construtor para CRIAR
createproduto::createproduto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::createproduto)
    , m_controller(databaseManager::instance().getDatabase(), this)
    , m_idProduto(-1)
{
    ui->setupUi(this);
    ui->comboBox->addItem("KG");
    ui->comboBox->addItem("G");
    ui->comboBox->addItem("UNIDADE");
    ui->comboBox->addItem("L");
    ui->comboBox->addItem("ML");
}

// Construtor para EDITAR
createproduto::createproduto(int idProduto, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::createproduto)
    , m_controller(databaseManager::instance().getDatabase(), this)
    , m_idProduto(idProduto)
{
    ui->setupUi(this);
    ui->comboBox->addItem("KG");
    ui->comboBox->addItem("G");
    ui->comboBox->addItem("UNIDADE");
    ui->comboBox->addItem("L");
    ui->comboBox->addItem("ML");
    carregarDadosDoProduto(idProduto);
}

createproduto::~createproduto()
{
    delete ui;
}

void createproduto::carregarDadosDoProduto(int id)
{
    produto produto = m_controller.buscarProdutoPorId(id);
    if (produto.getId() != -1) {
        ui->NameField->setText(produto.getNome());
        ui->comboBox->setCurrentText(produto.getUnidade());
        ui->PriceField->setText(QString::number(produto.getPreco(), 'f', 2));
        ui->InventoryField->setText(QString::number(produto.getQuantidade()));
    } else {
        QMessageBox::critical(this, "Erro", "Produto não encontrado para edição.");
        this->close();
    }
}

void createproduto::on_CreateButton_clicked()
{
    bool sucesso;
    QString nome = ui->NameField->text();
    QString unidade = ui->comboBox->currentText();
    double preco = ui->PriceField->text().toDouble();
    int quantidade = ui->InventoryField->text().toInt();

    if (m_idProduto == -1) {
        sucesso = m_controller.criarProduto(nome, unidade, preco, quantidade);
    } else {
        sucesso = m_controller.atualizarProduto(m_idProduto, nome, unidade, preco, quantidade);
    }

    if (sucesso) {
        QMessageBox::information(this, "Sucesso", "Operação realizada com sucesso!");
        this->close();
        if (auto parentWindow = qobject_cast<TelaCadastroProdutos*>(parent())) {
            parentWindow->show();
            parentWindow->carregarTabelaDeProdutos();
        }
    } else {
        QMessageBox::critical(this, "Erro", "Falha na operação. Verifique os dados.");
    }
}

void createproduto::on_VoltarButton_clicked()
{
    this->close();
    if (auto parentWindow = qobject_cast<TelaCadastroProdutos*>(parent())) {
        parentWindow->show();
    }
}



