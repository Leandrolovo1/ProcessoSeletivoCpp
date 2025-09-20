#include "usuario.h"

usuario::usuario() {
    this->id = 0;
    this->nome = "";
    this->email = "";
    this->senha = "";
    this->administrador = false;
}

usuario::usuario(int id, QString nome, QString email, QString senha, bool administrador) {
    this->id = id;
    this->nome = nome;
    this->email = email;
    this->senha = senha;
    this->administrador = administrador;
}

int usuario::getId() const {
    return this->id;
}

QString usuario::getNome() const {
    return this->nome;
}

QString usuario::getEmail() const {
    return this->email;
}

QString usuario::getSenha() const {
    return this->senha;
}

bool usuario::getAdministrador() const {
    return this->administrador;
}

void usuario::setId(int id) {
    this->id = id;
}

void usuario::setNome(QString nome) {
    this->nome = nome;
}

void usuario::setEmail(QString email) {
    this->email = email;
}

void usuario::setSenha(QString senha) {
    this->senha = senha;
}

void usuario::setAdministrador(bool administrador) {
    this->administrador = administrador;
}
