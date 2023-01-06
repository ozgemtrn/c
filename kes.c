#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int misir,kola,su,bilet,top;
	printf("********menu ucretlendirmesi*********\n\n");
	
	printf("aldiginiz misir adedini giriniz:\n");
	scanf("%d",&misir);
	
	printf("aldiginiz kola adetini giriniz:\n");
	scanf("%d",&kola);
	
	printf("aldiginiz su adetini giriniz:\n");
	scanf("%d",&su);
	
	printf("aldiginiz bilet adetini giriniz:\n");
	scanf("%d",&bilet);
	
	misir=misir*2;
	kola=kola*2;
	su=su*1;
	bilet=bilet*8;
	
	top=bilet+su+kola+misir;
	printf("aldiginiz urunlerin toplam fiyati: %d",top);
	
	return 0;
	}
