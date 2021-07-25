#include<iostream>
/*
bu keyword nesnenin kendisine erişmek icin kullanılır ve bu keyword class'in icerisinde yaratılan degiskenin gizli parametre adresini verir
*/
class myclass
{
    public:
    void func();
    myclass *func2();
    myclass &func3();

    void foo()
    {
        std::cout<<"this is special func!"<<std::endl;
    }

    private:
    int m;

};

void myclass::func()
{
    std::cout<<"this: "<< this <<std::endl;
}

myclass *myclass::func2()
{
    return this;//addrese dondugu icin this yazabiliriz
}

myclass &myclass::func3()
{

    return *this;
}

main()
{
    myclass x;
    std::cout<<"address of x: "<< &x <<std::endl;
    std::cout<<"this: ";
    x.func(); // x'in this'i ile adresi ayni verir.
    x.func2()->foo(); //func2()'de adres dondugu icin (this) -> operatorle foo fonksiyonunu cagirabiliriz.
    x.func3().foo(); //func3()'te referans dondugu icin . operatoruyle foo fonksiyonunu cagirabiliriz.
    return 0;
}