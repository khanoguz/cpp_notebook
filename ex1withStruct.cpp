#include<iostream>
#include<cstring>

static int number = 0;
#define sinif_mevcudu 5

typedef struct student
{
    char name[30];
    char surname[30];
    double point;
}ogr;

enum Choices{
    continu = 0,
    addStudent = 1,
    display = 2,
    quit = 3
};
void studentInfo(student *x)
{
    char name[] = "default";
    char surname[] = "default";
    double point;

    std::cout<<"ogrencinin adini giriniz: ";
    std::cin>>name;
    strcpy((*(x+number)).name,name);
    std::cout<<"Ogrencinin soyadini giriniz: ";
    std::cin>>surname;
    strcpy((*(x+number)).surname,surname);
    std::cout<<"ogrencinin puanini giriniz: ";
    std::cin>>(*(x+number)).point;
    std::cout<<"ogrenci kaydedildi!"<<std::endl;
    number++;
}
 
void showInfos(student *m)
{
    for(int i = 0;i<number;i++)
    {
        std::cout<<"Ogrencinin adi: "<<(*(m+i)).name<<std::endl;
        std::cout<<"Ogrencinin soyadi: "<<(*(m+i)).surname<<std::endl;
        std::cout<<"ogrencinin puani: "<<(*(m+i)).point<<std::endl;
    }
}

main()
{
    student ogrenci1[sinif_mevcudu];
    student *ogrenciPtr1 = ogrenci1;

    int x;
    while(x != 3)
    {
        std::cout<<"Yapmak istediginiz islemi secin: "<<std::endl;
        std::cout<<"[1]Ogrenci ekle"<<std::endl<<"[2]Ogrencileri Goster"<<std::endl<<"[3]Cikis"<<std::endl;
        std::cin>>x;
        
        switch (x)
        {
        case addStudent:
            studentInfo(ogrenciPtr1);
            break;
        case display:
            showInfos(ogrenciPtr1);
            break;
        case quit:
            std::cout<<"programdan cikiliyor..."<<std::endl;
            x = 3;
            break;
        default:
            break;
        }
    }
    

    system("pause");
    return 0;
}