#include "cadastrocontroller.h"

cadastroController::cadastroController(QSqlDatabase &db, QObject* parent)
    : QObject(parent), m_repository(db, this)
{
}


bool cadastroController::criarUsuario(const QString nome, const QString email, const QString senha, const bool administrador){
    if (nome.isEmpty() || email.isEmpty() || senha.isEmpty()) {
        return false;
    }

    bool sucesso = m_repository.criarUsuario(nome, email, senha, administrador);


    return sucesso;
}
