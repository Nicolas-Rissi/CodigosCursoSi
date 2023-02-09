#include "stdio.h"//exibe a tabuada do num que o usuario escolheu de 0 a 10. Nao pode num maior que 10 ou menor que 1.
int main()
{
	int num=0,mult=0,res;
	while(num<1 or num>10)
	{
		printf("Digite um numero entre 1 e 10: ");
		scanf("%i",&num);
	}
	while(mult<=10)
	{
		res=num*mult;
		printf(" %i",res);
		mult=mult+1;
	}
	return 0;
}
