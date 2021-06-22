#include "myString.hpp"
#include<iostream>


main()
{
    char array[] = "Hello World";
    char array2[] = "Hello World ";
    char array3[] = "from Turkey!";

    char array4[2];
    char array5[3];


    char *arrayPtr = array;
    char *arrayPtr2 = array2;
    std::cout<<"length of array: "<<stringUzunluk(arrayPtr)<<std::endl;

    bool check = stringKarsilastir(arrayPtr,arrayPtr2);

    if(check == true)
        std::cout<<"all arrays are same!"<<std::endl;
    else
        std::cout<<"arrays are not same! "<<std::endl;

    std::cout<<stringEkle(array2,array3)<<std::endl;
    
    char *ptr = stringKopyala(array5,array4);
    std::cout<<ptr<<std::endl;

    system("pause");
    return 0;  
}