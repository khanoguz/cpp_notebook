#include<iostream>

class sayici
{
    private:
    int deger = 0;
    public:
    void goster() const;
    void artir();
    void azalt();
    sayici();

};

sayici::sayici()
{
    std::cout<<"welcome to counter app!"<<std::endl;
}

void sayici::artir()
{
    deger++;
}
void sayici::azalt()
{
    deger--;
}
void sayici::goster() const{
    std::cout<<"Value: "<<deger<<std::endl;
}
main()
{
    sayici s1;
    s1.goster();

    for(int i = 1;i<=10;i++)
        s1.artir();
    s1.goster();
    for(int i=0;i<4;i++)
        s1.azalt();
    s1.goster();

    system("pause");
    return 0;
}
