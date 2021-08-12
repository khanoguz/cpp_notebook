#include<iostream>
/*
//
örnegin 2 tane tanimlanmis nesnemiz olsun

myClass a1;
myClass a2 = a1;  dedigimizde bunu copy constructer ile gerceklestirilir.
------------------------------------------------------------------------
ilk deger atama yöntemi

myClass y;
myClass x = y;

veya

myClass y(x);
------------------------------------------------------------------------
call by value yöntemi

void func(myClass x)
{

}

func(x);
-----------------------------------------------------------------------
myClass func()
{
    .
    ..
    ...
    return x;
}

yukaridaki islemlerde copy constructer kullanilir.
*/

class myClass
{
    private:
    int x;
    public:
    myClass()
    {
        std::cout<<"constructer is called!"<<std::endl;
    }
    myClass(const myClass &r)
    {
        std::cout<<"Copy Constructer!"<<std::endl;
    }

    ~myClass()
    {
        std::cout<<"destructer is called!"<<std::endl;
    }

    void func(myClass x);
};

void myClass::func(myClass x)
{
 
}

void func2(myClass &m) // bu sekilde ref olarak cagirdigimizda m1'in degerini degil kendisini fonksiyona veriyoruz. bu yüzden ayrica bir cons,dest cagirilmaz
{

}
myClass g; //bunu yarattigimiz an main bos olsa bile const,destr cagirilir

myClass func()
{
    return g; //bu sayede copy const tekrar cagirilir.
}
/*
myClass &func() bu sekilde func tanimlandigi taktirde ref oldugundan yine copy const cagirilmayacaktir.
{
    return g;
}
*/
main()
{
    myClass m1;
    myClass m2;
    //myClass m2(m1); //copyConstructer will be called
    //m1.func(m2);
    //func2(m1); 
    system("pause");
    return 0;

}