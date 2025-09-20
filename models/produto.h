#ifndef PRODUTO_H
#define PRODUTO_H

#include <QString>

class produto{
private:
    int id;
    QString nome;
    QString unidade;
    double preco;
    int quantidade;
public:
    produto();

    produto(int id, QString nome, QString unidade, double preco, int quantidade);

    int getId() const;
    QString getNome() const;
    QString getUnidade() const;
    double getPreco() const;
    int getQuantidade() const;

    void setId(int id);
    void setNome(QString nome);
    void setUnidade(QString unidade);
    void setPreco(double preco);
    void setQuantidade(int quantidade);

};

#endif
