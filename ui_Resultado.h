/********************************************************************************
** Form generated from reading UI file 'Resultado.ui'
**
** Created: Wed 9. Nov 12:59:36 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADO_H
#define UI_RESULTADO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Resultado
{
public:
    QLabel *foto_1;
    QTextBrowser *textBrowser;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pdf;
    QPushButton *cerrar;

    void setupUi(QDialog *Resultado)
    {
        if (Resultado->objectName().isEmpty())
            Resultado->setObjectName(QString::fromUtf8("Resultado"));
        Resultado->resize(896, 890);
        Resultado->setMinimumSize(QSize(896, 890));
        Resultado->setMaximumSize(QSize(896, 890));
        foto_1 = new QLabel(Resultado);
        foto_1->setObjectName(QString::fromUtf8("foto_1"));
        foto_1->setGeometry(QRect(20, 120, 311, 321));
        foto_1->setMaximumSize(QSize(500, 500));
        foto_1->setPixmap(QPixmap(QString::fromUtf8(":/IPN.jpg")));
        foto_1->setScaledContents(true);
        textBrowser = new QTextBrowser(Resultado);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(370, 50, 501, 611));
        textBrowser->setAutoFillBackground(true);
        horizontalLayoutWidget = new QWidget(Resultado);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(590, 810, 241, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pdf = new QPushButton(horizontalLayoutWidget);
        pdf->setObjectName(QString::fromUtf8("pdf"));

        horizontalLayout->addWidget(pdf);

        cerrar = new QPushButton(horizontalLayoutWidget);
        cerrar->setObjectName(QString::fromUtf8("cerrar"));

        horizontalLayout->addWidget(cerrar);


        retranslateUi(Resultado);
        QObject::connect(cerrar, SIGNAL(clicked()), Resultado, SLOT(close()));
        QObject::connect(pdf, SIGNAL(clicked()), Resultado, SLOT(generar()));

        QMetaObject::connectSlotsByName(Resultado);
    } // setupUi

    void retranslateUi(QDialog *Resultado)
    {
        Resultado->setWindowTitle(QApplication::translate("Resultado", "Resultado", 0, QApplication::UnicodeUTF8));
        foto_1->setText(QString());
        pdf->setText(QApplication::translate("Resultado", "Crear PDF", 0, QApplication::UnicodeUTF8));
        cerrar->setText(QApplication::translate("Resultado", "Cerrar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Resultado: public Ui_Resultado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADO_H
