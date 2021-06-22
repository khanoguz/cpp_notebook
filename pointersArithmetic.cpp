#include<iostream>

/*
ornegin:

int a = 4;
double b = 4.21;

int *aPtr = &a;
double bPtr = &b; diye degiskenler olsun.

eger a'nin adresinden bir sonraki veya bir önceki adrese gitmek istiyorsak;

aPtr++ veya aPtr-- işlemini yapabiliriz. burada ++ , -- işleminde int kac byte ise o kadar adim gider.
adres olara aPtr = 1 ise aPtr++ yaptigimizda yeni adresimiz 5 olur.

*/

main()
{
    int x = 5;
    int *xPtr = &x;

    double y = 4.1;
    double *yPtr = &y;

    std::cout<<"address of x: "<<xPtr<<std::endl;
    xPtr++;
    std::cout<<"address of xPtr++: "<<xPtr<<std::endl;

    std::cout<<"address of y: "<<yPtr<<std::endl;
    yPtr--;
    std::cout<<"address of yPtr--: "<<yPtr<<std::endl;
    
    system("Pause");
    return 0;
}