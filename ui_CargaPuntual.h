/********************************************************************************
** Form generated from reading UI file 'CargaPuntual.ui'
**
** Created: Tue 8. Nov 15:51:16 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARGAPUNTUAL_H
#define UI_CARGAPUNTUAL_H

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

class Ui_CargaPuntual
{
public:
    QPushButton *aceptar;
    QPushButton *cancelar;
    QLineEdit *magnitudF;
    QLineEdit *posicionF;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *CargaPuntual)
    {
        if (CargaPuntual->objectName().isEmpty())
            CargaPuntual->setObjectName(QString::fromUtf8("CargaPuntual"));
        CargaPuntual->resize(565, 465);
        aceptar = new QPushButton(CargaPuntual);
        aceptar->setObjectName(QString::fromUtf8("aceptar"));
        aceptar->setGeometry(QRect(80, 290, 131, 41));
        QFont font;
        font.setPointSize(8);
        aceptar->setFont(font);
        cancelar = new QPushButton(CargaPuntual);
        cancelar->setObjectName(QString::fromUtf8("cancelar"));
        cancelar->setGeometry(QRect(310, 290, 121, 41));
        cancelar->setFont(font);
        magnitudF = new QLineEdit(CargaPuntual);
        magnitudF->setObjectName(QString::fromUtf8("magnitudF"));
        magnitudF->setGeometry(QRect(230, 100, 113, 27));
        QFont font1;
        font1.setPointSize(10);
        magnitudF->setFont(font1);
        posicionF = new QLineEdit(CargaPuntual);
        posicionF->setObjectName(QString::fromUtf8("posicionF"));
        posicionF->setGeometry(QRect(230, 170, 113, 27));
        posicionF->setFont(font1);
        label = new QLabel(CargaPuntual);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 90, 91, 31));
        label->setFont(font1);
        label_2 = new QLabel(CargaPuntual);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 170, 81, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(CargaPuntual);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 100, 70, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(CargaPuntual);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(370, 170, 70, 21));
        label_4->setFont(font1);

        retranslateUi(CargaPuntual);
        QObject::connect(cancelar, SIGNAL(clicked()), CargaPuntual, SLOT(reject()));
        QObject::connect(aceptar, SIGNAL(clicked()), CargaPuntual, SLOT(ingresar_magnitud_y_posicion()));

        QMetaObject::connectSlotsByName(CargaPuntual);
    } // setupUi

    void retranslateUi(QDialog *CargaPuntual)
    {
        CargaPuntual->setWindowTitle(QApplication::translate("CargaPuntual", "CargaPuntual", 0, QApplication::UnicodeUTF8));
        aceptar->setText(QApplication::translate("CargaPuntual", "aceptar", 0, QApplication::UnicodeUTF8));
        cancelar->setText(QApplication::translate("CargaPuntual", "cancelar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CargaPuntual", "Magnitud", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CargaPuntual", "Posicion", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CargaPuntual", "kN", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CargaPuntual", "m", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CargaPuntual: public Ui_CargaPuntual {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARGAPUNTUAL_H
