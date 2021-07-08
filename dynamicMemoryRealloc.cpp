#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

/*
dinamik hafizayi artirmak veya azaltmak icin realloc kullaniriz
void *realloc(void *degisecekAdres, size_t yeniAdresBoyutu)

*/

main()
{

    int *ptr;
    int k,plus;

    std::cout<<"how many adress do u need?: ";
    std::cin>>k;

    ptr = (int *)malloc(sizeof(int) * k);

    for(int i=0;i<k;i++)
    {
        ptr[i] = i;
        std::cout<<"ptr["<<i<<"]: "<<ptr[i]<<std::endl; 

    }
    std::cout<<"\n--------------------------------------------"<<std::endl;

    std::cout<<"how many address do u want to add?: ";
    std::cin>>plus;

    ptr = (int *)realloc(ptr,sizeof(int) * (k+plus));

    if(!ptr)
    {
        std::cout<<"yer ayrilamadi!"<<std::endl;
        exit(EXIT_FAILURE);
    }

    for(int x = k;x<k+plus;x++)
    {
        int i=0;
        ptr[x] = x;
        std::cout<<"ptr["<<i<<"]: "<<ptr[i]<<std::endl;
        i++; 
    }

    free(ptr);
    system("pause");
    return 0;
}