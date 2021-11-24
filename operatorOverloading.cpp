#include<iostream>
/*
operator overloading ya
1)member func. cagirilarak yapilir

2)ya da global func'lar cagirilarak yapilir

ornegin a+b gibi bir ifade yazdigimizda ==> a.func(b) yaziyoruz

bazı kurallar vardir
1)olmayan bir operatoru yaratıp overload edemeyiz

2)bir int degere veya bir double degere overloading yapilamaz

3)her operator overload yapilamaz
ornegin ::, sizeof, . gibi operatorlere overload yapilamaz

4)bazi operatorler uye fonk olarak cagirilabilir fakat global olarak cagirilamaz

5) operator oncelikleri asla degismez. (a*b + c = a.operator*(b).operator+(c)) gibi

6)operatorlerin geri donus degerlerini istedigimiz gibi secebiliriz
*/

class myClass{
    private:
    int x;
    void operator-(const myClass &r)
    {
        std::cout<<"operator- is calling..."<<std::endl;
    }
    friend void func();
    public:
    void operator+(const myClass &r) // m2->r  m1->this
    {
        std::cout<<"operator+ is calling..."<<std::endl;
    }

};

void func()
{
    myClass a1,a2;
    a1-a2;

}

main()
{
    myClass m1,m2;
    m1+m2; //m1.operator+(m2)
    func();

    system("pause");
    return 0;
}