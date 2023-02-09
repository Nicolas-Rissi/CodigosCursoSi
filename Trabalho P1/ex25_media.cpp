#include "stdio.h"//pega a nota de n alunos predefinidos e exibe a media.
int main()
{
	int alunos,qtd=1;
	float nota,media,soma;
	printf("Quantos alunos? ");
	scanf("%i",&alunos);
	while(qtd<=alunos)
	{
		printf("Digite a nota: ");
		scanf("%f",&nota);
		qtd=qtd+1;
		soma=soma+nota;
	}
	media=soma/alunos;
	printf("A media dos alunos eh %.2f.",media);
	return 0;
}
