#include<iostream>

/*
fonksion -> belli bir görevi yerine getiren alan(scope).

1)okumayi cok kolaylastirir
2)ortak olarak kullanilan her yerde kullanilir.

*/

int topla(int a,int b)
{
    int son = a+b;
    return son;
}

main() // main bir adrestir. yanina () yaparak onu cagiririz.
{
    int say1 = 2, say2 = 5, sonuc;
    
    sonuc = topla(say1,say2);
    std::cout<<"sonuc: "<<sonuc<<std::endl;

    system("pause");
    return 0;
}