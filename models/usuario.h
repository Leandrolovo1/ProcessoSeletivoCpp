#ifndef PRODUTO_H
#define PRODUTO_H

#include <QString>

class usuario {
private:
    int id;
    QString nome;
    QString email;
    QString senha;
    bool administrador;
public:
    usuario();
    usuario(int id, QString nome, QString email, QString senha, bool administrador);
    usuario(int id, QString nome, QString email, QString senha);
    usuario(int id, QString nome, QString senha);

    int getId() const;
    QString getNome() const;
    QString getEmail() const;
    QString getSenha() const;
    bool getAdministrador() const;

    void setId(int id);
    void setNome(QString nome);
    void setEmail(QString email);
    void setSenha(QString senha);
    void setAdministrador(bool administrador);
};

#endif
