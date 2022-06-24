/********************************************************************************
** Form generated from reading UI file 'vendas.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENDAS_H
#define UI_VENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_vendas
{
public:
    QLineEdit *lineEditCar;
    QLineEdit *lineEditOwner;
    QLineEdit *lineEditValue;
    QLineEdit *lineEditPlate;
    QLineEdit *lineEditRENAVAM;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButtonSold;
    QPushButton *pushButtonList;
    QPushButton *pushButtonBack;

    void setupUi(QDialog *vendas)
    {
        if (vendas->objectName().isEmpty())
            vendas->setObjectName(QString::fromUtf8("vendas"));
        vendas->resize(400, 300);
        lineEditCar = new QLineEdit(vendas);
        lineEditCar->setObjectName(QString::fromUtf8("lineEditCar"));
        lineEditCar->setGeometry(QRect(40, 60, 113, 24));
        lineEditOwner = new QLineEdit(vendas);
        lineEditOwner->setObjectName(QString::fromUtf8("lineEditOwner"));
        lineEditOwner->setGeometry(QRect(230, 60, 113, 24));
        lineEditValue = new QLineEdit(vendas);
        lineEditValue->setObjectName(QString::fromUtf8("lineEditValue"));
        lineEditValue->setGeometry(QRect(40, 130, 113, 24));
        lineEditPlate = new QLineEdit(vendas);
        lineEditPlate->setObjectName(QString::fromUtf8("lineEditPlate"));
        lineEditPlate->setGeometry(QRect(230, 130, 113, 24));
        lineEditRENAVAM = new QLineEdit(vendas);
        lineEditRENAVAM->setObjectName(QString::fromUtf8("lineEditRENAVAM"));
        lineEditRENAVAM->setGeometry(QRect(140, 190, 113, 24));
        label = new QLabel(vendas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 49, 16));
        label_2 = new QLabel(vendas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 40, 55, 16));
        label_3 = new QLabel(vendas);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 110, 49, 16));
        label_4 = new QLabel(vendas);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 110, 49, 16));
        label_5 = new QLabel(vendas);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 170, 54, 16));
        pushButtonSold = new QPushButton(vendas);
        pushButtonSold->setObjectName(QString::fromUtf8("pushButtonSold"));
        pushButtonSold->setGeometry(QRect(50, 230, 80, 24));
        pushButtonList = new QPushButton(vendas);
        pushButtonList->setObjectName(QString::fromUtf8("pushButtonList"));
        pushButtonList->setGeometry(QRect(160, 230, 80, 24));
        pushButtonBack = new QPushButton(vendas);
        pushButtonBack->setObjectName(QString::fromUtf8("pushButtonBack"));
        pushButtonBack->setGeometry(QRect(280, 230, 80, 24));

        retranslateUi(vendas);

        QMetaObject::connectSlotsByName(vendas);
    } // setupUi

    void retranslateUi(QDialog *vendas)
    {
        vendas->setWindowTitle(QCoreApplication::translate("vendas", "Gerenciamento de Vendas", nullptr));
        label->setText(QCoreApplication::translate("vendas", "Carro", nullptr));
        label_2->setText(QCoreApplication::translate("vendas", "Proriet\303\241rio", nullptr));
        label_3->setText(QCoreApplication::translate("vendas", "Valor", nullptr));
        label_4->setText(QCoreApplication::translate("vendas", "Placa", nullptr));
        label_5->setText(QCoreApplication::translate("vendas", "RENAVAM", nullptr));
        pushButtonSold->setText(QCoreApplication::translate("vendas", "Vender", nullptr));
        pushButtonList->setText(QCoreApplication::translate("vendas", "Listar Vendas", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("vendas", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vendas: public Ui_vendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENDAS_H
