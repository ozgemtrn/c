#include <stdio.h>
#include <stdlib.h>


int main() 
{
	float kisakenar,uzunkenar,alan,cevre;
	//bir float kenarlý dýkdortgenýn alan cevre hesaboý výrgulden sonra 2 basamak gorecek sekýlde
	printf("dikdortgenin kisa kenarini giriniz=");
	scanf("%f",&kisakenar);
	printf("dikdortgenin uzun kenarinin degerini giriniz=");
	scanf("%f",&uzunkenar);
	cevre=uzunkenar*2+kisakenar*2;
	alan=kisakenar*uzunkenar;
	printf("alan=%.2f---->cevre=%.2f",alan,cevre);
	
	return 0;

}
