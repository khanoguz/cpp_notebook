#include "myString.hpp"
#include <iostream>


int stringUzunluk(const char *str)
{
    int say = 0;
    int i = 0;
    while(*str != '\0')
    {
        str++;
        say++;
    }
        return say;
}

bool stringKarsilastir(const char *str1, const char *str2)
{   /*
    while(*str1 == *str2)
    {
        if(*str1 == '\0' || str2 == '\0')
            break;
        str1++;
        str2++;
    }
    if(*str1 == '\0' && *str2 == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
    */
   if(stringUzunluk(str1) == stringUzunluk(str2))
   {
       while(*str1++ == *str2++)
       {
           if(*str1 == '\0' || *str2 == '\0')
                break;
       }
       return true;
   }
   else
   {
       return false;
   }
}
char *stringEkle(char *dest,const char *source)
{/*
    int i,k;
    for(i = 0; dest[i] != '\0'; i++)
    ;
    source  = "from turkey";
    for(k = 0; source[k] != '\0';k++)
    {
        dest[i+k] = source[k];
    }
    return dest;
    */

   int i = stringUzunluk(dest);

   for(int k = 0; source[k] != '\0'; k++)
   {
       dest[i+k] = source[k]; 
   }

   return dest;
}

char *stringKopyala(char *dest,const char *source)
{

    if(stringUzunluk(source) > stringUzunluk(dest))
    {
        std::cout<<"hedef dizi kaynak diziden kücük oldugu icin kopyalama yapilamaz!"<<std::endl;
        return NULL;
    }
    else
    {
        std::cout<<"string kopyalaniyor..."<<std::endl;
        for(int i = 0;source[i] == '\0';i++)
        {
            dest[i] = source[i];
        }
        return dest;
    }
  
}


