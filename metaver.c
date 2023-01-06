#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float s1;
	printf("bir sayi giriniz=");
	scanf("%f",&s1);
	if (s1/2!=0)
	{
		printf("girdiginiz sayi 2'ye tam bolunuyo");
	}
	else
	{
		printf("girdiginiz sayi 2 ye bolunmez");
	}
	return 0;
	
}
