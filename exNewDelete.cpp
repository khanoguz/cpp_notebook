#include<iostream>

void showMatris()
{
    int row = 3;
    int col = 3;
    int cont = 0;

    int **ptr = new int *[row]; //c dilide int **ptr = (int **)malloc(sizeof(int)*row);

    for(int i = 0;i<row;i++)
    {
        ptr[i] = new int[col];
    }
    for(int i = 0;i<row;i++)
    {
        for(int k = 0;k<col;k++)
        {
            ptr[i][k] = ++cont;
        }
    }
    for(int i = 0;i<row;i++)
    {
        for(int k = 0;k<col;k++)
        {
            std::cout<<ptr[i][k]<<" ";
        }
        std::cout<<std::endl;
    }

    for(int i=0;i<row;i++)
    {
        delete[] ptr;
    }
    delete ptr;
}

main()
{
    showMatris();
    system("pause");
    return 0;
}