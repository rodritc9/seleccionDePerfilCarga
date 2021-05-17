/********************************************************************************
** Form generated from reading UI file 'CargaDistribuida.ui'
**
** Created: Mon 7. Nov 20:43:20 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARGADISTRIBUIDA_H
#define UI_CARGADISTRIBUIDA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CargaDistribuida
{
public:
    QPushButton *Aceptar;
    QPushButton *Cancelar;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *Magnitud;
    QLineEdit *Xinicial;
    QLineEdit *Xfinal;

    void setupUi(QDialog *CargaDistribuida)
    {
        if (CargaDistribuida->objectName().isEmpty())
            CargaDistribuida->setObjectName(QString::fromUtf8("CargaDistribuida"));
        CargaDistribuida->resize(565, 465);
        Aceptar = new QPushButton(CargaDistribuida);
        Aceptar->setObjectName(QString::fromUtf8("Aceptar"));
        Aceptar->setGeometry(QRect(80, 340, 112, 34));
        Cancelar = new QPushButton(CargaDistribuida);
        Cancelar->setObjectName(QString::fromUtf8("Cancelar"));
        Cancelar->setGeometry(QRect(310, 340, 112, 34));
        label = new QLabel(CargaDistribuida);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 60, 91, 21));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(CargaDistribuida);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 150, 70, 21));
        label_2->setFont(font);
        label_3 = new QLabel(CargaDistribuida);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 60, 70, 21));
        label_3->setFont(font);
        label_4 = new QLabel(CargaDistribuida);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(370, 160, 70, 21));
        label_4->setFont(font);
        label_5 = new QLabel(CargaDistribuida);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 230, 70, 21));
        label_5->setFont(font);
        label_6 = new QLabel(CargaDistribuida);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 230, 70, 21));
        label_6->setFont(font);
        Magnitud = new QLineEdit(CargaDistribuida);
        Magnitud->setObjectName(QString::fromUtf8("Magnitud"));
        Magnitud->setGeometry(QRect(230, 60, 113, 27));
        Xinicial = new QLineEdit(CargaDistribuida);
        Xinicial->setObjectName(QString::fromUtf8("Xinicial"));
        Xinicial->setGeometry(QRect(230, 150, 113, 27));
        Xfinal = new QLineEdit(CargaDistribuida);
        Xfinal->setObjectName(QString::fromUtf8("Xfinal"));
        Xfinal->setGeometry(QRect(230, 230, 113, 27));

        retranslateUi(CargaDistribuida);
        QObject::connect(Aceptar, SIGNAL(clicked()), CargaDistribuida, SLOT(ingresar_magnitud_y_dominio()));
        QObject::connect(Cancelar, SIGNAL(clicked()), CargaDistribuida, SLOT(reject()));

        QMetaObject::connectSlotsByName(CargaDistribuida);
    } // setupUi

    void retranslateUi(QDialog *CargaDistribuida)
    {
        CargaDistribuida->setWindowTitle(QApplication::translate("CargaDistribuida", "CargaDistribuida", 0, QApplication::UnicodeUTF8));
        Aceptar->setText(QApplication::translate("CargaDistribuida", "Aceptar", 0, QApplication::UnicodeUTF8));
        Cancelar->setText(QApplication::translate("CargaDistribuida", "Cancelar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CargaDistribuida", "Magnitud", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CargaDistribuida", "Xinicial", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CargaDistribuida", "kN/m", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CargaDistribuida", "m", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CargaDistribuida", "Xfinal", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CargaDistribuida", "m", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CargaDistribuida: public Ui_CargaDistribuida {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARGADISTRIBUIDA_H
