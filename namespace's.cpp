#include<iostream>
using namespace std;

/*
namespace example
{
bu ad alanlarının icine fonksiyon, sinif, yapi gibi tanimlar yapabiliriz.
namespace bu özellikleri ortak bir alanda tutmaya yarar

}
*/
namespace example
{
    char ex[] = "hello world from exapmle";
    void func()
    {
        cout<<"first example"<<endl;
    }
}
namespace example2
{
    char ex[] = "hello world from example2!";
    void func()
    {
        cout<<"second example"<<endl;

    }
}

void func()
{
    cout<<"function"<<endl;
}
//using namespace example;
//using namespace example2; // eger ki bunlari tanimlarsak int main() icerisinde cout<<ex; dedigimizde hata cikacaktir. 
                          // cunku her iki namespace'de de ex tanimlidir.
main()
{
    cout<<example::ex<<endl;
    cout<<example2::ex<<endl;
    //cout<<ex<<endl; hata verecektir.
    func();

    system("pause");    
    return 0;
}