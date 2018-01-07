#ifndef CALCULATE_H
#define CALCULATE_H

#include <vector>
#include "mainwindow.h"

using namespace std;

//for debug
void printComplexNumbers(const vector<complex<float> > &vecComplex);

void str2complex(QString qstr, vector<complex<float > > &vecComplex);
void str2ploy(QString qstr, vector<float> &vecPloynomial);

void solveEquations(vector<float> &coefficient, vector<complex<float > > &vecComplex);
void solveOneOrderEquations(vector<float> &coefficient, vector<complex<float > > &vecComplex);
void solveTwoOrderEquations(vector<float> &coefficient, vector<complex<float > > &vecComplex);
void solveThreeOrderEquations(vector<float> &coefficient, vector<complex<float > > &vecComplex);
void solveFourOrderEquations(vector<float> &coefficient, vector<complex<float > > &vecComplex);

void rootCalculate(const vector<complex<float > > &vecComplex);
void rootCalculate(const vector<float> &vecPloynomial);

void freqCalculate(const vector<complex<float > > &vecComplex);
void freqCalculate(const vector<float> &vecPloynomial);

#endif // CALCULATE_H
