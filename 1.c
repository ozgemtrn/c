#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char kitapad[30]; //bıtısık yazmak lazım charın anlaması ıcın ılk kelımenın uzunluguna bakıp sadece onu yazdırıyo
	printf("kitap isminizi giriniz= \n");
	scanf("%s",kitapad);
	printf("okumus oldugunuz kitap= %s",kitapad);
	
	return 0;
}
