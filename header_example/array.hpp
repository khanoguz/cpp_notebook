/*
header file'da decleration (tanimlama) ve information'lari veririrz.
*/
#ifndef __ARRAY__HPP__
#define __ARRAY__HPP__
/*
eger array.hpp tanimlanmamissa tanimlar.
tanimlanip tekrar tanimlanmaya calisiliyosa tekrar tanimlamaz
*/

void arrayBaslat(int *array, int sze);
void arrayGoster(int *array, int sze);

double arrayTopla(int  *array, int sze);
double arrayOrtalama(int  *array, int sze);

int *arrayleriTopla(int *array1,int *array2,int *array3,int sze);
int *arrayleriCikar(int *array1,int *array2,int *array3,int sze);
int *arrayleriCarp(int  *array1,int *array2,int *array3,int sze);

#endif