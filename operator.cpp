#include<iostream>

/*
spesefik matematiksel islemler yapan fonksiyonlardir.

1)aritmetik  -> +,-,*,/,%,++,--
2)iliskili (==, <,>, =<, =>)
3)logic
4)ikili sistem  -> (&,|,~,^,<<,>>)
5)atama
6)misc -> sizeof,...

*/

int main()
{
    int a,b,sonuc;

    //atama islemi
    a = 5;
    b = 1;

    //aritmetik islem
    sonuc = a+b;
    sonuc = a-b;
    sonuc = a*b;
    sonuc = a/b;

    //ilişkisel işlem
    if(a>b)
    {
        std::cout<<"a b'den buyuktur.. "<<std::endl;
    }
    else
    {
        std::cout<<"b a'dan buyuktur.."<<std::endl;
    }

    //bitwise islemi
    unsigned char s = 9, q = 1;

    std::cout<<(s&q)<<std::endl;
    /*
    s = 0000 1001
    q = 0000 0001
    -------------
      = 0000 0001 = 1 * (2^0) = 1
    */
    std::cout<<(s|q)<<std::endl;
    /*
    s = 0000 1001
    q = 0000 0001
    -------------
      = 0000 1001 = 1 * (2^3) + 1* (2^0) = 9
    */
    std::cout<< (s<<1) <<std::endl;
    /*
    s = 0000 1001
    s<1 = 0001 0010 = 1 * 2^4 + 1 * 2^1 = 18

    */
    system("pause");
    return 0;
}