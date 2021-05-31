#include<iostream>

int topla(int a,int b){

    std::cout<<"Toplamak istediginiz ilk sayi: ";
    std::cin>>a;
    std::cout<<"Toplamak istediginiz ikinci sayi: ";
    std::cin>>b;
    int toplam = a+b;
    std::cout<<"\nSonuc: "<<toplam<<std::endl;

    return toplam;
}
double topla(double a, double b)
{
    std::cout<<"Toplamak istediginiz ilk sayi: ";
    std::cin>>a;
    std::cout<<"Toplamak istediginiz ikinci sayi: ";
    std::cin>>b;
    double toplam = a+b;
    std::cout<<"\nSonuc: "<<toplam<<std::endl;

    return toplam;
}

int cikar(int a,int b){

    std::cout<<"Cikarmak istediginiz ilk sayi: ";
    std::cin>>a;
    std::cout<<"Cikarmak istediginiz ikinci sayi: ";
    std::cin>>b;
    int sonuc = a-b;
    std::cout<<"Sonuc: "<<sonuc<<std::endl;

    return sonuc;
}

double cikar(double a, double b)
{
    std::cout<<"Cikarmak istediginiz ilk sayi: ";
    std::cin>>a;
    std::cout<<"Cikarmak istediginiz ikinci sayi: ";
    std::cin>>b;
    double sonuc = a-b;
    std::cout<<"Sonuc: "<<sonuc<<std::endl;

    return sonuc;
}

int carp(int a,int b)
{
    std::cout<<"Carpmak istediginiz ilk sayi: ";
    std::cin>>a;
    std::cout<<"Carpmak istediginiz ikinci sayi: ";
    std::cin>>b;
    int sonuc = a*b;
    std::cout<<"Sonuc: "<<sonuc<<std::endl;

    return sonuc;
}

double carp(double a, double b)
{
    std::cout<<"Carpmak istediginiz ilk sayi: ";
    std::cin>>a;
    std::cout<<"Carpmak istediginiz ikinci sayi: ";
    std::cin>>b;
    double sonuc = a*b;
    std::cout<<"Sonuc: "<<sonuc<<std::endl;

    return sonuc;
}

int bol(int a,int b)
{
    std::cout<<"Bolmek istediginiz ilk sayi: ";
    std::cin>>a;
    std::cout<<"Bolmek istediginiz ikinci sayi: ";
    std::cin>>b;
    int sonuc = a/b;
    std::cout<<"Sonuc: "<<sonuc<<std::endl;

    return sonuc;
}

double bol(double a,double b)
{
    
    std::cout<<"Bolmek istediginiz ilk sayi: ";
    std::cin>>a;
    std::cout<<"Bolmek istediginiz ikinci sayi: ";
    std::cin>>b;
    double sonuc = a/b;
    std::cout<<"Sonuc: "<<sonuc<<std::endl;

    return sonuc;
}

main()
{
    int secim;
    double sayi3, sayi4;

    while(secim != 0)
    {   
        std::cout<<"[1]Toplama\n[2]Cikarma\n[3]Carpma\n[4]Bolme\n[0]Cikis"<<std::endl;
        std::cout<<"Lutfen istediginiz islemin rakamini seciniz:";
        std::cin>>secim;

        system("CLS");

        switch (secim)
        {
        case 1:
            topla(sayi3,sayi4);
            system("pause");
            system("CLS");
        break;

        case 2:
            cikar(sayi3,sayi4);
            system("pause");
            system("CLS");

            break;
        case 3:
            carp(sayi3,sayi4);
            system("pause");
            system("CLS");
            break;
        case 4:
            bol(sayi3,sayi4);
            system("pause");
            system("CLS");
            break;
        default:
            break;
        }
        
    }

    system("pause");
    return 0;
}