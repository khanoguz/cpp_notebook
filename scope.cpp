#include<iostream>

/*
*/

main()
{ // function scope starts
    //external scope

    {//internal scope
        int a = 4;
        std::cout<<a<<std::endl;
    }

    int a = 6;
    std::cout<<a<<std::endl;

    system("pause");
    return 0;

} // fuction scope ends