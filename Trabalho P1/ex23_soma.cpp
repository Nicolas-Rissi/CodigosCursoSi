#include "stdio.h"
int main()
{
	float soma,num;
	while(num!=0)
	{
		printf("Digite um numero para ser somado, digite 0 para exibir o resultado da soma: ");
		scanf("%f",&num);
		soma=soma+num;
	}
	printf("A soma dos numeros eh: %.2f",soma);
	return 0;
}
