#include<iostream>

/*
array: hafiza bölgesinde ayni yerde sirali olarak ayni türde tanimlayabildigimiz veri alanlari.
adres kullanmadan ulasabiliriz.

type arrayName[arraySize];

arrayName -> bir adrestir.

int a[10];  // a -> baslangic adresi

multi-dimensional array

type arrayName[arraySize][arraySize]

int a[3][2];

a -> pointer to pointer
[3] -> pointer
[2] -> integer

*/
void diziBaslat(int *a,int sizee)
{
    //bir diziyi fonksiyon olarak tanımlarken dizinin ilk parametresi olan 'a' adres oldugu icin fonksiyon inputunda pointer istedik.
    for(int i = 0;i<sizee;i++)
    {
        a[i] = i+5;
    }   
}

void diziGoster(int *a,int sizee)
{
    for(int i=0;i<sizee;i++)
    {
        std::cout<<"dizi["<<i<<"]:"<<*(a+i)<<std::endl;
    }
}
double ortalamaDizi(int *a,int sizee)
{
    int toplam =0;
    for(int i = 0;i<sizee;i++)
    {
        toplam = *(a+i) + toplam;
    }
    return toplam/sizee;
}
main()
{
/*
    int a[5] = {1,2,3,4,5};
    //eger atama yapilmazsa random degerler gelir.
    for(int i =0;i<sizeof(a[6]);i++)
    {
        std::cout<<a[i]<<std::endl;
    }
*/

    int a[3][2] = {{1,2},{3,4},{5,6}};

    for(int i=0;i<=2;i++)
    {
        for(int k = 0;k<=1;k++)
        {
            std::cout<<"a["<<i+1<<"]"<<"["<<k+1<<"]: "<<a[i][k]<<std::endl;
        }
    }

    int b[3] = {1,2,3};
    //b bir adres oldugu icin;

    int *bPtr = b; //diyebiliriz. cunku bPtr'de bir adrestir. ve;
    for(int i = 0;i<=2;i++)
    {
        std::cout<<"value of bPtr["<<i<<"]:"<<bPtr[i]<<std::endl;
        //std::cout<<"bPtr["<<i<<"]:"<<*(bPtr+i)<<std::endl;  degerleri bu sekilde de gösterebiliriz.
        std::cout<<"adress of bPtr["<<i<<"]:"<<&bPtr[i]<<std::endl;
        //std::cout<<"adress of bPtr["<<i<<"]:"<<(bPtr+i)<<std::endl;  adresleri bu sekilde de gösterebiliriz
    }

    int k[3];
    diziBaslat(k,3);
    diziGoster(k,3);
    std::cout<<"Ortalama: "<<ortalamaDizi(k,3)<<std::endl;
    system("pause");

    return 0;
}