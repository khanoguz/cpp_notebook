#include<iostream>
/*
*/

main()
{
    const int SIZE = 3;

    int array[SIZE] = {1,2,3};
    /*
    int *arrayPtr;
    arrayPtr = array;
   
    for(int i = 0;i<SIZE;i++)
    {
        std::cout<<"address of array["<<i<<"]: "<<arrayPtr<<"   Value of array: "<<*arrayPtr<<std::endl;
        arrayPtr++;
    }
*/  
    int i = 0;
    int *lastPtr = &array[SIZE-1];
    for(int *aPtr = array;aPtr <= lastPtr ; aPtr++)
    {
        std::cout<<"address of array["<<i<<"]: "<<aPtr<<" value of address: "<<*aPtr<<std::endl;
        i++;
    }

    system("pause");
    return 0;

}