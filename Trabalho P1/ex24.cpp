#include "stdio.h"//Exercicio 24: recebe quantas notas o usuario quiser e exibe a media
int main()
{
	int qtde=1;
	float nota=0,media,soma=0;
	char resposta='s';
	while(resposta=='s')
	{
		printf("Digite a nota: ");
		scanf("%f",&nota);
		soma=soma+nota;
		media=soma/qtde;
		qtde=qtde+1;
		printf("Quer digitar outra nota[s/n]: ");
		scanf(" %c",&resposta);
	}
	printf("A media das notas eh :%.2f",media);
	return 0;
}
