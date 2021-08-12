#ifndef __ACCOUNTEX_HPP__
#define __ACCOUNTEX_HPP__

class Account
{
    private:
    int accNo;
    double mBalance;
    int mOpCounter;
    public:
    Account(double sum = 0);
    int getAccountNumber() const;
    double getBalance() const;
    Account &deposit(double sum);
    Account &draw(double sum);
    void display() const;
    void transfer(Account &main,double sum);

};

#endif
    