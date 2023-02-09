#include "stdio.h"//programa que calcula o imc de uma pessoa e diferencia o sexo.
int main()
{
	float peso,alt,imc;
	char H='H',h='h',M='M',m='m',resp;
	printf("Qual a sua altura em metros? ");
	scanf("%f",&alt);
	printf("Qual eh o seu peso em kg? ");
	scanf("%f",&peso);
	imc=peso/(alt*alt);
	printf("Voce eh homem ou mulher? Digite H para homem e M para mulher. ");
	scanf(" %c",&resp);
	if(resp==M or resp==m)
	{
		if(imc<19.1)
		{
			printf("Voce esta abaixo do peso!");
		}
		if(imc>=19.1 and imc<25.8)
		{
			printf("Voce esta no peso ideal!");
		}
		if(imc>=25.8 and imc<27.3)
		{
			printf("Voce esta um pouco acima do peso.");
		}
		if(imc>=27.3 and imc<32.3)
		{
			printf("Voce esta acima do peso!");
		}
		if(imc>=32.3)
		{
			printf("Voce esta obeso!!!");
		}
	}
	else if(resp==H or resp==h)
	{
		if(imc<20.7)
		{
			printf("Voce esta abaixo do peso!");
		}
		if(imc>=20.7 and imc<26.4)
		{
			printf("Voce esta no peso ideal!");
		}
		if(imc>=26.4 and imc<27.8)
		{
			printf("Voce esta um pouco acima do peso.");
		}
		if(imc>=27.8 and imc<31.1)
		{
			printf("Voce esta acima do peso!");
		}
		if(imc>=31.1)
		{
			printf("Voce esta obeso!!!");
		}
	}
	return 0;
}
