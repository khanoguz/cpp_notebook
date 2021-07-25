#include<iostream>
/*
new operatorü hafizada dinamik olarak yer ayirir
delete ise o hafizayi geri verir

c dilinde ki malloc,calloc,realloc... c++ karsiligi new
free nin c++ karsiligi delete dir.
*/

main()
{
    int *ptr = NULL;
    ptr = new int;
    float *ptr2 = new float(31.31);
    int *ptr3 = new int[30];
    if(!(!ptr3))
    {
        for(int i = 10; i<15 ;i++)
        {
            ptr3[i] = i+5;
        }
         for(int i = 0; i<29 ;i++)
        {
            std::cout<<"ptr3["<<i<<"]: "<<*(ptr3+i)<<std::endl;
        }
    }
    *ptr = 31;
    std::cout<<*ptr<<std::endl;
    std::cout<<*ptr2<<std::endl;
    delete ptr;
    delete ptr2;
    delete ptr3;
    
    system("pause");
    return 0;    
}