#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>

#define SIZE 1000

char *strdup(const char *p)
{
    char *pd = (char *)malloc(strlen(p) + 1);//sonuna null karakter koydugu icin +1 ekliyoruz
    if(pd == NULL)
    {
        std::cout<<"Yer ayrilmadi!"<<std::endl;
        exit(EXIT_FAILURE);
    }
    return strcpy(pd,p);
}
char *strrev(char *ptr)
{
    static char newArray[SIZE];
    int last = strlen(ptr) - 1;

    for(int i = 0;i<= last;i++)
    {
        newArray[i] = ptr[last-i];
    }  

    return newArray;
}

char *strcon(const char *p1, const char *p2)
{
    char *pd = (char *)malloc(sizeof(char)*(strlen(p1)+strlen(p2)));
    if(pd == NULL)
    {
        std::cout<<"Yer ayrilmadi!"<<std::endl;
        exit(EXIT_FAILURE);
    }
    strcpy(pd,p1);
    strcat(pd,p2);

    return pd;
}

main()
{
    char arr[SIZE];

    char *ptr;
    char *ptr2;
    std::cout<<"Write something here: ";
    gets(arr);
    puts(arr);//bu iki kodla arr icindeki degerleri okuyabiliriz.
    ptr = strdup(arr);
    ptr = strrev(ptr);
    puts(ptr);

    //std::cout<<"\n"<<strrev(ptr)<<std::endl;
    ptr2 = strcon(arr,strrev(arr));
    puts(ptr2);

    free(ptr);
    free(ptr2);
    system("pause");
    return 0;
}