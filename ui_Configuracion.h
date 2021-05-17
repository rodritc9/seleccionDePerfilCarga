/********************************************************************************
** Form generated from reading UI file 'Configuracion.ui'
**
** Created: Tue 8. Nov 12:03:31 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACION_H
#define UI_CONFIGURACION_H

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

class Ui_Configuracion
{
public:
    QPushButton *aceptar;
    QPushButton *cancelar;
    QLineEdit *logitud_viga;
    QLineEdit *tension_adm;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Configuracion)
    {
        if (Configuracion->objectName().isEmpty())
            Configuracion->setObjectName(QString::fromUtf8("Configuracion"));
        Configuracion->resize(565, 465);
        aceptar = new QPushButton(Configuracion);
        aceptar->setObjectName(QString::fromUtf8("aceptar"));
        aceptar->setGeometry(QRect(120, 360, 112, 34));
        cancelar = new QPushButton(Configuracion);
        cancelar->setObjectName(QString::fromUtf8("cancelar"));
        cancelar->setGeometry(QRect(330, 360, 112, 34));
        logitud_viga = new QLineEdit(Configuracion);
        logitud_viga->setObjectName(QString::fromUtf8("logitud_viga"));
        logitud_viga->setGeometry(QRect(230, 120, 113, 27));
        tension_adm = new QLineEdit(Configuracion);
        tension_adm->setObjectName(QString::fromUtf8("tension_adm"));
        tension_adm->setGeometry(QRect(230, 220, 113, 27));
        label = new QLabel(Configuracion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 120, 121, 21));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(Configuracion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 220, 171, 21));
        label_2->setFont(font);
        label_3 = new QLabel(Configuracion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 120, 70, 21));
        label_3->setFont(font);
        label_4 = new QLabel(Configuracion);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(370, 220, 70, 21));
        label_4->setFont(font);

        retranslateUi(Configuracion);
        QObject::connect(aceptar, SIGNAL(clicked()), Configuracion, SLOT(configurar()));
        QObject::connect(cancelar, SIGNAL(clicked()), Configuracion, SLOT(reject()));

        QMetaObject::connectSlotsByName(Configuracion);
    } // setupUi

    void retranslateUi(QDialog *Configuracion)
    {
        Configuracion->setWindowTitle(QApplication::translate("Configuracion", "Configuracion", 0, QApplication::UnicodeUTF8));
        aceptar->setText(QApplication::translate("Configuracion", "Aceptar", 0, QApplication::UnicodeUTF8));
        cancelar->setText(QApplication::translate("Configuracion", "Cancelar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Configuracion", "Longitud viga", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Configuracion", "Tensi\303\263n admisible", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Configuracion", "m", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Configuracion", "MPa", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Configuracion: public Ui_Configuracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACION_H
