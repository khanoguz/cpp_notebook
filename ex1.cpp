#include<iostream>
using namespace std;


class abc
{
    private:
    public:
        static int count;
        abc()
        {
            abc::count++;
        }
        ~abc()
        {
            abc::count--;
        }
    static int getCount()
    {
        return abc::count;
    }
};
int abc::count = 0;
main()
{
    abc a1;
    cout<<abc::getCount();

    system("pause");
    return 0;
}