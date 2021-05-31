#include<iostream>
#include<cstring>
/*
string -> karakterlerden olusan diziye  denir
char array[] = "hello"  -> string

bazi temel fonksiyonlar
strcpy -> stringleri kopyalar
strcat -> iki stringi birlestirir
strlen -> string uzunlugunu verir
strcmp -> 2 stringi karsilastirip boolean bir deger verir.
strchr -> string icersinde karakter arar

*/


main()
{
    char ilkMesaj[6] = {'H','E','L','L','O','\0'}; //  \0 -> burda dizinin bittiginin gösterir. bunu koymazsak dizinin bittigini anlasilmaz.

    std::cout<<"ilk mesaj: "<<ilkMesaj<<std::endl;

    char string[] = "Oguz";
    char string2[] = "Kagan";

    char string3[10];
    strcpy(string3,string);
    
    std::cout<<"string3: "<<string<<std::endl;
    system("pause");
    return 0;

}