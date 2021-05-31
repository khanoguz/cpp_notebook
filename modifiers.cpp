#include<iostream>

/*
modifiers -> türlerin önüne koyduğumuz keyword'ler

signed 
unsignd
long
short 

türlerin tuttugu bytlerin sayisini degistirir.
fakat tutabildikleri sayınin büyüklükleri de degisir.

*/

int main()
{
    short int i;
    short unsigned j;

    std::cout<<"size of i: "<<sizeof(i)<<std::endl; // = 2
    std::cout<<"size of j: "<<sizeof(j)<<std::endl; // = 2

    //fakat ikisinde bit organizasyonu farklidir. birisinde bastan sona dogru iken öbüründe sondan basa dogrudur.
        
    j = 50000;
    i = j;

    std::cout<<"I: "<<i;
    std::cout<<"\nJ: "<<j<<std::endl;

    system("pause");
    return 0;

}
