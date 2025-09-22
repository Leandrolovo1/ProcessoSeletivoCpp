/********************************************************************************
** Form generated from reading UI file 'telacadastroprodutos.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACADASTROPRODUTOS_H
#define UI_TELACADASTROPRODUTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaCadastroProdutos
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QTableWidget *tw_produtos;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *CreateProdutoButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QPushButton *voltarButton;
    QSpacerItem *verticalSpacer_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaCadastroProdutos)
    {
        if (TelaCadastroProdutos->objectName().isEmpty())
            TelaCadastroProdutos->setObjectName("TelaCadastroProdutos");
        TelaCadastroProdutos->resize(742, 472);
        TelaCadastroProdutos->setAutoFillBackground(true);
        centralwidget = new QWidget(TelaCadastroProdutos);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 3, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 2, 8, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 2, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 2, 10, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 5, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 2, 7, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 2, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 5, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_11, 2, 11, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 12, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 5, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 5, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_2->setItem(2, QFormLayout::ItemRole::SpanningRole, horizontalSpacer_5);

        tw_produtos = new QTableWidget(centralwidget);
        tw_produtos->setObjectName("tw_produtos");
        tw_produtos->setMinimumSize(QSize(462, 177));
        tw_produtos->setMaximumSize(QSize(462, 181));

        formLayout_2->setWidget(3, QFormLayout::ItemRole::SpanningRole, tw_produtos);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        formLayout_2->setLayout(4, QFormLayout::ItemRole::SpanningRole, horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        CreateProdutoButton = new QPushButton(centralwidget);
        CreateProdutoButton->setObjectName("CreateProdutoButton");

        horizontalLayout->addWidget(CreateProdutoButton);

        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName("updateButton");

        horizontalLayout->addWidget(updateButton);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(deleteButton);

        voltarButton = new QPushButton(centralwidget);
        voltarButton->setObjectName("voltarButton");

        horizontalLayout->addWidget(voltarButton);


        formLayout_2->setLayout(5, QFormLayout::ItemRole::LabelRole, horizontalLayout);


        gridLayout->addLayout(formLayout_2, 2, 5, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_13, 2, 6, 1, 1);

        TelaCadastroProdutos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaCadastroProdutos);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 742, 21));
        TelaCadastroProdutos->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaCadastroProdutos);
        statusbar->setObjectName("statusbar");
        TelaCadastroProdutos->setStatusBar(statusbar);

        retranslateUi(TelaCadastroProdutos);

        QMetaObject::connectSlotsByName(TelaCadastroProdutos);
    } // setupUi

    void retranslateUi(QMainWindow *TelaCadastroProdutos)
    {
        TelaCadastroProdutos->setWindowTitle(QCoreApplication::translate("TelaCadastroProdutos", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("TelaCadastroProdutos", "List's Products", nullptr));
        CreateProdutoButton->setText(QCoreApplication::translate("TelaCadastroProdutos", "Create", nullptr));
        updateButton->setText(QCoreApplication::translate("TelaCadastroProdutos", "Update", nullptr));
        deleteButton->setText(QCoreApplication::translate("TelaCadastroProdutos", "Delete", nullptr));
        voltarButton->setText(QCoreApplication::translate("TelaCadastroProdutos", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaCadastroProdutos: public Ui_TelaCadastroProdutos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACADASTROPRODUTOS_H
