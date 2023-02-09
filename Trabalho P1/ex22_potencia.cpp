#include "stdio.h"
int main()
{
	int base=-1,expoente=-1,conta=1;
	while(base<0 or expoente<0)
	{
		printf("Digite a base da potencia: ");
		scanf("%i",&base);
		printf("Digite o expoente da potencia: ");
		scanf("%i",&expoente);
	}
	if(expoente==0)
	{
		printf("O resultado da potencia eh 1.");
	}
	else
	{
		while(expoente>=1)
		{
			conta=conta*base;
			expoente=expoente-1;
		}
		printf("O resultado da conta eh %i",conta);
	}
	return 0;
}
