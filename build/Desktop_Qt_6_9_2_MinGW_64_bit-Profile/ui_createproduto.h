/********************************************************************************
** Form generated from reading UI file 'createproduto.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPRODUTO_H
#define UI_CREATEPRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createproduto
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_10;
    QFormLayout *formLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *NameField;
    QLineEdit *PriceField;
    QLineEdit *InventoryField;
    QComboBox *comboBox;
    QPushButton *CreateButton;
    QPushButton *voltarButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *createproduto)
    {
        if (createproduto->objectName().isEmpty())
            createproduto->setObjectName("createproduto");
        createproduto->resize(742, 472);
        createproduto->setAutoFillBackground(true);
        centralwidget = new QWidget(createproduto);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 2, 10, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 2, 3, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_11, 2, 11, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 2, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 6, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 6, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 2, 7, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 12, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 6, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 2, 2, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(-1, 2, -1, -1);
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

        formLayout_2->setWidget(0, QFormLayout::ItemRole::SpanningRole, label);

        horizontalSpacer_5 = new QSpacerItem(40, 5, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_2->setItem(1, QFormLayout::ItemRole::SpanningRole, horizontalSpacer_5);

        NameField = new QLineEdit(centralwidget);
        NameField->setObjectName("NameField");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(NameField->sizePolicy().hasHeightForWidth());
        NameField->setSizePolicy(sizePolicy2);
        NameField->setEchoMode(QLineEdit::EchoMode::Normal);
        NameField->setReadOnly(false);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::SpanningRole, NameField);

        PriceField = new QLineEdit(centralwidget);
        PriceField->setObjectName("PriceField");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::SpanningRole, PriceField);

        InventoryField = new QLineEdit(centralwidget);
        InventoryField->setObjectName("InventoryField");
        sizePolicy2.setHeightForWidth(InventoryField->sizePolicy().hasHeightForWidth());
        InventoryField->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        font1.setHintingPreference(QFont::PreferNoHinting);
        InventoryField->setFont(font1);
        InventoryField->setEchoMode(QLineEdit::EchoMode::Normal);

        formLayout_2->setWidget(6, QFormLayout::ItemRole::SpanningRole, InventoryField);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");

        formLayout_2->setWidget(8, QFormLayout::ItemRole::SpanningRole, comboBox);

        CreateButton = new QPushButton(centralwidget);
        CreateButton->setObjectName("CreateButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(CreateButton->sizePolicy().hasHeightForWidth());
        CreateButton->setSizePolicy(sizePolicy3);

        formLayout_2->setWidget(10, QFormLayout::ItemRole::SpanningRole, CreateButton);

        voltarButton = new QPushButton(centralwidget);
        voltarButton->setObjectName("voltarButton");

        formLayout_2->setWidget(11, QFormLayout::ItemRole::SpanningRole, voltarButton);


        gridLayout->addLayout(formLayout_2, 2, 6, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 13, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 6, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 4, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 2, 8, 1, 1);

        createproduto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(createproduto);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 742, 21));
        createproduto->setMenuBar(menubar);
        statusbar = new QStatusBar(createproduto);
        statusbar->setObjectName("statusbar");
        createproduto->setStatusBar(statusbar);

        retranslateUi(createproduto);

        QMetaObject::connectSlotsByName(createproduto);
    } // setupUi

    void retranslateUi(QMainWindow *createproduto)
    {
        createproduto->setWindowTitle(QCoreApplication::translate("createproduto", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("createproduto", "Create Product", nullptr));
        NameField->setText(QString());
        NameField->setPlaceholderText(QCoreApplication::translate("createproduto", "Name", nullptr));
        PriceField->setPlaceholderText(QCoreApplication::translate("createproduto", "Price", nullptr));
        InventoryField->setText(QString());
        InventoryField->setPlaceholderText(QCoreApplication::translate("createproduto", "Inventory", nullptr));
        comboBox->setPlaceholderText(QCoreApplication::translate("createproduto", "Unidade Medida", nullptr));
        CreateButton->setText(QCoreApplication::translate("createproduto", "CREATE", nullptr));
        voltarButton->setText(QCoreApplication::translate("createproduto", "GO BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createproduto: public Ui_createproduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPRODUTO_H
