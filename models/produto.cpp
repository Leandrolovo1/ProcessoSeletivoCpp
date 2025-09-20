#include "produto.h"
#include <QDebug>

produto::produto() {}

produto::produto(int id, QString nome, QString unidade, double preco, int quantidade){
    this->id = id;
    this->nome = nome;
    this->unidade = unidade.toUpper();
    this->preco = preco;
    this->quantidade = quantidade;
}

int produto::getId() const{
    return this->id;
}

QString produto::getNome() const{
    return this->nome;
}

QString produto::getUnidade() const{
    return this->unidade;
}

double produto::getPreco() const{
    return this->preco;
}

int produto::getQuantidade() const{
    return this->quantidade;
}

void produto::setId(int id){
    this->id = id;
}

void produto::setNome(QString nome){
    this->nome = nome;
}

void produto::setUnidade(QString unidade){
    this->unidade = unidade.toUpper();
}

void produto::setPreco(double preco){
    this->preco = preco;
}

void produto::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}
