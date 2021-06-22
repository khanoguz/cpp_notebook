#include<iostream>

/*
pointer ve fonksiyonların ortak kullanmı ilgili bir örnek
*/
const int SIZE = 5;

int degistir(int *a,int deger = 0)
{
    *a = deger;

    return *a;
}

int arrayBaslat(int *array,int x)
{
    for(int i = 0; i < x; i++)
    {
        *(array + i) = 5*i+5;   
    }
}
int arrayGoster(int *array,int x)
{
    int *lastPtr = array + x;
    int *firstPtr = array;
    int i = 0;

    while(firstPtr < lastPtr)
    {
        std::cout<<"array["<<i<<"]: "<<array[i]<<std::endl;
        i++;
        firstPtr++;
    }

}

main()
{
    /*
    int b = 3;
    int *bPtr = &b;
    std::cout<<"b'nin ilk degeri: "<<b<<std::endl;
    degistir(bPtr);

    std::cout<<"b'nin ikinci degeri: "<<b<<std::endl;
    */
   ////////////////////////////////////////////////////
   int array[SIZE];
   arrayBaslat(array,SIZE);
   arrayGoster(array,SIZE);

    system("pause");
    return 0;
}