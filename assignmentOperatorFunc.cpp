#include<iostream>
#include<cstring>

/*
hem destructer gibi kaynaklari serbest birakir, hemde copy constructer gibi dip kopyalama yapar.
biz bunu yazmasak bile derleyici bunlari yazar, fakat biz yazdigimizda özellestirebiliriz.

*/
class Name
{
    private:
    int length;
    char *ptr;
    
    public:
    Name(const char *p);
    Name(const Name &r);
    ~Name();
    void display() const;
    int getLen() const;

    Name &operator=(const Name &r); // assingmetOperator


};

Name::Name(const char *p)
{
    length = strlen(p);
    ptr = new char[length+1];
    strcpy(ptr,p);

    std::cout<<"constructer is called!"<<std::endl;
}
Name::Name(const Name &r)
{
    length = r.length;
    ptr = new char[length+1];
    strcpy(ptr,r.ptr);
    std::cout<<"copy constructer is called!"<<std::endl;
}
Name::~Name()
{
    delete[] ptr;
    std::cout<<"destructer is called!"<<std::endl;  
}
void Name::display() const
{
    std::cout<<"Name: "<<ptr<<std::endl;
}
int Name::getLen() const
{
    return length;
}

Name &Name::operator=(const Name &r)
{
    length = r.length;
    delete [] ptr;
    ptr = new char[length+1];
    strcpy(ptr,r.ptr);
    std::cout<<"operator is called!"<<std::endl;
    return *this;
}



main()
{
    Name f1("ouz");
    f1.display();
    Name f2 = "kagan"; //bu sekilde de atama yapabiliriz.
    f2.display();
    
    f2 = f1; //bu satirda operator cagirilir.
    //f2.operator=(f1); üst satırdaki islemin aynisini yapacaktir. üstteki maskelenmis halidir.
    f2.display();
    std::cout<< (f2 = f1).getLen()<<std::endl; // bu sekilde maskelenmis kullanimlarda mevcuttur.

    system("pause");
    return 0;
}