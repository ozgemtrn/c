#include <stdio.h>
#include <stdlib.h>

/* ygs puan hesaplama sýstemýný kurma
turkce=1.9
mat=3.9
sos=1
fen=2.9
taban=100.160*/

int main() 
{
	float taban,toplam,sos,fen,mat,turk;
	taban=100.160;
	printf("turkce netinizi giriniz=");
	scanf("%f",&turk);
	printf("matematik netinizi giriniz=");
	scanf("%f",&mat);
	printf("sosyal netinizi giriniz=");
	scanf("%f",&sos);
	printf("fen netinizi giriniz=");
	scanf("%f",&fen);
	fen=fen*2.9;
	mat=mat*3.9;
	turk=turk*1.9;
	sos=sos*1;
	toplam=fen+sos+mat+turk+taban;
	printf("toplam puaniniz=%f",toplam);
	
	return 0;
}
