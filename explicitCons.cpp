#include<iostream>

class sayici
{
    int mVal, yVal;
    public:
    explicit sayici(int val = 0) : mVal(val), yVal(val)
    {

    }
    void display() const
    {
        std::cout<<"mVal: "<<mVal<<std::endl;
        std::cout<<"yVal: "<<yVal<<std::endl;
    }

};

main()
{
    sayici m1(20);
    m1.display();

  //m1 = 30; const explicit oldugudan tür donusumune izin vermiyor. direk degeri cagirmak zorundayiz
  
    return 0;

}