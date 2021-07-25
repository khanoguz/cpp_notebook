#include<iostream>

class data
{
    private:
    int x,y,z;

    public:
    int a;
    void func();

};
int y = 10;

void data::func()
{
    int x = 75;
    data::x = 31;
    std::cout<<x<<std::endl; //fonksiona ait olan x
    std::cout<<data::x<<std::endl;  // class'a ait olan x
    //eger ki fonksiyon icinde x tanimli olmasa ve cout<<x; olarak cagirsak baska x olmadigi icin mecburen sinifa ait olan x cagirilir
    data::a = 52; // class icindeki degere çözünürlük operatorü (::) ile atamada yapabiliriz
    std::cout<<a<<std::endl;
    //////////////////////////////////////////////////
    int y = 42;
    ::y = 31;//eger ki global scope'da tanimlanmis bir deger varsa ::y seklinde ona herhangi yerde atama yapilabilir.
    data::y++;

    std::cout<<"y of func: "<<y<<std::endl;
    std::cout<<"y of class: "<<data::y<<std::endl;
    std::cout<<"y of global: "<<::y<<std::endl;
}

void deneme() //ornegin deneme adinda bir func olsun
{
    std::cout<<"deneme"<<std::endl;
}
main()
{

    data ex1;
    ex1.func();

    int deneme = 4;
    //deneme(); global scope'daki func'u bu sekilde cagirirsak syntax hatasi olacaktir. cunku ayni isimde degisken var. fakat:
    ::deneme(); //bu sekilde cagirirsak :: operatoru sayesinde direk global scope'da arama yapacak ve deneme func'u cagiracaktir.
    system("pause");
    return 0;
}