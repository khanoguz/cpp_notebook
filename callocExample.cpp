#include<iostream>
#include<cstdlib>
#include<cstdio>

main()
{
    int **ptr; //matris tutmak icin adres tutan adres seklinde tanimladik
    int satir,sutun;

    std::cout<<"Please enter value of the row: ";
    std::cin>>satir;
    std::cout<<"Please enter value of the col: ";
    std::cin>>sutun;


    ptr = (int **)malloc(sizeof(int *)*satir);
    if(!ptr)
    {
        std::cout<<"yer ayrilamadi!"<<std::endl;
        exit(EXIT_FAILURE);
    }

    for(int i = 0;i < satir;i++)
    {
        ptr[i] =(int *)malloc(sizeof(int) * sutun);
    }

    for(int i=0;i<satir;i++)
    {
        for(int k = 0;k<sutun;k++)
        {
            ptr[i][k] = i;
            std::cout<<ptr[i][k]<<" ";
        }
        std::cout<<std::endl;
    }

    for(int i=0;i<satir;i++)
    {
        free(ptr[i]);
    }

    free(ptr);

    system("pause");
    return 0;
}