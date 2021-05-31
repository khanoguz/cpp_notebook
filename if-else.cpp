#include<iostream>

/*
    şart veya duruma göre karar aldıgımız durumlardır.

    if
    if...else
    switch

*/

main()
{
    int a = 13;

    if(a >= 10)
    {
        std::cout<<"a is greater than 10"<<std::endl;
    }
   else if (a < 10)
    {
        std::cout<<"a is less than 10"<<std::endl;

    }
    else{
        std::cout<<"a is equal to 10"<<std::endl;
    }

    system("pause");
    return 0;
}