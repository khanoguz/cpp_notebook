#include<iostream>
/*
function(int a = 10) ornegin default arguman ornegidir. kullanici function icin bir input girmezse otomatik olarak 10 alinir.
*/

void func(int a = 10,int b = 20,int c = 30)
{
    std::cout<<"a: "<<a<<std::endl;
    std::cout<<"b: "<<b<<std::endl;
    std::cout<<"c: "<<c<<std::endl;
}

main()
{
    func(1,2,3); // hicbir input girmediğimiz halde default olarak girilen degerler ekrana geliyor.
    std::cout<<"----------------------------"<<std::endl;
    func(4,2); // -sadece a ve b degeleri girilip c default olarak alinir.

    system("pause");
    return 0;
}