#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int sayi;
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	sayi+=3;
	printf("sayinizin 3 fazlasi: %d \n",sayi);
	sayi++;
	printf("yeni sayinizin 1 fazlasi: %d",sayi);
	
	return 0;
}
