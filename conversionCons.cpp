#include<iostream>

class Myclass
{
    int myVar;

    public:
    Myclass(int x = 0) //: myVar(x)
    {
        myVar = x;
    }
    void display() const
    {
        std::cout<<"Value of: "<<myVar<<std::endl;
    }
    /*
    Myclass &operator=(const Myclass &r)
    {
        std::cout<<"operator= "<<std::endl;
        return *this;
    }
    bu fonksiyonu cikardigimiz takdirde x = 4 olacak ve constructor conversion olacakti.
    */
    
};


main()
{
    Myclass m1(10);
    m1.display();

    m1 = 4;
    m1.display();
    return 0;
    
}
