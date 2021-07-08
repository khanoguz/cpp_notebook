#include<iostream>
#include<cstdlib>
#include<ctime>


void *randomNumber(int n,int bot,int top)
{
    int *pd =(int *)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++)
    {
        pd[i] = rand()%(top-bot+1)+ bot; //random sayi üretmek icin klasik fun.
    }

    return pd;
}

void display(int *pd,int SIZE)
{
    for(int i=0;i<SIZE;i++)
    {
        std::cout<<"pd["<<i<<"]: "<<*(pd+i)<<std::endl; 
    }
}


main()
{
    int *ptr;
    int size;

    srand(time(NULL)); //random sayilar icin gerekli
    std::cout<<"how many do you produce arrays that have random values?: ";
    std::cin>>size;
    ptr = (int *)randomNumber(size,1,10); //void * türünde oldugu icin int *'a cast ettik

    display(ptr,size);

    free(ptr);
    std::cout<<"------------------------"<<std::endl;
    display(ptr,size);
    
    system("pause");
    return 0;

}