#include "stdio.h"
int main()
{
	char letra=63;
	while(letra==63)
	{
		printf("Digite um caracter qualquer: ");
		scanf(" %c",&letra);
	}
	if(letra>=97 and letra<=122)
	{
		printf("O caracter eh uma letra minuscula.");
	}
	else if(letra>=65 and letra<=90)
	{
		printf("O caracter eh uma letra maiuscula.");
	}
	else if(letra>=48 and letra<=57)
	{
		printf("O carecter eh um numero.");
	}
	else
	{
		printf("O caracter eh especial.");
	}
	return 0;
}
