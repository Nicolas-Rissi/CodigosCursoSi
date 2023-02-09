#include "stdio.h"//calcula a soma dos n num pares digitados pelo usuario.
int main()
{
	int num,teste,soma=0;
	char resp='s';
	while(resp=='s')
	{
		printf("Digite um numero: ");
		scanf("%i",&num);
		teste=num%2;
		if(teste==0)
		{
			soma=soma+num;
		}
		printf("Quer digitar outro numero? [s/n] ");
		scanf(" %c",&resp);
	}
	printf("O resultado da soma dos numeros eh %i.",soma);
	return 0;
}
