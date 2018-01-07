#include "calculate.h"

void str2complex(QString qstr, vector<complex<float> > &vecComplex)
{
    //bool isReal = false;
    bool isImag = false;

    QString strTemp=0;
    QString strReal=0, strImag=0;
    float   fReal=0,fImag=0;

    for(int i = 0;i<qstr.length();i++)
    {
        if(qstr.at(i)!=' ')//不为空格
        {
            strTemp.append(qstr.at(i));
        }
        else//遇到空格
        {
            isImag = false;

            for(int j = 0;j<strTemp.length();j++)
            {
                if(strTemp.at(j)=='i')
                {
                    j++;
                    isImag = true;
                }
                if(!isImag)strReal.append(strTemp.at(j));
                else strImag.append(strTemp.at(j));
                //isImag = false;
            }
            fReal = strReal.toFloat();
            fImag = strImag.toFloat();

            complex<float> complexTemp(fReal,fImag);
            vecComplex.push_back(complexTemp);

            strTemp.clear();
            strReal.clear();
            strImag.clear();
            fReal = 0;fImag = 0;
        }
//        if(vecComplex.size()==0)
//        {
//            QMessageBox::warning(NULL, "Warning", "请输入零极点！！！", QMessageBox::Close);
//            return;
//        }
    }
    if(vecComplex.size()==0)
    {
        QMessageBox::warning(NULL, "Warning", "请输入零极点！！！", QMessageBox::Close);
        return;
    }
    //printComplexNumbers(vecComplex);
}

void str2ploy(QString qstr, vector<float> &vecPloynomial)
{
    QString strTemp;

    for(int i = 0;i<qstr.length();i++)
    {
        if(qstr.at(i)!=' ')
        {
            strTemp.append(qstr.at(i));
        }
        else
        {
            vecPloynomial.push_back(strTemp.toFloat());
            strTemp.clear();
        }
    }

    if(vecPloynomial.size()==0)
    {
        QMessageBox::warning(NULL, "Warning", "请输入系数！！！", QMessageBox::Close);
        return;
    }

    while((vecPloynomial.size()!=0)&&(vecPloynomial.at(0)==0.0))
    {
        vector<float>::iterator itr = vecPloynomial.begin();
        vecPloynomial.erase(itr);
    }

    if(vecPloynomial.size()==0)
    {
        QMessageBox::warning(NULL, "Warning", "请输入系数！！！", QMessageBox::Close);
        return;
    }

//    for(int i=0;i<vecPloynomial.size();i++)
//    {
//        cout << "numbers " << i << " is " << vecPloynomial.at(i) << endl;
//    }
}

void solveEquations(vector<float> &coefficient, vector<complex<float> > &vecComplex)
{
    int order=0;
    order = coefficient.size()-1;
    switch(order)
    {
    case 0:
        QMessageBox::warning(NULL, "Warning", "请输入1次以上方程！", QMessageBox::Close);
        break;
    case 1:
        solveOneOrderEquations(coefficient, vecComplex);
        break;
    case 2:
        solveTwoOrderEquations(coefficient, vecComplex);
        break;
    case 3:
        solveThreeOrderEquations(coefficient, vecComplex);
        break;
    case 4:
        solveFourOrderEquations(coefficient, vecComplex);
        break;
    default:
        QMessageBox::warning(NULL, "Warning", "支持4次以下方程！！", QMessageBox::Close);
        break;
    }
}

void solveOneOrderEquations(vector<float> &coefficient, vector<complex<float > > &vecComplex)
{
    float result=0;

    vecComplex.clear();
    result = -(coefficient.at(1)/coefficient.at(0));

    complex<float> complexTemp(result,0);
    vecComplex.push_back(complexTemp);
}

void solveTwoOrderEquations(vector<float> &coefficient, vector<complex<float > > &vecComplex)
{

}

void solveThreeOrderEquations(vector<float> &coefficient, vector<complex<float > > &vecComplex)
{

}

void solveFourOrderEquations(vector<float> &coefficient, vector<complex<float > > &vecComplex)
{

}

void rootCalculate(const vector<complex<float> > &vecComplex)
{

}

void rootCalculate(const vector<float> &vecPloynomial)
{

}

void freqCalculate(const vector<complex<float> > &vecComplex)
{

}

void freqCalculate(const vector<float> &vecPloynomial)
{

}

void printComplexNumbers(const vector<complex<float> > &vecComplex)
{
    for(int i=0;i<vecComplex.size();i++)
    {
        cout << "numbers " << i << " is " << vecComplex.at(i) << endl;
    }
}
