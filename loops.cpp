#include<iostream>

/*
ayni islemi bir kac kere yapmak icin donguleri kullaniriz


while -> sart false olana kadar devam eder
for -> belli adim sayisi kadar devam eder

*/

main()
{
    int adim = 1;

    while(adim <= 10)
    {
        std::cout<<adim<<". times hello world!"<<std::endl;
        adim++;
    }
    std::cout<<"-------------------------------------------------"<<std::endl;


    for(int i=0;i<=10;i++)
    {
        std::cout<<i<<". For loops"<<std::endl;
    }
    std::cout<<"-------------------------------------------------"<<std::endl;

    int a = 11;
    do
    {
        std::cout<<a<<"bi kere olsun buraya girer."<<std::endl;
        a++;
    } while (a<10);
    

    system("pause");
    return 0;

}