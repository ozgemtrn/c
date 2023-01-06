#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int sayi;
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi%3==0 && sayi%5==0)
	
		printf("sayiniz 15 e tam bolunurr");
	
	else
	
		printf("sayiniz 3, 5 in kati degildir");
	
	
	
	
	return 0;
}
