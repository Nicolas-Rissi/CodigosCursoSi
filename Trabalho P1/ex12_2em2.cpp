#include "stdio.h"//exibe os numeros de 2 em 2 dentro da faixa estabelecida pelo usuario.
int main()
{
	int cmc,fim;
	printf("Digite um numero inteiro para comecar: ");
	scanf("%i",&cmc);
	printf("Qual numero inteiro ele para? ");
	scanf("%i",&fim);
	while(cmc<=fim)
	{
		printf("%i ",cmc);
		cmc=cmc+2;
	}
	return 0;
}
