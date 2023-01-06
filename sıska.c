#include <stdio.h>
#include <stdlib.h>

/* ucaktan cikan madde miktari */

int main() 
{
	float sayi1,sayi2,top;
	printf("*****************ucaktan cikan toplam yakiti***************\n\n\n");
	
	printf(" birinci harekette ucaktan cikan yakiti giriniz:");
	scanf("%f\n",&sayi1);
	printf("ikinci harekette ucaktan cikan yakiti giriniz:");
	scanf("%f\n",&sayi2);
	top=sayi1+sayi2;
	printf("toplam =%f",top);
	
	return 0;
}
