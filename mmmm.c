#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int sayi;
	printf("sayi giriniz");
	scanf("%d",&sayi);
	
	if (sayi%3==0 || sayi%5==0)
	{
		printf("sayiniz 3 veya 5 e bolunur");
	}
	else
	{
		printf("sayiniz 3 veya 5 e bölünmez");
		
	}
	return 0;
}
