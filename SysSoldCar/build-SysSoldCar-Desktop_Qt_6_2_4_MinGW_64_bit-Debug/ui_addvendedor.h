/********************************************************************************
** Form generated from reading UI file 'addvendedor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVENDEDOR_H
#define UI_ADDVENDEDOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addVendedor
{
public:
    QLabel *label_6;
    QLineEdit *lineEditDataNasc;
    QLabel *label_4;
    QLineEdit *lineEditSalario;
    QLineEdit *lineEditCPF;
    QLabel *label;
    QPushButton *pushButtonAdd;
    QLineEdit *lineEditNome;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditEndereco;
    QLineEdit *lineEditSexo;
    QPushButton *pushButtonBack;

    void setupUi(QDialog *addVendedor)
    {
        if (addVendedor->objectName().isEmpty())
            addVendedor->setObjectName(QString::fromUtf8("addVendedor"));
        addVendedor->resize(400, 300);
        label_6 = new QLabel(addVendedor);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 80, 49, 16));
        lineEditDataNasc = new QLineEdit(addVendedor);
        lineEditDataNasc->setObjectName(QString::fromUtf8("lineEditDataNasc"));
        lineEditDataNasc->setGeometry(QRect(250, 40, 108, 24));
        label_4 = new QLabel(addVendedor);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 140, 49, 16));
        lineEditSalario = new QLineEdit(addVendedor);
        lineEditSalario->setObjectName(QString::fromUtf8("lineEditSalario"));
        lineEditSalario->setGeometry(QRect(50, 160, 108, 24));
        lineEditCPF = new QLineEdit(addVendedor);
        lineEditCPF->setObjectName(QString::fromUtf8("lineEditCPF"));
        lineEditCPF->setGeometry(QRect(50, 100, 108, 24));
        label = new QLabel(addVendedor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 49, 16));
        pushButtonAdd = new QPushButton(addVendedor);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(110, 230, 80, 24));
        lineEditNome = new QLineEdit(addVendedor);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));
        lineEditNome->setGeometry(QRect(50, 40, 108, 24));
        label_5 = new QLabel(addVendedor);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 140, 49, 16));
        label_2 = new QLabel(addVendedor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 20, 107, 16));
        label_3 = new QLabel(addVendedor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 80, 49, 16));
        lineEditEndereco = new QLineEdit(addVendedor);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));
        lineEditEndereco->setGeometry(QRect(250, 160, 108, 24));
        lineEditSexo = new QLineEdit(addVendedor);
        lineEditSexo->setObjectName(QString::fromUtf8("lineEditSexo"));
        lineEditSexo->setGeometry(QRect(250, 100, 108, 24));
        pushButtonBack = new QPushButton(addVendedor);
        pushButtonBack->setObjectName(QString::fromUtf8("pushButtonBack"));
        pushButtonBack->setGeometry(QRect(230, 230, 80, 24));

        retranslateUi(addVendedor);

        QMetaObject::connectSlotsByName(addVendedor);
    } // setupUi

    void retranslateUi(QDialog *addVendedor)
    {
        addVendedor->setWindowTitle(QCoreApplication::translate("addVendedor", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("addVendedor", "Sexo", nullptr));
        label_4->setText(QCoreApplication::translate("addVendedor", "Endere\303\247o", nullptr));
        label->setText(QCoreApplication::translate("addVendedor", "Nome", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("addVendedor", "Adicionar", nullptr));
        label_5->setText(QCoreApplication::translate("addVendedor", "Sal\303\241rio", nullptr));
        label_2->setText(QCoreApplication::translate("addVendedor", "Data de Nascimento", nullptr));
        label_3->setText(QCoreApplication::translate("addVendedor", "CPF", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("addVendedor", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addVendedor: public Ui_addVendedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVENDEDOR_H
