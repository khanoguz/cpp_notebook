#include<iostream>
/*
class objeleri const funksiyonlarında degistirilemez.
bunun icin mutable dedigimiz anahtar kelime kullanilir.

mutable int x;
*/
class ex1
{
    //int x; bunu direk olarak int ile tanımladıgımızda hata verecektir.
    //const int x; direk const olarak tanimladimizda atama ve baslatma islemi yapamadigimiz icin hata verecektir. constructer'da bile.
    //x nesnesini baslatmadigimiz icin'de main icinde herhangi bir nesne yarattıgımızda otomatik hata verecektir. cunku tanimladigimiz bir
    //nesneyi initialize etmedigimiz icin..
    mutable int x;
    //ornegin bir const nesne tanimlamak istiyorsak onu baslangicta tanımlamamiz gerekiyor
    //bunu farkli bir constructer seklinde yapabiliriz.
    const int y;
    int z;
public:
    ex1(): y(10),z(5) //y const deger olmasina ragmen otomatik olarak 10 atanmistir. ayni sekilde int z'yi de burada baslatabiliriz.
    {
        std::cout<<"default constructer"<<std::endl;
    }
    ~ex1()
    {
        std::cout<<"default destructor"<<std::endl;
    }
    void accessor() const; //birseyi const yapıyorsak sadece okuma yapabiliriz. herhangi bir atama veya degistirme yapamayiz
    void display() const;
};
void ex1::accessor() const{

    x = 0;
}
void ex1::display() const{
    std::cout<<"x: "<<x<<std::endl;
    std::cout<<"y: "<<y<<std::endl;
    std::cout<<"z: "<<z<<std::endl;
}

int main()
{
    ex1 a;
    //a.accessor();
    a.display();

    system("pause");
    return 0;
}