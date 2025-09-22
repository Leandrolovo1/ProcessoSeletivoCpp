#include "cadastrocontroller.h"

cadastroController::cadastroController(QSqlDatabase &db, QObject* parent)
    : QObject(parent), m_repository(db, this)
{
}


bool cadastroController::criarUsuario(const QString nome, const QString email, const QString senha, const bool administrador){
    // A lógica aqui deve validar os dados para o cadastro, não para o login.
    // Verificamos se os campos obrigatórios estão preenchidos.
    if (nome.isEmpty() || email.isEmpty() || senha.isEmpty()) {
        return false; // Retorna falso se algum campo estiver vazio.
    }

    // Agora, chame o método do seu repositório para salvar os dados no banco.
    // Supondo que o repositório tenha um método 'salvarUsuario'.
    bool sucesso = m_repository.criarUsuario(nome, email, senha, administrador);

    // Retorna o resultado da operação do repositório.
    return sucesso;
}
