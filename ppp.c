#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i;
	for(i=1;i<=50;i++)    // "=" buyuktur sag�na
	{
		if(i%5==0)
		{
			printf("%d \n",i);
		}
	}
	return 0;
}
