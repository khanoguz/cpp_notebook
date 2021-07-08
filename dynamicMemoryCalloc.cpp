#include<iostream>
#include<cstdlib>
#include<cstdio>
//calloc'ta malloc gibidir sadece kaç byte bilgisi de fonksiyona verilir..

main()
{
    int *ptr;
    int k;

    std::cout<<"how many elements do you need?: ";
    std::cin>>k;

    ptr = (int *)calloc(k,sizeof(int));

    if(ptr == NULL)
    {
        std::cout<<"yer ayrilamadi!";
        exit(EXIT_FAILURE);
    }
    for(int i = 0;i < k;i++)
    {
        ptr[i] = i*2;
        std::cout<<"ptr["<<i<<"]: "<<ptr[i]<<std::endl;
    }

    
    system("pause");
    return 0;
}