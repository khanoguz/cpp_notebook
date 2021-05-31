/*
cpp dosyasinda ise source code'u yazariz
yani fonksiyon tanimlamalarini
*/
#include<iostream>
#include"array.hpp"

void arrayBaslat(int *array, int sze)
{
    for(int i=0;i<sze;i++)
    {
        array[i] = i;
    }
}
void arrayGoster(int *array, int sze)
{
    for(int i = 0;i<sze;i++)
    {
        std::cout<<"array["<<i+1<<"]:"<<array[i]<<std::endl;
    }
}
double arrayTopla(int  *array, int sze)
{
    double toplam = 0;
    for(int i=0;i<sze;i++)
    {
        toplam = toplam  + array[i];
    }

    return toplam;
}
double arrayOrtalama(int  *array, int sze)
{
    double ortalama = 0;

    ortalama = arrayTopla(array,sze) / sze;

    return ortalama;
}

int *arrayleriTopla(int *array1,int *array2,int *array3,int sze)
{
    for(int i=0;i<sze;i++)
    {
        array3[i] = array1[i] + array2[i];
    }
    return array3;
}
int *arrayleriCikar(int *array1,int *array2,int *array3,int sze)
{
    for(int i=0;i<sze;i++)
    {
        array3[i] = array1[i] - array2[i];
    }
    return array3;
}
int *arrayleriCarp(int *array1,int *array2,int *array3, int sze)
{
    for(int i=0;i<sze;i++)
    {
        array3[i] = array1[i] * array2[i];
    }
    return array3;
}

