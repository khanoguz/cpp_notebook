#include<iostream>
#include<cstring>
using namespace std;

#define KISALTMA x(strlen(p1)), ptr(new char[x + 1]), number(numberAssignment())
#define NUMARA_YAZ std::cout<<"number: "<<number<<endl;

class fName
{
    char *ptr;
    int x;
    double number;
public:
    fName()
    {
        std::cout<<"Defautl const!"<<std::endl;
    }
    ~fName()
    {
        std::cout<<"Defautl destructor!"<<std::endl;
    }
    fName(const char *p);
    //fName(const fName &r); copy constructer olmasi icin.
    double numberAssignment()
    {
        return 31;
    } 
};

fName::fName(const char *p1) : KISALTMA //x(strlen(p1)), ptr(new char[x + 1]), number(numberAssignment())
{
    strcpy(ptr, p1); // bunu yazarak ptr'ye deger atayabiliriz. aksi takdirde ptr bos kalir.
    cout<<"ptr: "<<ptr<<endl;
    std::cout<<"number: "<<number<<endl;
    NUMARA_YAZ //bu sekilde makrolar da yazabiliriz.
}


int main()
{
    fName a1("Oguz");
    system("pause");
    return 0;
}
