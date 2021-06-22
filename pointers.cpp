#include<iostream>
/*
0000 0000 (1 byte)
0000 0000
0000 0000  ==> int a = 2;
0000 0010

yukarıda 32 bite (4 byte)'dan olusan bir yapi vardir.
her byte'in bir adresi vardir.
tanimladigimiz degikenlere ulasabilmemiz icin adreslerine ihtiyacimiz vardir.

pointer --> değişkenlerin adresini tutan türdür.

int *aPtr = &a;

*/
main()
{
    int x = 2;
    int *xPtr = &x; //x'in adresini tutan pointer
    
    double y = 2.4;
    double *yPtr;
    yPtr = &y;  //y'nin adresini tutan pointer

    std::cout<<"adress of x: "<<&x<<std::endl;
    std::cout<<"xPtr: "<<xPtr<<std::endl;
    std::cout<<"value of x taken from xPtr: "<<*xPtr<<std::endl;

    std::cout<<"address of y: "<<&y<<std::endl;
    std::cout<<"yPtr: "<<yPtr<<std::endl;
    std::cout<<"value of y taken from yPtr: "<<*yPtr<<std::endl;


    std::cout<<"size of int pointer: "<<sizeof(xPtr)<<std::endl;
    std::cout<<"size of double pointer: "<<sizeof(yPtr)<<std::endl;

    //bu adreslerinde adresi oldugu için onlarinda adresini görebilir ya da ayri bir pointera atayabiliriz.

    int **xPtr2 = &xPtr; 
    std::cout<<"address of xPtr: "<<&xPtr<<std::endl;
    std::cout<<"xPtr2: "<<xPtr2<<std::endl;

    //xPtr2'den x'in degerine ulasabiliriz
    std::cout<<"value of x from xPtr2: "<<**xPtr2<<std::endl;


    system("pause");
    return 0;
}