#include<iostream>
#include<cstring>

#define SIZE 50

char *swap(char *ptr)
{
    int last = strlen(ptr) - 1;
    static char newArray[SIZE];

    for(int i = 0;i<=last;i++)
    {
        newArray[i] = ptr[last - i];
    }

    return newArray;
}

main()
{
    char array[SIZE];

    std::cout<<"kelimeyi girin:";
    std::cin>>array;

    std::cout<<"\n"<<swap(array)<<std::endl;

    system("pause");
    return 0;
}