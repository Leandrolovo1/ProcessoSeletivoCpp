#ifndef UNIDADEMEDIDA_H
#define UNIDADEMEDIDA_H

#include <QString>

class unidadeMedida{
private:
    int id;
    QString nome;
public:
    unidadeMedida();
    unidadeMedida(int id, QString nome);

    int getId() const;
    QString getNome() const;

    void setId(int id);
    void setNome(QString nome);

};

#endif // UNIDADEMEDIDA_H
