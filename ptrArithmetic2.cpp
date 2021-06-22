#include<iostream>
// Operatör öncelikleri

  const int SIZE = 3;
main()
{
    int array[SIZE] = {1,22,34};
    int *aPtr = array;

/*
    std::cout<<*(aPtr++)<<std::endl; // burada ++ operatoru parantez icinde olmasına ragmen önce *aPtr islemi ekrana yazdirilir ve aPtr 1 arttirilir.
    std::cout<<*(++aPtr)<<std::endl; // burada ise öncelikle ++ islemini yapip aPtr'yi bir artirdi ve ekrana yazdirdi.
    yani sonuc olarak ifadenin sol tarafinda ne varsa daha önceliklidir.

  std::cout<<*aPtr++<<std::endl; //burada öncelikle *aPtr islemini yapip aPtr degerini bir arttirmistir.
 
  std::cout<<*++aPtr<<std::endl; //burada ise aPtr++ islemini öncelikle yapip aPtr degerini bir arttirip daha sonra ekrana yazdirmistir.
  //yani sonuc olarak yine ifadeye en yakın sol taraftan isleme baslanir, sag taraftaki islemler bi sonraki satırda gösterilir.

    std::cout<<(*aPtr)++<<std::endl; //burada yine parantez icinin sol tarafini yapip ekrana degeri yazdirmistir daha sonra aPtr'yi bir arttırmıstir.
     */
    std::cout<<++(*aPtr)<<std::endl; //burada ise yine parantezin icinden baslayip aPtr degerini almistir. daha sonra "1" degerini 1 artirip 2 degerini ekrana yazdirmistir.
    system("pause");
    return 0;
}
