#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
/*

auto
register
extern
static

bunlar objenin nerede tutulacagini söyler

const
volatile
typedef

bunlar objeye tamamiyle yeni özellikler kazandirir.

1)auto => blok kapanana kadar degerler gecerli olur. blok kapandiginda degerler kaybolur
2)register => global degiskenler degildir.
3)yerel degisken icin static keyword kullanilirsa o degisken global olur

static
void func()
{
    static int firstCallFlag = 0; //burda static ile tanimlamasaydik, firstflagcall sürekli yeniden 0'a esit sekilde cagirilacakti.!

    if(firstCallFlag == 0)
    {
        std::cout<<"firtCallFlag is calling at the first time"<<std::endl;
        firstCallFlag = 1;
    }

    std::cout<<"func is called!"<<std::endl;

}

main()
{
    for(int i = 0 ;i<4;i++)
        func();

    system("pause");
    return 0;

}
*/

main()
{
    const int a = 31;
    /*
    normalde,
    int *ptr = &a; dedigimizde c++'da syntax hatasi aliriz. fakat c'de bir const ifadeyi pointer vasitasiyla degistirebiliriz
    *ptr = 1;

    c dilinde const int *a = 31 ve int const *a = 31 ayni seylerdir ve adresteki degerin degismeyecegini söyler
    fakat const int * const a = 31 dedigimizde hem adresin hem de degerin degismeyecegini söyler.
    yani:

    int x = 20;
    int y = 30;

    int *const ptr = &x; dedigimizde *ptr (=x) 'in degerini degistirebilirken ptr = &y gibi adres degisikligi yapamayiz..
    (sadece c dilinde,c++'da böyle bir sey yok)

    const int *const ptr = &x dedigimizde ne adresini ne de degerini degistirebiliriz.Ayni durum dizilerde de gecerlidir
    const int const arr[2] = {&x,&y}; gibi..
    
    bu uzun ifadeyi typedef ile kısaltabiliriz.
    mesela

    typedef const int *const CPTR dedigimizde asagida 
    cptr arr[2]; diye maskeleme yapabiliriz.
    */
    
    system("pause");
    return 0;

}