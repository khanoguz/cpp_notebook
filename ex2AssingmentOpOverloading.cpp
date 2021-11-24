#include<iostream>

class complexNumbers
{
private:
    int real,img;
public:/*
    complexNumbers()
    {
        std::cout<<"Default constructer"<<std::endl;
    }*/
    ~complexNumbers()
    {
        std::cout<<"Destructer"<<std::endl;
    }

    complexNumbers(double i = 0,double r = 0)
    {
        real = r;
        img = i;
        std::cout<<"overloading constructer"<<std::endl;
    }
    void display() const;

    complexNumbers operator+(const complexNumbers &r);
    complexNumbers &operator=(const complexNumbers &r);
    complexNumbers operator-(const complexNumbers &r);
    bool operator==(const complexNumbers &r);
    bool operator>(const complexNumbers &r);

};

main()
{
    complexNumbers n1(2,2);
    complexNumbers n2(1,1);
    n1.display();
    n2.display();
   complexNumbers n3;
   n3 =  n1 + n2; //n3.operator=(n1.operator+(n2))
   n3 = n3 - n1; 
   n3.display();

    complexNumbers n4(10,10);
    std::cout<<(n4 == n3)<<std::endl;
    std::cout<<(n4 > n2)<<std::endl;


    system("pause");
    return 0;
}
void complexNumbers::display() const
{
    std::cout<<real<<" + "<< img <<"i"<<std::endl;
}

complexNumbers complexNumbers::operator+(const complexNumbers &r)
{
    complexNumbers n1;
    n1.real = this->real + r.real;
    n1.img = this->real + r.img;

    return n1;
}
complexNumbers &complexNumbers::operator=(const complexNumbers &r)
{
    this->real = r.real;
    this->img = r.img;
    std::cout<<"operator= "<<std::endl;

    return *this;
}
complexNumbers complexNumbers::operator-(const complexNumbers &r)
{
    complexNumbers n1;
    n1.real = this->real - r.real;
    n1.img = this->img - r.img;

    return n1;
}
bool complexNumbers::operator==(const complexNumbers &r)
{
    double thisAbs = (this->real * this->real) + (this->img + this->img);
    double rAbs = (r.real * r.real) + (r.img + r.img);

    if(thisAbs == rAbs)
    {
        std::cout<<"numbers are equall"<<std::endl;
        return true;
    }
    else
    {
        std::cout<<"numbers are not equall"<<std::endl;
        return false;
    }
}

bool complexNumbers::operator>(const complexNumbers &r)
{
    double thisAbs = (this->real * this->real) + (this->img + this->img);
    double rAbs = (r.real * r.real) + (r.img + r.img);

    if(thisAbs > rAbs)
    {
        std::cout<<"first number is greater"<<std::endl;
        return true;
    }
    else
    {
        std::cout<<"second number is greater"<<std::endl;
        return false;
    }

}
