#include "stdio.h"
int main()
{
	int num=0;
	while(num>-12)
	{
		printf("Digite um numero, para parar digite um numero menor que -12.\n ");
		scanf("%i",&num);
		printf("%i\n",num);
	}
	return 0;
}
