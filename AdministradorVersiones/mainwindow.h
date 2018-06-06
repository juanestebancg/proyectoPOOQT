#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QException>
#include "Controlador.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnCrear_clicked();

    void on_btnDiferencia_clicked();

    void on_btnHistorial_clicked();

    void on_btnObtener_clicked();

    void on_btn_Modificar_clicked();

    void on_okCrear_clicked();

    void on_okDiferencia_clicked();

    void on_okModificar_clicked();

    void on_okObtener_clicked();

    void on_okModificar2_clicked();

    void info_Modificacion();

    bool validacion(string);

private:
    Ui::MainWindow *ui;
    Controlador control;
    string nomb_control;
    bool flag;
};

#endif // MAINWINDOW_H
