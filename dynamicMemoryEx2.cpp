#include<iostream>
#include<cstdlib>
#include<cstring>

char *names()
{
    char name[100];
    char *ptr;

    std::cin>>name;

    
    ptr = (char *)malloc(sizeof(char) * (strlen(name)) + 1);
    strcpy(ptr,name);
}
main()
{   


    char *p[5]; //5 karakterlik dizileri tutan bir pointer
    

    std::cout<<"5 tane isim girin: ";

    for(int i = 0; i < 5;i++)
    {
        std::cout<<i+1<<". ismi girin:"<<std::endl;
        p[i] = names();
    }

    std::cout<<"Names: "<<std::endl;

    for(int i = 0;i<5;i++)
        puts(p[i]);

     for(int i = 0;i<5;i++)
        free(p[i]);


    system("pause");
    return 0;
}