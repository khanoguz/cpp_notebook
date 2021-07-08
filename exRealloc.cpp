#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>



main()
{
    char check = 'y';
    int *ptr;
    int k = 1;
    int ch;

    ptr = (int *)malloc(sizeof(int)*k);
    if(ptr == NULL)
    {
        std::cout<<"Yer ayrilmadi!";
        exit(EXIT_FAILURE);
    }

    while(check != 'n')
    {
        std::cout<<"do you wanna add new element to array ?(Y): ";
        std::cin>>check;

        if(check == 'n')
            break;
        k++;
        ptr = (int *)realloc(ptr,sizeof(int)*k);
        for(int i = 0;i<k;i++)
        {
            ptr[i] = i+1;
            std::cout<<"ptr["<<i<<"]: "<<ptr[i]<<std::endl;
        }
        std::cout<<"\nAdded!"<<std::endl;
    }
    for(int i = 0;i<k;i++)
    {
        std::cout<<"ptr["<<i<<"]: "<<ptr[i]<<std::endl;
    }

    free(ptr);

    system("pause");
    return 0;

}