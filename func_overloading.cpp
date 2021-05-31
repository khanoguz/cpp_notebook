#include<iostream>

int topla(int a, int b)
{
    int sonuc = a+b;
    return sonuc;
}

double topla(double m,double n)
{
    double son = m + n;
    return son;
}

int default_value(int a, int b = 40) //b'nin degerini default olarak girdigimiz icin kullanici isterse b degerini girmeyebilir.
{
    int sonuc = a + b;
    return sonuc;
}

main()
{
    int num1 = 2, num2 =4, son1,son2;
    double num3 = 2.3, num4 =4.1, son3;

    son1 = topla(num1,num2);
    son2 =  default_value(num1);//default_value iki parametre istemesine ragmen tek parametre verdik.
    son3 = topla(num3,num4);

    std::cout<<"Int Toplam: "<<son1<<std::endl;
    std::cout<<"Double Toplam: "<<son3<<std::endl;
    std::cout<<"default_value Toplam: "<<son2<<std::endl;




    system("pause");
    return 0;

}