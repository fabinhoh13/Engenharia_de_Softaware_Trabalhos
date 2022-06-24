/********************************************************************************
** Form generated from reading UI file 'telavendedores.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAVENDEDORES_H
#define UI_TELAVENDEDORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telaVendedores
{
public:
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QPushButton *pushButtonEdit;
    QPushButton *pushButtonBack;

    void setupUi(QDialog *telaVendedores)
    {
        if (telaVendedores->objectName().isEmpty())
            telaVendedores->setObjectName(QString::fromUtf8("telaVendedores"));
        telaVendedores->resize(400, 300);
        pushButtonAdd = new QPushButton(telaVendedores);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(160, 60, 80, 24));
        pushButtonRemove = new QPushButton(telaVendedores);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(160, 120, 80, 24));
        pushButtonEdit = new QPushButton(telaVendedores);
        pushButtonEdit->setObjectName(QString::fromUtf8("pushButtonEdit"));
        pushButtonEdit->setGeometry(QRect(160, 180, 80, 24));
        pushButtonBack = new QPushButton(telaVendedores);
        pushButtonBack->setObjectName(QString::fromUtf8("pushButtonBack"));
        pushButtonBack->setGeometry(QRect(290, 260, 80, 24));

        retranslateUi(telaVendedores);

        QMetaObject::connectSlotsByName(telaVendedores);
    } // setupUi

    void retranslateUi(QDialog *telaVendedores)
    {
        telaVendedores->setWindowTitle(QCoreApplication::translate("telaVendedores", "Dialog", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("telaVendedores", "Adicionar", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("telaVendedores", "Remover", nullptr));
        pushButtonEdit->setText(QCoreApplication::translate("telaVendedores", "Editar", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("telaVendedores", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaVendedores: public Ui_telaVendedores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAVENDEDORES_H
