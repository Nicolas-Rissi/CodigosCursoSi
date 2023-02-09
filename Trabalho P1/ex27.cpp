#include "stdio.h"
int main()
{
	int num,soma=0;
	while(soma<80)
	{
		printf("Digite um numero para ser somado");
		scanf("%i",&num);
		soma=soma+num;
	}
	printf("A soma dos numeros eh %i.",soma);
	return 0;
}
