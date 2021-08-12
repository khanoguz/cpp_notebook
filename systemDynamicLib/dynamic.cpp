#include<iostream>
#include"dynamic.hpp"

void initializeStateVariables(double *state,const int SIZE,double value,double initCond)
{
     for(int i = 0;i<SIZE;i++)
    {
        state[i] = value;
    }
    state[0] = initCond;
}


void initializeInputVariables(double *input,const int SIZE,double value)
{
     for(int i = 0;i<SIZE;i++)
    {
        input[i] = value;
    }
}

void forwardsolver(double a, double b, double *state, double *input, const int SIZE, double orneklemeZamani)
{
    for(int i = 0;i<SIZE;i++)
    {
        state[i+1] = state[i] + orneklemeZamani*(a*state[i] + b * input[i]);
    }
}
void forwardsolver(systemParameters s1)
{
    double *state,*input;
    const int SIZE = (s1.bitis_zamani-s1.baslama_zamani) / s1.ornekleme_zamani;

    state = (double *)malloc(sizeof(double) * SIZE);
    input =(double *)malloc(sizeof(double) * SIZE);

    initializeStateVariables(state,SIZE,1.2,0);
    initializeInputVariables(input,SIZE,10);

    for(int i = 0;i<SIZE;i++)
    {
        state[i+1] = state[i] + s1.ornekleme_zamani*(s1.a*state[i]+s1.b*input[i]);
    }

    results(state,input,SIZE);
}
void backwardsolver(double a, double b, double *state, double *input, const int SIZE, double orneklemeZamani)
{
    for(int i = 1;i<SIZE;i++)
    {
        state[i+1] = state[i-1] + orneklemeZamani*(a*state[i-1] + b * input[i-1]);
    }
}
void centralsolver(double a, double b, double *state, double *input, const int SIZE, double orneklemeZamani)
{
    for(int i = 1;i<SIZE;i++)
    {
        state[i+1] = state[i-1] + 2* orneklemeZamani*(a*state[i-1] + b * input[i-1]);
    }   
}

void results(double *state,double *input,const int SIZE)
{
    for(int i = 0;i<SIZE;i++)
   {
       std::cout<<"state["<<i<<"]: "<<state[i]<<" ---- input["<<i<<"]:"<<input[i]<<std::endl;
   }
}