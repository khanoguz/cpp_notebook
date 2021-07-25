#include<iostream>
#include<cstring>


main()
{
    char *arr[3] = {"asdas","dasda","asdasd"};

    for(int i = 0;i<3;i++)
    {
        gets(arr[i]);
    }
    for(int i = 0;i<3;i++)
    {
    puts(arr[i]);
    }

    system("pause");
    return 0;
}