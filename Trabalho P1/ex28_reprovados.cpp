#include "stdio.h"//recebe a media final de n alunos e exibe a qtd de reprovados.
int main()
{
	int alunos,qtd=1,reprovados=0;
	float media;
	printf("Quantos alunos? ");
	scanf("%i",&alunos);
	while(qtd<=alunos)
	{
		printf("Digite a media final: ");
		scanf("%f",&media);
		qtd=qtd+1;
		if(media<6)
		{
			reprovados=reprovados+1;
		}
	}
	if(reprovados==0)
	{
		printf("Ninguem foi reprovado!");
	}
	else
	{
		printf("O numero de reprovados foi %d.",reprovados);
	}
	return 0;
}
