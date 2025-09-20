#include "unidademedida.h"
#include <QDebug>

unidadeMedida::unidadeMedida() {}

unidadeMedida::unidadeMedida(int id, QString nome) {
    this->id = id;
    this->nome = nome;
}
int unidadeMedida::getId() const{
    return this->id;
}

QString unidadeMedida::getNome() const{
    return this->nome;
}
void unidadeMedida::setId(int id){
    this->id = id;
}

void unidadeMedida::setNome(QString nome){
    this->nome = nome;
}
