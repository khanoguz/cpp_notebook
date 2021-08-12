#include<iostream>

/*
constructer ve destructor bir sinifin nesnesidir ve sinifin adresi ile cagirilir
constructer hafizada yaratmak istedigimiz herseyi baslatir. kurucu oge olarak gecer.
sinifa ait bir eleman tanimladigimizda o elemanın degerini ve adresini verip fonksiyon olarak gösterir.
destructer ise kullanilan nesneyi serbest birakir.
new ve delete keywordleri gibidir. birer fonksiyondurlar.

destructer obje silindiginde, main blogu sona erdiginde veya ait oldugu block sona erdiginde devreye gider.

1)return type yoktur
2)overload olmaz
3)parametrik bir yapi yoktur.
4)private'de olabilir fakat her yerde cagirilmaz
5)kendi ismi ile cagirabiliir.
*/

class myClass
{
    private:
    int x;
    public:
    myClass(); //constructer
    ~myClass(); //destructer
    //bir sinifin constructer'i private icinde olurs class disinde bir yerde sinifa eleman tanimlayamayiz!
};

myClass::myClass() //constructer tanımlarsak icerigini yazmak zorundayiz
{
    std::cout<<"Hello world from constructer!"<<std::endl;
    std::cout<<"this: "<<this<<std::endl;
}
myClass::~myClass()
{
    std::cout<<"Bye Bye from destructer!"<<std::endl;
}


main()
{
    /*
    myClass q; //constructer otomatik olarak cagirilmak zorunda kaliyor
    myClass x; //bir tane daha tanim yaparsak tekrar constructer cagirilir. thislerini cagirdigimizda adres farkliliklarini gorebilriiz.
    *//*
    myClass *ptr;
    int x;

    std::cout<<"how many class do u need?: ";
    std::cin>>x;

    ptr = new myClass[x]; //x defa constructer cagirir

*///dinamik olarak nesne tanimlandiginda ise;
myClass *ptr = new myClass;//tek basina bu sekilde yazildiginda dinamik olarak sadece const. cagirilir.
delete ptr; //seklinde dinamik olarak destr. de cagirilmak zorundadir.

    system("pause");
    return 0;
}
