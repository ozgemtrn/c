#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float s1;
	printf("bir sayi giriniz=");
	scanf("%f",&s1);
	if (s1/5!=0 && s1/2!=0)
	{
		printf("sayiniz hem 5 hem 2 bolunuyo");
	}
	else
	{
		printf("sayiniz hicbirine yada ikisinden birine bolunmuyo");
		
	}
	return 0;
}
