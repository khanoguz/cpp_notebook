#include<iostream>


class sinif {

    public:
    void func();

    private:
    int x;
};
void func()
{
    std::cout<<"func of global"<<std::endl;
}

void sinif::func() 
{
    std::cout<<"func of class"<<std::endl;
    //func(); //bu sekilde yazdigimizda bu fonksiyon recursive(kendini cagiran) bir fonk olur.
    ::func(); //bu sekilde yazarken sadece global scope'da ariyor.

    //this->x = 5; bu sekilde atama yapilabildigi gibi
    sinif::x = 5; //seklinde de atama yapilabilir.
    std::cout<<"x: "<<x<<std::endl;
}



main()
{
    sinif q;
    q.func();

   

    system("pause");
    return 0;
}