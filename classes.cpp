#include<iostream>
/*
bir structure'da farkli türde veriler tutabiliriz fakat bir fonksiyon tanimlayamayiz.
bu yüzden bir structure'ı fonksiyonel hale getiremiyoruz.

class'lar ise structure'dan farkli olarak icinde fonksiyon tanimlayabildigimiz daha işlevsel structure'lardir.

class'lar objelerden olusur.

yapilardan farkli olarak class'lar 3 farkli sekilde ayrilabilir.

public,private,protected

1)public -> herkesin erisebildigi veridir
2)private -> sadece sinifin ögeleri erisebilir.

class ex
{
    int x;
    public:
    int y;
    private:
    int z;
    protected:
    int k;
};
*/
class Data
{
    public:
    int a,b,c;  //public olarak belirtmezsek default private olarak tanimlanir.
    void func()
    {
        std::cout<<"public function in Data class"<<std::endl;
        func2(); //private yapiyi public icinde cagirip islem yapabiliriz
        l = 31; //private yapiyi public icinde cagirip islem yapabiliriz
        func3(l); //private yapiyi public icinde cagirip islem yapabiliriz
    }
    void newfunc()//bunu private icinde overload edebiliriz
    {
        std::cout<<"new func in public"<<std::endl;
    }
    private:
    int m; //main icinde kullanamayiz!
    int l;
    void func2()
    {
        std::cout<<"private function in Data Class"<<std::endl;
    }
    void newfunc(int x)
    {
        std::cout<<"x: "<<x<<std::endl;
    }
    void func3(int xx);
};

void Data::func3(int xx)
{
    std::cout<<"xx:"<<xx<<std::endl; //class disinda da tanimlama yapabiliriz
}

main()
{
    Data ex1;
    ex1.a = 31;
    ex1.b = 2;
    ex1.func();
    ex1.newfunc(); //bu public'teki newfunc()'tir. 
    //eger ki private icindeki newfunc'ı cagirmak istersek newfunc(int x) olani yazmamiz gerekir ki onu da cagiramayiz

    Data *dPtr;
    dPtr = &ex1;
    dPtr->a = 32; //ptr ile de atama yapabiliriz
    
    
    system("pause");
    return 0;
}