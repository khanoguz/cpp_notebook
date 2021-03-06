#include<iostream>

/*
sinif icerisinde bir fonksiyonun basina friend yazdigimizda o fonksiyon bütün program tarafından paylasilir.

1) global fonksiyon "friend" fonksiyon olarak kullanilabilir
2) class A'da ki bir fonksiyonu class B'ye "friend" olarak tanımlamak
3) baska bir sinifin baska bir sinifa "friend" lik vermesi
*/

class myclass
{
    private:
        int x;
    public:
        friend int func(int);
};

int func(int a)
{
    myclass m;
    m.x = a;
    std::cout<<"m: "<<m.x<<std::endl;
    return a;
}

int main()
{
    myclass a1;
    func(52);

    system("pause");
    return 0;
}