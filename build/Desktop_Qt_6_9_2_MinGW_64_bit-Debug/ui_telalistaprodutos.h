/********************************************************************************
** Form generated from reading UI file 'telalistaprodutos.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTAPRODUTOS_H
#define UI_TELALISTAPRODUTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListaProdutos
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaListaProdutos)
    {
        if (TelaListaProdutos->objectName().isEmpty())
            TelaListaProdutos->setObjectName("TelaListaProdutos");
        TelaListaProdutos->resize(800, 600);
        centralwidget = new QWidget(TelaListaProdutos);
        centralwidget->setObjectName("centralwidget");
        TelaListaProdutos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaListaProdutos);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        TelaListaProdutos->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaListaProdutos);
        statusbar->setObjectName("statusbar");
        TelaListaProdutos->setStatusBar(statusbar);

        retranslateUi(TelaListaProdutos);

        QMetaObject::connectSlotsByName(TelaListaProdutos);
    } // setupUi

    void retranslateUi(QMainWindow *TelaListaProdutos)
    {
        TelaListaProdutos->setWindowTitle(QCoreApplication::translate("TelaListaProdutos", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListaProdutos: public Ui_TelaListaProdutos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTAPRODUTOS_H
