#include "stdio.h"//recebe um numero diferente de 0 e classifica como par ou impar
int main()
{
	int num=0,teste;
	while(num==0)
	{
		printf("Digite um numero inteiro diferente de 0: ");
		scanf("%i",&num);
	}
	teste=num%2;
	if(teste==0)
	{
		printf("O numero %i eh par",num);
	}
	else
	{
		printf("O numero %i eh impar",num);
	}
	return 0;
}
