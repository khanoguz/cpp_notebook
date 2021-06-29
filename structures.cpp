#include<iostream>
#include<cstring>
/*
struct icinde farkli tipte türler tutabiliriz. en önemli özelligi budur.
tpydef yazarak cagirirken direk student ile cagirabiliriz.(struct yazmamiza gerek kalmaz..)
*/
typedef struct isimSoyisim
{
    char name[30];
    char surname[30];
}isSoy;

typedef struct student
{
    int points;
    double avrg;
    isSoy info; //bu sekilde struct icinde struct tanımlayabiliriz.!

}stdnt;


void studentInit(stdnt *x)
{
    /*
    struct icinde bir adrese (pointer) erismek istiyorsak . yerine -> ile ulasiriz
    */
   strcpy(x->info.name,"Oguz Kagan");
   strcpy(x->info.surname,"Bilici");
    x->points = 100;
    x->avrg = 80;
}
void yazdir(stdnt *x)
{
    std::cout<<"Ogrencinin adi soyadi: "<<x->info.name<<" "<<x->info.surname<<std::endl;
    std::cout<<"Ogrencinin puani: "<<x->points<<std::endl;
    std::cout<<"Ogrencinin ortalamasi: "<<x->avrg<<std::endl;
}


main()
{
    struct student ogrenci1;
    stdnt ogrenci2;

    stdnt *ptrOgrenci2 = &ogrenci2;
    
    strcpy(ogrenci1.info.name,"Oguz Kagan");
    ogrenci1.points = 100;
    ogrenci1.avrg = 89;

    studentInit(ptrOgrenci2);

    std::cout<<"Ogrencinin adi: "<<ogrenci1.info.name<<std::endl;
    std::cout<<"Ogrencinin puani: "<<ogrenci1.points<<std::endl;
    std::cout<<"Ogrencinin ortalamasi: "<<ogrenci1.avrg<<std::endl;
    std::cout<<"---------------------------------------"<<std::endl;
    yazdir(ptrOgrenci2);

    system("pause");
    return 0;
}