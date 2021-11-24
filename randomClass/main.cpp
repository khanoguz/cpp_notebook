#include<iostream>
#include"staticClassEx.hpp"
/*
bir sınıfta bir static degisken varsa o degisken o sinifa aittir.
onun degiskenlerine ait olmaz.
*/

main()
{/*
    Class1 a;
    std::cout<<a.x<<std::endl;
    Class1 a2;
    a2.x = 5; // sadece a2'nin x degerini 5 yapmamıza ragmen a'nın da x degeri 5 olur.
    //static degiskene burada atama yapmak pek önerilmez
    std::cout<<a.x<<std::endl;
    std::cout<<a2.x<<std::endl;

    Class1 a3;
    a3.func();
*/
    Class1 a;
    a.sfunc();
    a.func();
    system("pause");
    return 0;
}


