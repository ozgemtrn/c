#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int s1,s2,s3,ort;
	printf("birinci sinav notunu giriniz:");
	scanf("%d",&s1);
	
	printf("ikinci sinav notunu giriniz:");
	scanf("%d",&s2);
	
	printf("ucuncu sinav notunu giriniz:");
	scanf("%d",&s3);
	
	ort=((s1+s2+s3)/3);
	printf("ortalamaniz: %d",ort); 
	return 0;
}
