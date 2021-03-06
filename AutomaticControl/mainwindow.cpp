#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    getModeSelect.addButton(ui->radioButton_ZP,1);
    getModeSelect.addButton(ui->radioButton_ploynomial,2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Calculate_clicked()
{
    QString qstrNumerator;
    QString qstrDenominator;

    qstrNumerator   = ui->lineEdit_Numerator->text();//分子
    qstrDenominator = ui->lineEdit_Denominator->text();//分母

    //std::cout << qstrNumerator.toStdString() << endl;

    switch(getModeSelect.checkedId())
    {
    case 1://radioButton_ZP clicked
        str2complex(qstrNumerator, zeros);
        str2complex(qstrDenominator, poles);
#if 0
        std::cout<< "zeros are" << endl;
        for(int j=0;j<zeros.size();j++)
        {
            std::cout<< "complex " << j <<" is " << zeros.at(j) << endl;
        }
        std::cout<< "poles are" << endl;
        for(int j=0;j<poles.size();j++)
        {
            std::cout<< "complex " << j <<" is " << poles.at(j) << endl;
        }
#endif
        break;
    case 2://radioButton_ploynomial clicked
        str2ploy(qstrNumerator, fNumerator);
        solveEquations(fNumerator, zeros);
        str2ploy(qstrDenominator, fDenominator);
        solveEquations(fDenominator, poles);
        break;
    default:
        break;
    }

    cout << "zeros are " << endl;
    for(int z=0;z<zeros.size();z++)
    {
        cout << "zero " << z << " is " << zeros.at(z) << endl;
    }
    cout << "poles are " << endl;
    for(int z=0;z<zeros.size();z++)
    {
        cout << "pole " << z << " is " << poles.at(z) << endl;
    }

    if(ui->checkBox_Root->isChecked())
    {

    }
    if(ui->checkBox_Freq->isChecked())
    {

    }
    zeros.clear();poles.clear();
    fNumerator.clear();fDenominator.clear();
}
