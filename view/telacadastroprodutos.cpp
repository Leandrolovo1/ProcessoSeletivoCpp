#include "telacadastroprodutos.h"
#include "ui_telacadastroprodutos.h"
#include "database/databasemanager.h"
#include "TelaLogin.h"
#include "view/createproduto.h" // Inclua o cabeçalho da sua tela de criação

TelaCadastroProdutos::TelaCadastroProdutos(QSqlDatabase &db, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaCadastroProdutos)
    , m_db(db)
    , m_controller(databaseManager::instance().getDatabase(), this)
{
    ui->setupUi(this);
    carregarTabelaDeProdutos();
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
    // Usa o construtor de criação
    createproduto *telaCreateProduto = new createproduto(this);
    telaCreateProduto->show();
    this->hide();
}

void TelaCadastroProdutos::on_updateButton_clicked()
{
    int linha = ui->tw_produtos->currentRow();
    if (linha < 0) {
        QMessageBox::warning(this, "Aviso", "Selecione um produto para editar.");
        return;
    }

    int id = ui->tw_produtos->item(linha, 0)->text().toInt();

    // Usa o construtor de edição, passando o ID
    createproduto *telaEditarProduto = new createproduto(id, this);
    telaEditarProduto->show();
    this->hide();
}

void TelaCadastroProdutos::carregarTabelaDeProdutos()
{
    // A View pede a lista ao Controller
    QList<produto> produtos = m_controller.listarProdutos();

    // A View configura a tabela
    ui->tw_produtos->setRowCount(0); // Limpa a tabela antes de preencher
    ui->tw_produtos->setColumnCount(5);

    // A View preenche a tabela com os dados da lista
    int row = 0;
    foreach (const produto& p, produtos) {
        ui->tw_produtos->insertRow(row);
        ui->tw_produtos->setItem(row, 0, new QTableWidgetItem(QString::number(p.getId())));
        ui->tw_produtos->setItem(row, 1, new QTableWidgetItem(p.getNome()));
        ui->tw_produtos->setItem(row, 2, new QTableWidgetItem(p.getUnidade()));
        ui->tw_produtos->setItem(row, 3, new QTableWidgetItem(QString::number(p.getPreco())));
        ui->tw_produtos->setItem(row, 4, new QTableWidgetItem(QString::number(p.getQuantidade())));
        row++;
    }
    ui->tw_produtos->setColumnWidth(0,30);
    ui->tw_produtos->setColumnWidth(1,100);
    ui->tw_produtos->setColumnWidth(2,100);
    ui->tw_produtos->setColumnWidth(3,126);
    QStringList cabecalhos={"ID", "Nome", "Unidade","Preço", "Quantidade"};
    ui->tw_produtos->setHorizontalHeaderLabels(cabecalhos);
    ui->tw_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_produtos->verticalHeader()->setVisible(false);
}


void TelaCadastroProdutos::on_deleteButton_clicked()
{
    int linha = ui->tw_produtos->currentRow();

    if (linha < 0) {
        QMessageBox::warning(this, "Aviso", "Selecione um produto para deletar.");
        return;
    }

    QMessageBox::StandardButton resposta;
    resposta = QMessageBox::question(this, "Confirmação", "Tem certeza que deseja deletar o produto selecionado?",
                                     QMessageBox::Yes | QMessageBox::No);


    if (resposta == QMessageBox::Yes) {

        int id = ui->tw_produtos->item(linha, 0)->text().toInt();


        bool sucesso = m_controller.deletarProduto(id);


        if (sucesso) {
            QMessageBox::information(this, "Sucesso", "Produto deletado com sucesso.");
            ui->tw_produtos->removeRow(linha);
        } else {
            QMessageBox::critical(this, "Erro", "Não foi possível deletar o produto.");
        }
    }
}

