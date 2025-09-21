#include "loginController.h"

#include <QDebug>
#include <QMessageBox>
loginController::loginController(QSqlDatabase &db, QObject* parent)
    : QObject(parent), m_repository(db, this)
{

}
bool loginController::validarLogin(const QString nome, const QString senha){
    if (nome.isEmpty() || senha.isEmpty()) {
        return false;
    }

    usuario UsuarioRepository =  m_repository.realizarLogin(nome);
    if(UsuarioRepository.getNome() == nome && UsuarioRepository.getSenha() == senha){
        return true;
    }
    return false;
}
