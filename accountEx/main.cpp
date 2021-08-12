#include<iostream>
#include"accountEx.hpp"


main()
{
    Account a1(1900);
    a1.deposit(100);

    Account a2(3000);   
    a2.draw(500);
    a1.transfer(a2,250);

    a1.display();
    a2.display();

    system("pause");
    return 0;
}