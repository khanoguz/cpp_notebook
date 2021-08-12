#include"accountEx.hpp"
#include<iostream>
#include<cstdlib>


static int gAccountCounter  = 0;


Account::Account(double sum)
{
    accNo = ++gAccountCounter;
    mBalance = sum;
    mOpCounter = 0;
}

int Account::getAccountNumber() const
{
    return accNo;
}

double Account::getBalance() const
{
    return mBalance;
}

Account &Account::deposit(double sum)
{
    mBalance = mBalance+sum;
    mOpCounter++;
    
    return *this;
}
Account &Account::draw(double sum)
{
    if(sum>mBalance)
    {
        exit(EXIT_FAILURE);
        std::cout<<"Not enough your balance"<<std::endl;
    }
    mOpCounter++;
    mBalance = mBalance-sum;
    return *this;
}

void Account::transfer(Account &main,double sum)
{
    main.draw(sum);
    deposit(sum);
}

void Account::display() const
{
    std::cout<<"***********************"<<std::endl;
    std::cout<<"*     Account ID: "<<accNo<<"   *"<<std::endl;
    std::cout<<"*     Balance: "<<mBalance<<"   *"<<std::endl;
    std::cout<<"***********************"<<std::endl;

}