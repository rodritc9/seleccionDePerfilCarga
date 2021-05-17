/********************************************************************************
** Form generated from reading UI file 'Estatica.ui'
**
** Created: Wed 9. Nov 15:21:20 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTATICA_H
#define UI_ESTATICA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Estatica
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QPushButton *bperfilc;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QTextBrowser *catalogo4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *bperfilL;
    QHBoxLayout *horizontalLayout_3;
    QTextBrowser *catalogo3;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_2;
    QPushButton *bperfilu;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QTextBrowser *catalogo2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *bperfilI;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QTextBrowser *catalogo1;
    QVBoxLayout *verticalLayout;
    QPushButton *parametros;
    QPushButton *puntual;
    QPushButton *distribuida;
    QPushButton *calcular;
    QPushButton *salir;
    QLabel *Viga;
    QWidget *formLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *infoparametro;
    QTextBrowser *valorparametro;
    QHBoxLayout *horizontalLayout_7;
    QLabel *infotensionadmisible;
    QTextBrowser *valtensionadmisible;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QTextBrowser *momentomax;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QTextBrowser *wxdeseado;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QGraphicsScene *scene;
    void setupUi(QMainWindow *Estatica)
    {
        if (Estatica->objectName().isEmpty())
            Estatica->setObjectName(QString::fromUtf8("Estatica"));
        Estatica->setWindowModality(Qt::WindowModal);
        Estatica->setEnabled(true);
        Estatica->resize(1000, 651);
        Estatica->setMinimumSize(QSize(1000, 651));
        Estatica->setMaximumSize(QSize(1000, 651));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenventana.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/imagenventana.jpg"), QSize(), QIcon::Normal, QIcon::On);
        Estatica->setWindowIcon(icon);
        centralwidget = new QWidget(Estatica);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(1000, 651));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 260, 971, 291));
        horizontalLayoutWidget->setMinimumSize(QSize(180, 180));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        bperfilc = new QPushButton(horizontalLayoutWidget);
        bperfilc->setObjectName(QString::fromUtf8("bperfilc"));
        bperfilc->setMinimumSize(QSize(180, 180));
        bperfilc->setMaximumSize(QSize(200, 200));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/C.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        bperfilc->setIcon(icon1);
        bperfilc->setIconSize(QSize(200, 200));
        bperfilc->setAutoDefault(false);
        bperfilc->setFlat(true);

        verticalLayout_5->addWidget(bperfilc);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(10);
        label_4->setFont(font);
        label_4->setScaledContents(true);

        horizontalLayout_4->addWidget(label_4);

        catalogo4 = new QTextBrowser(horizontalLayoutWidget);
        catalogo4->setObjectName(QString::fromUtf8("catalogo4"));
        catalogo4->setMaximumSize(QSize(80, 35));

        horizontalLayout_4->addWidget(catalogo4);


        verticalLayout_5->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        bperfilL = new QPushButton(horizontalLayoutWidget);
        bperfilL->setObjectName(QString::fromUtf8("bperfilL"));
        bperfilL->setMinimumSize(QSize(200, 200));
        bperfilL->setMaximumSize(QSize(200, 200));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/L.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        bperfilL->setIcon(icon2);
        bperfilL->setIconSize(QSize(200, 200));
        bperfilL->setFlat(true);

        verticalLayout_3->addWidget(bperfilL);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        catalogo3 = new QTextBrowser(horizontalLayoutWidget);
        catalogo3->setObjectName(QString::fromUtf8("catalogo3"));
        catalogo3->setMaximumSize(QSize(80, 35));

        horizontalLayout_3->addWidget(catalogo3);

        label_8 = new QLabel(horizontalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setScaledContents(true);

        horizontalLayout_3->addWidget(label_8);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bperfilu = new QPushButton(horizontalLayoutWidget);
        bperfilu->setObjectName(QString::fromUtf8("bperfilu"));
        bperfilu->setMinimumSize(QSize(200, 200));
        bperfilu->setMaximumSize(QSize(200, 200));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/UPN.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        bperfilu->setIcon(icon3);
        bperfilu->setIconSize(QSize(200, 200));
        bperfilu->setAutoDefault(false);
        bperfilu->setFlat(true);

        verticalLayout_2->addWidget(bperfilu);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setScaledContents(true);

        horizontalLayout_6->addWidget(label_7);

        catalogo2 = new QTextBrowser(horizontalLayoutWidget);
        catalogo2->setObjectName(QString::fromUtf8("catalogo2"));
        catalogo2->setMaximumSize(QSize(80, 35));

        horizontalLayout_6->addWidget(catalogo2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        bperfilI = new QPushButton(horizontalLayoutWidget);
        bperfilI->setObjectName(QString::fromUtf8("bperfilI"));
        bperfilI->setMinimumSize(QSize(200, 200));
        bperfilI->setMaximumSize(QSize(200, 200));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/IPN.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        bperfilI->setIcon(icon4);
        bperfilI->setIconSize(QSize(200, 200));
        bperfilI->setAutoDefault(false);
        bperfilI->setFlat(true);

        verticalLayout_6->addWidget(bperfilI);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setScaledContents(true);

        horizontalLayout_8->addWidget(label_5);

        catalogo1 = new QTextBrowser(horizontalLayoutWidget);
        catalogo1->setObjectName(QString::fromUtf8("catalogo1"));
        catalogo1->setMaximumSize(QSize(80, 35));

        horizontalLayout_8->addWidget(catalogo1);


        verticalLayout_6->addLayout(horizontalLayout_8);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        parametros = new QPushButton(horizontalLayoutWidget);
        parametros->setObjectName(QString::fromUtf8("parametros"));
        parametros->setEnabled(true);
        parametros->setAutoRepeatDelay(300);
        parametros->setAutoDefault(false);
        parametros->setDefault(false);
        parametros->setFlat(false);

        verticalLayout->addWidget(parametros);

        puntual = new QPushButton(horizontalLayoutWidget);
        puntual->setObjectName(QString::fromUtf8("puntual"));
        puntual->setEnabled(true);
        puntual->setAutoRepeat(false);

        verticalLayout->addWidget(puntual);

        distribuida = new QPushButton(horizontalLayoutWidget);
        distribuida->setObjectName(QString::fromUtf8("distribuida"));
        distribuida->setAutoRepeat(true);

        verticalLayout->addWidget(distribuida);

        calcular = new QPushButton(horizontalLayoutWidget);
        calcular->setObjectName(QString::fromUtf8("calcular"));
        calcular->setAutoRepeat(true);

        verticalLayout->addWidget(calcular);

        salir = new QPushButton(horizontalLayoutWidget);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setAutoRepeat(true);

        verticalLayout->addWidget(salir);


        horizontalLayout->addLayout(verticalLayout);

        Viga = new QLabel(centralwidget);
        Viga->setObjectName(QString::fromUtf8("Viga"));
        Viga->setEnabled(true);
        Viga->setGeometry(QRect(10, 120, 679, 133));
        Viga->setTextFormat(Qt::LogText);
        Viga->setPixmap(QPixmap(QString::fromUtf8(":/viga.png")));
        Viga->setScaledContents(true);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(776, 10, 211, 201));
        verticalLayout_4 = new QVBoxLayout(formLayoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        infoparametro = new QLabel(formLayoutWidget);
        infoparametro->setObjectName(QString::fromUtf8("infoparametro"));

        horizontalLayout_5->addWidget(infoparametro);

        valorparametro = new QTextBrowser(formLayoutWidget);
        valorparametro->setObjectName(QString::fromUtf8("valorparametro"));
        valorparametro->setMaximumSize(QSize(500, 30));
        valorparametro->setFrameShape(QFrame::HLine);

        horizontalLayout_5->addWidget(valorparametro);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        infotensionadmisible = new QLabel(formLayoutWidget);
        infotensionadmisible->setObjectName(QString::fromUtf8("infotensionadmisible"));

        horizontalLayout_7->addWidget(infotensionadmisible);

        valtensionadmisible = new QTextBrowser(formLayoutWidget);
        valtensionadmisible->setObjectName(QString::fromUtf8("valtensionadmisible"));
        valtensionadmisible->setMaximumSize(QSize(500, 30));
        valtensionadmisible->setFrameShape(QFrame::HLine);

        horizontalLayout_7->addWidget(valtensionadmisible);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_9->addWidget(label);

        momentomax = new QTextBrowser(formLayoutWidget);
        momentomax->setObjectName(QString::fromUtf8("momentomax"));
        momentomax->setMaximumSize(QSize(500, 30));
        momentomax->setFrameShape(QFrame::HLine);

        horizontalLayout_9->addWidget(momentomax);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_10->addWidget(label_2);

        wxdeseado = new QTextBrowser(formLayoutWidget);
        wxdeseado->setObjectName(QString::fromUtf8("wxdeseado"));
        wxdeseado->setMaximumSize(QSize(500, 30));
        wxdeseado->setAutoFillBackground(false);
        wxdeseado->setFrameShape(QFrame::HLine);

        horizontalLayout_10->addWidget(wxdeseado);


        verticalLayout_4->addLayout(horizontalLayout_10);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 661, 111));
        graphicsView->setFrameShape(QFrame::HLine);
        QBrush brush(QColor(236, 236, 236, 255));
        brush.setStyle(Qt::Dense4Pattern);
        graphicsView->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        graphicsView->setForegroundBrush(brush1);
        graphicsView->setRubberBandSelectionMode(Qt::ContainsItemBoundingRect);
        Estatica->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Estatica);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        Estatica->setMenuBar(menubar);
        statusbar = new QStatusBar(Estatica);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Estatica->setStatusBar(statusbar);
        scene = new QGraphicsScene(0,0,100,100);
        graphicsView->setScene(scene);

        retranslateUi(Estatica);
        QObject::connect(puntual, SIGNAL(clicked()), Estatica, SLOT(AgregarCpuntual()));
        QObject::connect(distribuida, SIGNAL(clicked()), Estatica, SLOT(AgregarCdistribuida()));
        QObject::connect(calcular, SIGNAL(clicked()), Estatica, SLOT(Calcular()));
        QObject::connect(salir, SIGNAL(clicked()), Estatica, SLOT(close()));
        QObject::connect(parametros, SIGNAL(clicked()), Estatica, SLOT(ingresarparametros()));
        QObject::connect(bperfilI, SIGNAL(clicked()), Estatica, SLOT(botonperfilI()));
        QObject::connect(bperfilL, SIGNAL(clicked()), Estatica, SLOT(botonperfilL()));
        QObject::connect(bperfilc, SIGNAL(clicked()), Estatica, SLOT(botonperfilc()));
        QObject::connect(bperfilu, SIGNAL(clicked()), Estatica, SLOT(botonperfilu()));

        QMetaObject::connectSlotsByName(Estatica);
    } // setupUi

    void retranslateUi(QMainWindow *Estatica)
    {
        Estatica->setWindowTitle(QApplication::translate("Estatica", "Estatica", 0, QApplication::UnicodeUTF8));
        bperfilc->setText(QString());
        label_4->setText(QApplication::translate("Estatica", "Wx:", 0, QApplication::UnicodeUTF8));
        bperfilL->setText(QString());
        label_8->setText(QApplication::translate("Estatica", "Wx:", 0, QApplication::UnicodeUTF8));
        bperfilu->setText(QString());
        label_7->setText(QApplication::translate("Estatica", "Wx:", 0, QApplication::UnicodeUTF8));
        bperfilI->setText(QString());
        label_5->setText(QApplication::translate("Estatica", "Wx:", 0, QApplication::UnicodeUTF8));
        parametros->setText(QApplication::translate("Estatica", "Parametros", 0, QApplication::UnicodeUTF8));
        puntual->setText(QApplication::translate("Estatica", "Carga Puntual", 0, QApplication::UnicodeUTF8));
        distribuida->setText(QApplication::translate("Estatica", "Carga distribuida", 0, QApplication::UnicodeUTF8));
        calcular->setText(QApplication::translate("Estatica", "Calcular", 0, QApplication::UnicodeUTF8));
        salir->setText(QApplication::translate("Estatica", "Salir", 0, QApplication::UnicodeUTF8));
        Viga->setText(QString());
        infoparametro->setText(QApplication::translate("Estatica", "Longitud:", 0, QApplication::UnicodeUTF8));
        valorparametro->setHtml(QApplication::translate("Estatica", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        infotensionadmisible->setText(QApplication::translate("Estatica", "Tension Admisible:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Estatica", "Momento maximo", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Estatica", "Wx Deseado", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Estatica: public Ui_Estatica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTATICA_H
