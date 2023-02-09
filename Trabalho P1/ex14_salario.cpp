#include "stdio.h"//recebe o salario bruto e calcula o desconto para o liquido
int main()
{
	float salario=-1,salarioliq;
	while(salario<0)
	{
		printf("Quanto voce recebe? ");
		scanf("%f",&salario);
	}
	if(salario<1200)
	{
		printf("O salario liquido eh %.2f.",salario);
	}
	else if(salario>=1200 and salario<3500)
	{
		salarioliq=salario*0.906;
		printf("O salario liquido eh %.2f.",salarioliq);
	}
	else
	{
		salarioliq=salario*0.789;
		printf("O salario liquido eh %.2f.",salarioliq);
	}
	return 0;
}
