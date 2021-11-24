#ifndef __DOCTORCLASS_HPP__
#define __DOCTORCLASS_HPP__

#include<string>
#include<list>


class Doctor
{
    std::string Name;
    int age;
    static std::list<Doctor *> AdressList; 

public:
    std::string getName() const;
    int getAge() const;
    void display() const;
    Doctor(const std::string &r,int rAge);
    ~Doctor();
    Doctor(const Doctor &r);

};


#endif