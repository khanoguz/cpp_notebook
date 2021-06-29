#include<iostream>
#include<ctime>

/*
c++ date ve time icin özel bir class yoktur fakat c'den alabiliyoruz.
*/

main()
{
    time_t now = time(0); //suan zaman neyse onu verir.
    char *dt = ctime(&now);
    std::cout<<dt<<std::endl;

    tm *gm_time = gmtime(&now); // universal datalari verir.
    std::cout<<"time is: "<<3 + gm_time->tm_hour<<":"<<gm_time->tm_min<<":"<<gm_time->tm_sec<<std::endl;


    system("pause");
    return 0;
}