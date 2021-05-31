#include<iostream>

main()
{

    int numara;
    char cikis;

    do
    {
        std::cout<<"Ogrencinin numarasini girin: "<<std::endl;
        std::cin>>numara;

    switch (numara)
    {
    case 1:
        std::cout<<"Muhendislik"<<std::endl;
        break;
    case 2:
        std::cout<<"Tip"<<std::endl;
        break;
    case 3:
        std::cout<<"HUkuk"<<std::endl;
        break;
    case 4:
        std::cout<<"GSF"<<std::endl;
        break;
    default:
        std::cout<<"yanlis girdiniz!"<<std::endl;
        break;
    }

    std::cout<<"cikis icin Q'a basin!:  "<<std::endl;
    std::cin>>cikis;

    } while (cikis != 'q');
    
    system("pause");
    return 0;

}