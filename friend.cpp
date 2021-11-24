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

class Box
{
    private:
        double wid;
    public:
        void setW(double a)
        {
            wid = a;
        }
        friend void print(Box);
};
int func(int a)
{
    myclass m;
    m.x = a; //normalde private objeye class disinda erisemeyiz.friend fonksiyonu sayesinde erisebiliyoruz
    std::cout<<"m: "<<m.x<<std::endl; 
    return a;
}

void print(Box b1)
{
    std::cout<<"width of box is : "<<b1.wid<<std::endl;
}

int main()
{
    myclass a1;
    func(52);

    Box b1;
    b1.setW(31);
    print(b1);
    
    system("pause");
    return 0;
}