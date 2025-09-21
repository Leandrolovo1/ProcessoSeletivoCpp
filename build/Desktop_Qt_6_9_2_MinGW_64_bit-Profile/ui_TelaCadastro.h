/********************************************************************************
** Form generated from reading UI file 'TelaCadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACADASTRO_H
#define UI_TELACADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_TelaCadastro
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_7;
    QFormLayout *formLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *NameField;
    QLineEdit *EmailField;
    QPushButton *CreateButton;
    QLineEdit *PasswordField;
    QLabel *label;
    QCheckBox *PrivilegesCheckBox;
    QPushButton *voltarButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaCadastro)
    {
        if (TelaCadastro->objectName().isEmpty())
            TelaCadastro->setObjectName("TelaCadastro");
        TelaCadastro->resize(742, 472);
        TelaCadastro->setAutoFillBackground(true);
        centralwidget = new QWidget(TelaCadastro);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 2, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 2, 7, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_11, 2, 11, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 13, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 12, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 2, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 2, 5, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 6, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 4, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 2, 10, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 6, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 6, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 2, 8, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 5, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_2->setItem(1, QFormLayout::ItemRole::SpanningRole, horizontalSpacer_5);

        NameField = new QLineEdit(centralwidget);
        NameField->setObjectName("NameField");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(NameField->sizePolicy().hasHeightForWidth());
        NameField->setSizePolicy(sizePolicy1);
        NameField->setEchoMode(QLineEdit::EchoMode::Normal);
        NameField->setReadOnly(false);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::SpanningRole, NameField);

        EmailField = new QLineEdit(centralwidget);
        EmailField->setObjectName("EmailField");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::SpanningRole, EmailField);

        CreateButton = new QPushButton(centralwidget);
        CreateButton->setObjectName("CreateButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CreateButton->sizePolicy().hasHeightForWidth());
        CreateButton->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(10, QFormLayout::ItemRole::SpanningRole, CreateButton);

        PasswordField = new QLineEdit(centralwidget);
        PasswordField->setObjectName("PasswordField");
        sizePolicy1.setHeightForWidth(PasswordField->sizePolicy().hasHeightForWidth());
        PasswordField->setSizePolicy(sizePolicy1);
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        font.setHintingPreference(QFont::PreferNoHinting);
        PasswordField->setFont(font);
        PasswordField->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout_2->setWidget(6, QFormLayout::ItemRole::SpanningRole, PasswordField);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::SpanningRole, label);

        PrivilegesCheckBox = new QCheckBox(centralwidget);
        PrivilegesCheckBox->setObjectName("PrivilegesCheckBox");

        formLayout_2->setWidget(8, QFormLayout::ItemRole::FieldRole, PrivilegesCheckBox);

        voltarButton = new QPushButton(centralwidget);
        voltarButton->setObjectName("voltarButton");

        formLayout_2->setWidget(11, QFormLayout::ItemRole::SpanningRole, voltarButton);


        gridLayout->addLayout(formLayout_2, 2, 6, 1, 1);

        TelaCadastro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaCadastro);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 742, 21));
        TelaCadastro->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaCadastro);
        statusbar->setObjectName("statusbar");
        TelaCadastro->setStatusBar(statusbar);

        retranslateUi(TelaCadastro);

        QMetaObject::connectSlotsByName(TelaCadastro);
    } // setupUi

    void retranslateUi(QMainWindow *TelaCadastro)
    {
        TelaCadastro->setWindowTitle(QCoreApplication::translate("TelaCadastro", "MainWindow", nullptr));
        NameField->setText(QString());
        NameField->setPlaceholderText(QCoreApplication::translate("TelaCadastro", "Name", nullptr));
        EmailField->setPlaceholderText(QCoreApplication::translate("TelaCadastro", "E-mail", nullptr));
        CreateButton->setText(QCoreApplication::translate("TelaCadastro", "CREATE", nullptr));
        PasswordField->setText(QString());
        PasswordField->setPlaceholderText(QCoreApplication::translate("TelaCadastro", "Password", nullptr));
        label->setText(QCoreApplication::translate("TelaCadastro", "Create Account", nullptr));
        PrivilegesCheckBox->setText(QCoreApplication::translate("TelaCadastro", "Administrative Privileges", nullptr));
        voltarButton->setText(QCoreApplication::translate("TelaCadastro", "GO BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaCadastro: public Ui_TelaCadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACADASTRO_H
