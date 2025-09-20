QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    models/unidademedida.cpp \
    view/TelaLogin.cpp \
    main.cpp \
    models/produto.cpp \
    models/usuario.cpp \
    controller/loginController.cpp \
    database/databasemanager.cpp \
    view/TelaCadastro.cpp
HEADERS += \
    models/unidademedida.h \
    view/TelaLogin.h \
    models/produto.h \
    models/usuario.h \
    controller/loginController.h \
    database/databasemanager.h \
    view/TelaCadastro.h
FORMS += \
    forms/telaLogin.ui \
    forms/TelaCadastro.ui

TRANSLATIONS += \
    ProcessoSeletivoCpp_pt_BR.ts
CONFIG += lrelease
CONFIG += embed_translations
OTHER_FILES += README.md
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
