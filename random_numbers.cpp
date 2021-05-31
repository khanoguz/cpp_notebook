#include<iostream>
#include<cstdlib>
#include<ctime>

int zarAt()
{
    int max = 6;
    int min = 1;
    int sayi = rand() % (max-min+1)+min;

    return sayi;
}

main()
{
    
    srand((unsigned)time(NULL)); //srand fonksiyonu normal sartlarda unsigned degerler alır. fakat int verirsek de calisir.

    for(int i = 0;i<5;i++)
    {
    
        std::cout<<zarAt()<<"-"<<zarAt()<<std::endl;

    }


    system("pause");

    return 0;
}