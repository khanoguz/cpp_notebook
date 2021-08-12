#include<iostream>
#include<cstring>

class example
{

    private:
    int length;
    char *ptr;

    public:
    example(const char *p);
    example(const example &a);
    ~example();
    void display() const;
    int getLength() const;

    example &operator=(const example &a);
};

example::example(const char *p)
{
    length = strlen(p);
    ptr = new char[length+1];
    strcpy(ptr, p);

    std::cout<<"constructer is called!"<<std::endl;
}

example::~example()
{
    delete [] ptr;
    std::cout<<"destructer is called!"<<std::endl;

}

example::example(const example &a)
{
    length = a.length;
    ptr = new char(length+1);
    strcpy(ptr,a.ptr);
    std::cout<<"copy constructer is called!"<<std::endl;

}

void example::display() const
{
    std::cout<<ptr<<std::endl;
}

int example::getLength() const
{
    return length;
}   


int main()
{
    example m1("Oguz Kagan"); //default constructer
    example m2(m1); //copy constructer
    m1.display();
    m2.display();
    m1.~example();
    m2.~example();

    system ("pause");
    return 0;
}