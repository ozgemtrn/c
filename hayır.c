#include <stdio.h>
#include <stdlib.h>
//karede alan ve cevre hesabi

int main() 
{
	int kenar,alan,cevre;
	
	printf("********karenin kenarindan alan ve cevre hesabi**********\n\n");
	
	printf("bir kenari giriniz:");
	scanf("%d",&kenar);
	
	alan=kenar*kenar; 
	// "^" bu  isaret c dýlýnde kullanýlamaz
	cevre=kenar*4;
	
	printf("karenin alani=%d\n",alan);
	printf("karenin cevre=%d\n",cevre);
	
	
	return 0;
}
