#include<iostream>
using namespace std;

main()
{
    int a[9];

    for(int i = 0;i<10; i++)
    {
        a[i] = i;
        std::cout<<"a["<<i<<"]: "<<a[i]<<std::endl;

    }

    int *aPtr;
    aPtr = a;
    

    system("pause");
    return 0;

}