#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char str1[400],str2[400],str3[400],min,max;
	int i,k,o,m,s;
	printf("birinci metin giriniz: ");
	gets(str1);
	printf("ikinci metni giriniz: ");
	gets(str2);
	printf("ucuncu metni giriniz: ");
	gets(str3);
	printf("s degerini giriniz: ");
	scanf("%d", &s);
	while(s!=-1)
	{
		switch(s)
		{
		
			case 1:
				for(i=0;str1[i]!='\0';i++)
				{
					k++;
				}
				printf(" birinci metindeki harf sayisi---> %d \n",k);
				break;
			case 2:
				
				for(m=0;str2[m]!='\0';m++);
				{
					m++;
				} 
				printf("ikinci metindeki harf sayisi---> %d",m);//%d aldýk cunku sayý degeri bulmak icin islem yaptýk 
				break;
			case 3:
			
				for(i=0;str1[i]!='\0';i++)
				{
					str3[i]=str1[i];
				}
				for(s=0;str2[s];s++);
				{
					str3[i]=str2[i];
				}
				printf("dizilerin birlestirilmis hali ---> %s",str3);
		}
		printf("\ns degerini giriniz: ");
		scanf("%d", &s);
		break;
			case 4:
				max=str1[0];
			
				for(i=0;str1[i]!='\0';i++)
				{
					if(str1[i]<max);
					str1[max]=str1[i];
					
				}
				printf("en büyük deger %c",max);
		break;
			case 5:
			min=str2[0];
			for(i=0;srt2[i]!='\0';i++)
			{
				if(str1[i]<srt1[min]);
				str[min]=str[i];
				
			}
			printf("en kücük deger %c",min);
		break;
}
	printf("\n\n devam etmek icin islem secinz -1 e basiniz");
	scanf("%d",&s);

return 0;
}
	
	
	
