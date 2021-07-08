#include<iostream>
/*
bir fonksiyonun farkli inputlar alabildigi durumdur.
ayni isimli fonksiyonu 2-3 kere tanimlayabiliriz.

sum(int,int);
sum(double,double);
sum(float,float); gibi.....
*/
void sum(int a,int b)
{
    std::cout<<"sum of a and b: "<<a+b<<std::endl;
}

void sum(double a,double b)
{
    std::cout<<"sum of a and b: "<<a+b<<std::endl;
}


main()
{
    /*
    int a = 4;
    int b = 3;
    */
    double a = 3.4;
    double b = 4.3;
    
    sum(a,b);

}