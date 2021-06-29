#include<iostream>

/*
c dilinde yoktur. sadece c++ icin gecerlidir
pointerlarin yükseltilmis seviyesidir.

int x = 32;
int &r = x; dedigimizde x'e ref atamis oluruz. yani x'i kullandigimiz her yerde r'yi de kullanmis oluruz.!

r'nin üzerindeki her degisim x'de de gecerli olur.

bir nesneyi birden fazla kez ref alabiliriz.

*/

int func(int &a) //call by reference
{
    a = 80;
}

main()
{
    int x = 3;
    int &r = x;

    r++;
    std::cout<<"x: "<<x<<std::endl;

    func(x); //int deger vermemize ragmen ref ile tanimladigimiz icin x'in degeri degisti
    std::cout<<"new x: "<<x<<std::endl; 

    int a = 10;
    int *aPtr = &a;
    int *&aPtrRef = aPtr; //adresi tutan bir referans
    aPtrRef++;

    (*aPtr)++;

    std::cout<<"last value of a: "<<a<<std::endl;



    system("pause");
    return 0;
}