#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <iostream>
#include <vector>
#include <complex>
#include <math.h>
#include "qcustomplot.h"
#include "calculate.h"

using namespace std;

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
    void on_pushButton_Calculate_clicked();

private:
    Ui::MainWindow *ui;
    QButtonGroup getModeSelect;
    vector<complex<float> > zeros;  //零点
    vector<complex<float> > poles;  //极点
    vector<float > fNumerator;      //分子
    vector<float > fDenominator;    //分母
    //vector<float >
};

#endif // MAINWINDOW_H
