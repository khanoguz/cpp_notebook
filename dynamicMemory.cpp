#include<iostream>
#include<cstdlib> //fonk icin gerekli kütüphane
/*
ornegin int a[10] diye bir dizi tanimladigimizda compiler time'da 40 bytelik bir yer ayrilir ve bu yeri silemeyiz.
bazı c lib'ler ile runtime'da bir dizi tanimlayip onun bellekte tuttugu yeri diledigimmiz zaman silebiliriz.
buna dinamik hafiza erisimi denir.

malloc (memory allocation location)
calloc 
realloc
gibi fonksiyonlar ile..

1)malloc
tipi bagimsizdir. acilan hafiza blogunun ilk adressini verir.

void *malloc(size_t nByte)

2)free
dinamik bellekte ayrilmis olan yeri bize geri verir.
compile time'a ait birseyi geri veremeyiz.sadece bizim dinamik olarak ayirdigimiz yerleri geri alabiliriz. 

void free(void *ptr)'ye döner

*/
void *kontrolMallok(size_t n)
{
    void *ptr = malloc(sizeof(int)*n);
    if(!ptr) //if(ptr != null)
    {
        std::cout<<"yer ayrilamadi"<<std::endl;
        exit(EXIT_FAILURE);
    }
    return ptr;
}
main()
{

    int a;
    int *ptr;

    std::cout<<"Kac tane elemana ihtiyaciniz var? : ";
    std::cin>>a;

    ptr = (int *)kontrolMallok(a);

    //ptr = (int *)malloc(sizeof(int)*a); //int * ile cast yapmamiz gerekiyor cunku mallocun donus degeri void *. ptr ise int *    

    for(int i = 0;i<a;i++)
    {
        *(ptr + i) = 31;
        std::cout<<"ptr["<<i<<"]: "<<ptr[i]<<std::endl;
    }

    free(ptr);
    for(int i = 0;i<a;i++)
    {
        std::cout<<"ptr["<<i<<"]: "<<ptr[i]<<std::endl;
    }

    //eger ki mallok ile yer ayirdigimizda kesinlike daha sonra free edilmesi gerekiyor. programi kapasak bile yer ayrilmaya devam edilebilir.
    system("pause");
    return 0;
}