#include<iostream>

class Boxes
{
    private:
    double len,wid,heig;
    public:
    Boxes();
    ~Boxes();
    Boxes(double l, double w,double h);

    double vol()
    {
        return len*wid*heig;
    }

    void setlen(double l)
    {
        len = l;
    }
    void setWid(double w)
    {
        wid = w;
    }
    void setHeig(double h)
    {
        heig = h;
    }
    void display() const
    {
        std::cout<<"Lenght: "<<len<<std::endl;
        std::cout<<"Height: "<<heig<<std::endl;
        std::cout<<"Width: "<<wid<<std::endl;
        std::cout<<"***************************"<<std::endl;;
    }

    Boxes &operator=(const Boxes &r);
    Boxes &operator+(const Boxes &r);
    bool operator==(const Boxes &r);
    bool operator>=(const Boxes &r);
};

Boxes::Boxes()
{
    std::cout<<"Constructer is called!"<<std::endl;
}
Boxes::Boxes(double l, double w, double h)
{
    if(l <= 0 || w <= 0 || h <= 0)
    {
        std::cout<<"value can not be lower than 0!"<<std::endl;
        len = 0;
        wid = 0;
        heig = 0;
    }
    else
    {
        len = l;
        wid = w;
        heig = h;
    }
    
    std::cout<<"vol: "<<this->heig*this->wid*this->len<<std::endl;


}
Boxes::~Boxes()
{
    std::cout<<"Destructer is called!"<<std::endl;
}
Boxes &Boxes::operator=(const Boxes &r)
{
    
    this->len = r.len;
    //this -> box1      r-> box2
    this->heig = r.heig;
    this->wid = r.wid;
    std::cout<<"operator= is called!"<<std::endl;
    
    return *this;
}
Boxes &Boxes::operator+(const Boxes &r)
{
    std::cout<<"operator+ is called!"<<std::endl;
    this->len = this->len + r.len;
    this->heig = this->heig + r.heig;
    this->wid = this->wid + r.wid;

    return *this;
}

bool Boxes::operator==(const Boxes &r)
{
    double thisVol = this->vol();   
    double refVol = r.heig * r.len * r.wid; //r.vol() 'e direk ulasamıyoruz.

    if(thisVol == refVol)
    {
        std::cout<<"Those vols are equally"<<std::endl;
        return true;
    }
    else
    {
        std::cout<<"Those vols are not equally"<<std::endl;
        return false;
    }
}

bool Boxes::operator>=(const Boxes &r)
{
    double thisVol =r.heig * r.len * r.wid;
    double vol2 = heig * len * wid;

    if(thisVol > vol2)
    {
        std::cout<<"first box is greater than second box"<<std::endl;
        return true;
    }
    else
    {
        std::cout<<"first box is smaller than second box"<<std::endl;
        return false;
    }
}

main()
{
    Boxes b2;
    Boxes b1(3.1,4.6,1.3);
/*
    std::cout<<"b2 volume: "<<b2.vol()<<std::endl;
    std::cout<<"b1 vol: "<<b1.vol()<<std::endl;
*/
    b2 = b1; //operator= 
    b1.display();
    b2.display();
    Boxes b3;
    b3 = b1+b2;
    b3.display();

    Boxes b4(4,3,2);
    Boxes b5(6,7,8);

    if(b4 >= b5) //operator== will be called
    {
        std::cout<<"first box is bigger"<<std::endl;
    }
    else
    {
        std::cout<<"boxes may be same"<<std::endl;
    }
    system("pause");
    return 0;
}