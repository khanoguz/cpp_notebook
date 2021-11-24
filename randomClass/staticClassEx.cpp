#include<iostream>
#include"staticClassEx.hpp"

int Class1::x = 0; //static degiskene bu atamayi yapmak zorundayiz
int Class1::y = 0;
//aksi takdirde main'de gözükmeyecektir.
void Class1::func() const
{/*
   // m = 1; const oldugu icin deger degistirelemez.
   //syntax hatasidir.
   Class1::x = 20; //fakat static degisken tamamen sinifa ait oldugu icin
   //const func()'ta bile degistirilebilir.*/
   std::cout<<"x: "<<x<<std::endl;
   std::cout<<"y: "<<y<<std::endl;

}

void Class1::sfunc()
{
   Class1::x = 31;
   Class1::y = 100;
}
