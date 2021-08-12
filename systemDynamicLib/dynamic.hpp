#ifndef __DYNAMIC_HPP__
#define __DYNAMIC_HPP__

typedef struct systemParameters
{
    double ornekleme_zamani;
    double baslama_zamani;
    double bitis_zamani;
    double x0;
    double a,b;


}sysprmtrs;

void forwardsolver(double a, double b, double *state, double *input, const int SIZE, double orneklemeZamani);
void forwardsolver(systemParameters s1);

void backwardsolver(double a, double b, double *state, double *input, const int SIZE, double orneklemeZamani);
void centralsolver(double a, double b, double *state, double *input, const int SIZE, double orneklemeZamani);
void results(double *state,double *input,const int SIZE);
void initializeStateVariables(double *state,const int SIZE,double value,double initCond);
void initializeInputVariables(double *input,const int SIZE,double value);

#endif