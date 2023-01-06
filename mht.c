#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	printf("*******sinav notu hesabi********\n");
	int ort,sinav1,sinav2,sinav3,pro;
	printf("1. sinav notunu giriniz: ");
	scanf("%d",&sinav1);
	printf("2.sinav notunu giriniz: ");
	scanf("%d",&sinav2);
	printf("3. sinav notunu giriniz: ");
	scanf("%d",&sinav3);
	printf("proje notunuzu giriniz: ");
	scanf("%d",&pro);
	
	ort=(sinav1+sinav2+sinav3+pro)/4;
	 if (ort<50 )
	 {
	 	printf("sinav notunuz ff dir");
	 }
	 else if(50<ort<60 || ort==50)
	 {
	 	printf("sinav notunuz dd dir");
	 }
	 else if(60<ort<70 || ort==60)
	 {
	 	printf("sinav notunuz cc dir");
	 }
	 else if(70<ort<85 || ort==70)
	 {
	 	printf("sinav notunuz bb dir");
	 }
	 else if(85<ort || ort==85)
	 {
	 	printf("sinav notunuz aa dir");
	 }
	return 0;
}
