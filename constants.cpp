#include<iostream>
/*
degismesini istemedigimiz degiskenleri sabitlerle tanimalariz

1) #define 
2) const

*/
#define PI 3.14

int main()
{
    int r;
    const double PI2 = 3.14;

    std::cout<<"yari capi giriniz: ";
    std::cin>>r;

    std::cout<<"\nDairenin Alani: "<< PI*r*r<<std::endl;
    std::cout<<"Ikinci Dairenin Alani: "<<PI2*r*r<<std::endl;

    system("pause");
    return 0;
}