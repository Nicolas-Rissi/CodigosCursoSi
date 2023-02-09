#include "stdio.h"//recebe 3 num diferentes e exibe qual o maior deles.
int main()
{
	int num1=1,num2=1,num3=1;
	while(num1==num2 or num1==num3 or num2==num3)
	{
		printf("Digite um numero inteiro: ");
		scanf("%i",&num1);
		printf("Digite um segundo numero: ");
		scanf("%i",&num2);
		printf("Digite o ultimo numero: ");
		scanf("%i",&num3);
	}
	if(num1>num2 and num1>num3)
	{
		printf("O numero %i eh o maior deles.",num1);
	}
	else if(num2>num1 and num2>num3)
	{
		printf("O numero %i eh o maior deles.",num2);
	}
	else
	{
		printf("O numero %i eh o maior deles.",num3);
	}
	return 0;
}
