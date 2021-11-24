#include<iostream>
#include<list>
#include<string>
#include "doctorClass.hpp"
using namespace std;

std::list<Doctor *> Doctor::AdressList; 

Doctor::Doctor(const std::string &r,int rAge) : Name(r), age(rAge)
{
    Doctor::AdressList.push_back(this); // listeye ekleme func.
}

std::string Doctor::getName() const
{
    return Name;
}

int Doctor::getAge() const
{
    return age;
}

void Doctor::display() const
{
    std::cout<<"Name: "<<Name<<std::endl;
    std::cout<<"Age: "<<age<<std::endl;


    for(std::list<Doctor *>::const_iterator iter = AdressList.begin(); iter != AdressList.end(); iter++ )
    {
        if(*iter != this)
        {
            std::cout<<(*iter)->getName()<<std::endl;
        }
    }
}

Doctor::~Doctor()
{
    Doctor::AdressList.remove(this);
}
Doctor::Doctor(const Doctor &r) : Name(r.Name), age(r.age)
{
    Doctor::AdressList.push_back(this);
}


