/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnCrear;
    QPushButton *btn_Modificar;
    QPushButton *btnObtener;
    QPushButton *btnDiferencia;
    QPushButton *btnHistorial;
    QLineEdit *fieldCrear;
    QLineEdit *fieldObtener;
    QLineEdit *fieldDiferencia;
    QPushButton *okCrear;
    QPushButton *okModificar;
    QPushButton *okObtener;
    QPushButton *okDiferencia;
    QLabel *msjCrear;
    QLabel *mErrorD;
    QLabel *mErrorT;
    QTextEdit *fieldModificar;
    QLineEdit *selectVersion;
    QPushButton *okModificar2;
    QLabel *msjMod;
    QLabel *tInfoMod;
    QTextEdit *infoMod;
    QTextEdit *infoVer;
    QLabel *tVersion;
    QLabel *errorOb;
    QLabel *errorMod;
    QLabel *errorCrear;
    QTextEdit *fieldHist;
    QLabel *titleHist;
    QLineEdit *fieldDif2;
    QLabel *infoDif1;
    QLabel *infoDif2;
    QTextEdit *showDifs;
    QLabel *titleDif;
    QLabel *errorDif;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(666, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnCrear = new QPushButton(centralWidget);
        btnCrear->setObjectName(QStringLiteral("btnCrear"));
        btnCrear->setGeometry(QRect(30, 20, 71, 23));
        btn_Modificar = new QPushButton(centralWidget);
        btn_Modificar->setObjectName(QStringLiteral("btn_Modificar"));
        btn_Modificar->setGeometry(QRect(30, 50, 71, 23));
        btnObtener = new QPushButton(centralWidget);
        btnObtener->setObjectName(QStringLiteral("btnObtener"));
        btnObtener->setGeometry(QRect(30, 80, 71, 23));
        btnDiferencia = new QPushButton(centralWidget);
        btnDiferencia->setObjectName(QStringLiteral("btnDiferencia"));
        btnDiferencia->setGeometry(QRect(30, 110, 71, 23));
        btnHistorial = new QPushButton(centralWidget);
        btnHistorial->setObjectName(QStringLiteral("btnHistorial"));
        btnHistorial->setGeometry(QRect(30, 140, 71, 23));
        fieldCrear = new QLineEdit(centralWidget);
        fieldCrear->setObjectName(QStringLiteral("fieldCrear"));
        fieldCrear->setGeometry(QRect(130, 20, 113, 20));
        fieldObtener = new QLineEdit(centralWidget);
        fieldObtener->setObjectName(QStringLiteral("fieldObtener"));
        fieldObtener->setGeometry(QRect(130, 20, 113, 20));
        fieldDiferencia = new QLineEdit(centralWidget);
        fieldDiferencia->setObjectName(QStringLiteral("fieldDiferencia"));
        fieldDiferencia->setGeometry(QRect(130, 20, 113, 20));
        okCrear = new QPushButton(centralWidget);
        okCrear->setObjectName(QStringLiteral("okCrear"));
        okCrear->setGeometry(QRect(250, 20, 51, 23));
        okModificar = new QPushButton(centralWidget);
        okModificar->setObjectName(QStringLiteral("okModificar"));
        okModificar->setGeometry(QRect(500, 20, 51, 23));
        okObtener = new QPushButton(centralWidget);
        okObtener->setObjectName(QStringLiteral("okObtener"));
        okObtener->setGeometry(QRect(250, 20, 51, 23));
        okDiferencia = new QPushButton(centralWidget);
        okDiferencia->setObjectName(QStringLiteral("okDiferencia"));
        okDiferencia->setGeometry(QRect(380, 20, 51, 21));
        msjCrear = new QLabel(centralWidget);
        msjCrear->setObjectName(QStringLiteral("msjCrear"));
        msjCrear->setGeometry(QRect(120, 50, 241, 61));
        msjCrear->setMinimumSize(QSize(91, 31));
        QFont font;
        font.setPointSize(22);
        msjCrear->setFont(font);
        mErrorD = new QLabel(centralWidget);
        mErrorD->setObjectName(QStringLiteral("mErrorD"));
        mErrorD->setGeometry(QRect(130, 190, 461, 91));
        QFont font1;
        font1.setPointSize(10);
        mErrorD->setFont(font1);
        mErrorT = new QLabel(centralWidget);
        mErrorT->setObjectName(QStringLiteral("mErrorT"));
        mErrorT->setGeometry(QRect(80, 220, 51, 21));
        mErrorT->setFont(font1);
        fieldModificar = new QTextEdit(centralWidget);
        fieldModificar->setObjectName(QStringLiteral("fieldModificar"));
        fieldModificar->setGeometry(QRect(120, 20, 371, 171));
        selectVersion = new QLineEdit(centralWidget);
        selectVersion->setObjectName(QStringLiteral("selectVersion"));
        selectVersion->setGeometry(QRect(120, 20, 113, 20));
        okModificar2 = new QPushButton(centralWidget);
        okModificar2->setObjectName(QStringLiteral("okModificar2"));
        okModificar2->setGeometry(QRect(240, 20, 51, 23));
        msjMod = new QLabel(centralWidget);
        msjMod->setObjectName(QStringLiteral("msjMod"));
        msjMod->setGeometry(QRect(120, 40, 191, 31));
        tInfoMod = new QLabel(centralWidget);
        tInfoMod->setObjectName(QStringLiteral("tInfoMod"));
        tInfoMod->setGeometry(QRect(170, 10, 371, 31));
        QFont font2;
        font2.setPointSize(18);
        tInfoMod->setFont(font2);
        infoMod = new QTextEdit(centralWidget);
        infoMod->setObjectName(QStringLiteral("infoMod"));
        infoMod->setEnabled(false);
        infoMod->setGeometry(QRect(160, 50, 331, 171));
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setPointSize(14);
        infoMod->setFont(font3);
        infoVer = new QTextEdit(centralWidget);
        infoVer->setObjectName(QStringLiteral("infoVer"));
        infoVer->setEnabled(false);
        infoVer->setGeometry(QRect(160, 50, 331, 171));
        tVersion = new QLabel(centralWidget);
        tVersion->setObjectName(QStringLiteral("tVersion"));
        tVersion->setGeometry(QRect(210, 0, 231, 41));
        QFont font4;
        font4.setPointSize(16);
        tVersion->setFont(font4);
        errorOb = new QLabel(centralWidget);
        errorOb->setObjectName(QStringLiteral("errorOb"));
        errorOb->setGeometry(QRect(140, 40, 431, 31));
        QFont font5;
        font5.setPointSize(9);
        errorOb->setFont(font5);
        errorMod = new QLabel(centralWidget);
        errorMod->setObjectName(QStringLiteral("errorMod"));
        errorMod->setGeometry(QRect(120, 40, 331, 31));
        QFont font6;
        font6.setPointSize(11);
        errorMod->setFont(font6);
        errorCrear = new QLabel(centralWidget);
        errorCrear->setObjectName(QStringLiteral("errorCrear"));
        errorCrear->setGeometry(QRect(130, 40, 431, 31));
        errorCrear->setFont(font1);
        fieldHist = new QTextEdit(centralWidget);
        fieldHist->setObjectName(QStringLiteral("fieldHist"));
        fieldHist->setEnabled(false);
        fieldHist->setGeometry(QRect(160, 50, 331, 171));
        fieldHist->setFont(font6);
        titleHist = new QLabel(centralWidget);
        titleHist->setObjectName(QStringLiteral("titleHist"));
        titleHist->setGeometry(QRect(180, 10, 311, 31));
        QFont font7;
        font7.setPointSize(20);
        titleHist->setFont(font7);
        fieldDif2 = new QLineEdit(centralWidget);
        fieldDif2->setObjectName(QStringLiteral("fieldDif2"));
        fieldDif2->setGeometry(QRect(250, 20, 113, 20));
        infoDif1 = new QLabel(centralWidget);
        infoDif1->setObjectName(QStringLiteral("infoDif1"));
        infoDif1->setGeometry(QRect(120, 40, 141, 16));
        infoDif2 = new QLabel(centralWidget);
        infoDif2->setObjectName(QStringLiteral("infoDif2"));
        infoDif2->setGeometry(QRect(260, 40, 151, 16));
        showDifs = new QTextEdit(centralWidget);
        showDifs->setObjectName(QStringLiteral("showDifs"));
        showDifs->setEnabled(true);
        showDifs->setGeometry(QRect(160, 50, 331, 171));
        showDifs->setFont(font6);
        titleDif = new QLabel(centralWidget);
        titleDif->setObjectName(QStringLiteral("titleDif"));
        titleDif->setGeometry(QRect(240, 20, 241, 21));
        titleDif->setFont(font4);
        errorDif = new QLabel(centralWidget);
        errorDif->setObjectName(QStringLiteral("errorDif"));
        errorDif->setGeometry(QRect(120, 50, 511, 31));
        QFont font8;
        font8.setPointSize(11);
        font8.setItalic(true);
        errorDif->setFont(font8);
        errorDif->setCursor(QCursor(Qt::UpArrowCursor));
        MainWindow->setCentralWidget(centralWidget);
        btnCrear->raise();
        btn_Modificar->raise();
        btnObtener->raise();
        btnDiferencia->raise();
        btnHistorial->raise();
        fieldCrear->raise();
        fieldObtener->raise();
        fieldDiferencia->raise();
        okCrear->raise();
        okModificar->raise();
        okObtener->raise();
        msjCrear->raise();
        mErrorD->raise();
        mErrorT->raise();
        fieldModificar->raise();
        selectVersion->raise();
        okModificar2->raise();
        msjMod->raise();
        tInfoMod->raise();
        infoMod->raise();
        infoVer->raise();
        tVersion->raise();
        errorOb->raise();
        errorMod->raise();
        errorCrear->raise();
        fieldHist->raise();
        titleHist->raise();
        okDiferencia->raise();
        fieldDif2->raise();
        infoDif1->raise();
        infoDif2->raise();
        showDifs->raise();
        titleDif->raise();
        errorDif->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 666, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btnCrear->setText(QApplication::translate("MainWindow", "Crear", 0));
        btn_Modificar->setText(QApplication::translate("MainWindow", "Modificar", 0));
        btnObtener->setText(QApplication::translate("MainWindow", "Obtener", 0));
        btnDiferencia->setText(QApplication::translate("MainWindow", "Diferencia", 0));
        btnHistorial->setText(QApplication::translate("MainWindow", "Historial", 0));
        okCrear->setText(QApplication::translate("MainWindow", "OK", 0));
        okModificar->setText(QApplication::translate("MainWindow", "OK", 0));
        okObtener->setText(QApplication::translate("MainWindow", "OK", 0));
        okDiferencia->setText(QApplication::translate("MainWindow", "OK", 0));
        msjCrear->setText(QApplication::translate("MainWindow", "\302\241Creaci\303\263n Exitosa!", 0));
        mErrorD->setText(QApplication::translate("MainWindow", "\302\241Debe crear un programa primero!", 0));
        mErrorT->setText(QApplication::translate("MainWindow", "ERROR:", 0));
        okModificar2->setText(QApplication::translate("MainWindow", "OK", 0));
        msjMod->setText(QApplication::translate("MainWindow", "Ingrese la version que desea modificar", 0));
        tInfoMod->setText(QApplication::translate("MainWindow", "Informaci\303\263n de la modificaci\303\263n", 0));
        tVersion->setText(QApplication::translate("MainWindow", "C\303\263digo de la versi\303\263n", 0));
        errorOb->setText(QApplication::translate("MainWindow", "Error msg", 0));
        errorMod->setText(QApplication::translate("MainWindow", "Error msj", 0));
        errorCrear->setText(QApplication::translate("MainWindow", "Error msj", 0));
        titleHist->setText(QApplication::translate("MainWindow", "Historial de versiones", 0));
        infoDif1->setText(QApplication::translate("MainWindow", "Ingrese la version 1", 0));
        infoDif2->setText(QApplication::translate("MainWindow", "Ingrese la version 2", 0));
        titleDif->setText(QApplication::translate("MainWindow", "Diferencias", 0));
        errorDif->setText(QApplication::translate("MainWindow", "Error msj", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
