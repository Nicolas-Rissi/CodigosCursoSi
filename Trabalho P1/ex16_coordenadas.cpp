#include "stdio.h"//classifica o quadrante de acordo com coordenadas x e y recebidas.
int main()
{
	int coordX=0,coordY=0;
	while(coordX==0 or coordY==0 or coordX>90 or coordY>90 or coordX<-90 or coordY<-90)
	{
		printf("O programa classifica o quadradante de acordo com as coordenadas digitadas, ele lerah\n apenas inteiros, e nao leh coordenadas maiores que 90 e menores que -90.\n");
		printf("Digite a coordenada X: ");
		scanf("%i",&coordX);
		printf("Digite a coordenada Y: ");
		scanf("%i",&coordY);
	}
	if(coordX>0 and coordY>0)
	{
		printf("O ponto esta no primeiro quadrante.");
	}
	else if(coordX<0 and coordY>0)
	{
		printf("O ponto esta no segundo quadrante.");
	}
	else if(coordX<0 and coordY<0)
	{
		printf("O ponto esta no terceiro quadrante.");
	}
	else//coordX>0 and coordY<0
	{
		printf("O ponto esta no quarto quadrante.");
	}
	return 0;
}
