#include<iostream>
#include"array.hpp"

#define SIZE 5


main()
{
    int array[SIZE];
    int array2[SIZE];
    int array3[SIZE];
    arrayBaslat(array2,SIZE);
    arrayBaslat(array,SIZE);
    arrayGoster(array,SIZE);
    std::cout<<"Array'in elemanlari toplami: "<< arrayTopla(array,SIZE)<<std::endl;
    std::cout<<"Array'in elemanlari ortalamasi: "<<arrayOrtalama(array,SIZE)<<std::endl;


    //arrayleriTopla(array,array2,array3,SIZE);
    //rrayleriCikar(array,array2,array3,SIZE);
    arrayleriCarp(array,array2,array3,SIZE);

    for(int i=0;i<SIZE;i++)
    {
        std::cout<<"Iki array'in toplami["<<i<<"]: "<<array3[i]<<std::endl;
    }




    system("pause");
    return 0;

}