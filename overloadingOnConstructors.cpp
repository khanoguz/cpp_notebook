#include<iostream>

class sinif
{
    public:
    sinif()
    {
        std::cout<<"default constructer!"<<std::endl;
    }
    sinif(int a)
    {
        std::cout<<"int constructer!"<<std::endl;
    }
    sinif(int a,int b)
    {
        std::cout<<"int-int constructer!"<<std::endl;
    }
    sinif(double a,double b)
    {
        std::cout<<"double-double constructer!"<<std::endl;
    }
    private:
    int x;
};

main()
{
    sinif x2 = 4;
    sinif x1;
    sinif x3(3);
    sinif x4(3,4);
    sinif x5(31.31,31.31);

    return 0;

}