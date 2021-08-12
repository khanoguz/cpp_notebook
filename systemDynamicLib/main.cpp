#include<iostream>
#include"dynamic.hpp"
/*
xdot = dx/dt = a * x + b * u -> sürekli zaman denklemi

ayriklastirirsak..

(x[i+1] - x[i]) / dt = a * x[i] + b * u[i]
ayrık form - > x[i+1] = x[i]+ dt * (a * x[i] + b * u[i])
*/

main()
{
    /*
    
    //parameters

   double orneklemeZamani = 0.1;
   double baslatmaZamani = 0.0;
   double bitisZamani = 5.0;
   double x0 = 0.0;

   //system coefficient
   double a = -2;
   double b = 1;

   //system array
   const int SIZE = (bitisZamani - baslatmaZamani) / orneklemeZamani;
   double x[SIZE]; //state array
   double u[SIZE];  //input array

   //iterations
    initializeStateVariables(x,SIZE,1,0);
    initializeInputVariables(u,SIZE,10);
    //forwardsolver(a,b,x,u,SIZE,orneklemeZamani);
    //backwardsolver(a,b,x,u,SIZE,orneklemeZamani);
    centralsolver(a,b,x,u,SIZE,orneklemeZamani);
    results(x,u,SIZE);
*/

    systemParameters s1;
    s1.ornekleme_zamani = 0.1;
    s1.a = -2;
    s1.b = 1;
    s1.baslama_zamani = 0;
    s1.bitis_zamani = 5;
    s1.x0 = 0;

    forwardsolver(s1);

   system("pause");
   return 0;

}