#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char kitapad[30]; //b�t�s�k yazmak laz�m char�n anlamas� �c�n �lk kel�men�n uzunluguna bak�p sadece onu yazd�r�yo
	printf("kitap isminizi giriniz= \n");
	scanf("%s",kitapad);
	printf("okumus oldugunuz kitap= %s",kitapad);
	
	return 0;
}
