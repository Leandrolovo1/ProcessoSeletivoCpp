#include "TelaLogin.h"
#include "ui_TelaLogin.h" // A ordem de inclusão está correta

// O seu construtor deve instanciar a classe Ui::MainWindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) // Corrigido para Ui::MainWindow
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
