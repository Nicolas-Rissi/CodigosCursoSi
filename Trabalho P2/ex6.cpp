#include "stdio.h"
/*Criar um programa com menu contendo 5 opçõesde cálculo: 
área do quadrado, 
área do retângulo, 
área do triângulo retângulo, 
área do círculo 
sair. 
As opções e o menu devem ser funções próprias. 
Usuário deve ser capaz de fazer nova operação enquanto quiser. 
Não permita divisão por ZERO. 
Use somente floats para os cálculos. 
Usuário fornece os valores necessários para cada cálculo. 
As funções devem retornar o resultado para main.
*/
float AreaQuadrado()
{
	float lado, areaQ;
	printf("Digite o lado do quadrado: ");
	scanf("%f",&lado);
	areaQ=lado*lado;
	return areaQ;
}
float AreaRetangulo()
{
	float comp, larg, areaR;
	printf("Digite o comprimento do retangulo: ");
	scanf("%f",&comp);
	printf("Digite a largura do retangulo: ");
	scanf("%f",&larg);
	areaR=comp*larg;
	return areaR;
}
float AreaTriangulo()
{
	float base, alt, areaT;
	printf("Digite a base do triangulo: ");
	scanf("%f",&base);
	printf("Digite a altura do triangulo: ");
	scanf("%f",&alt);
	areaT=(base*alt)/2;
	return areaT;
}
float AreaCirculo()
{
	float raio, pi=3.14, areaC;
	printf("Digite o raio do circulo: ");
	scanf("%f",&raio);
	areaC=(raio*raio)*pi;
	return areaC;
}

int main()
{
	int nic_escolha;
	float areaQua, areaRet, areaTri, areaCir, sair;
	do{
		printf("Menu\n");
		printf("\nEscolha uma das opcoes a seguir:\n");
		printf("\n1- Calcular a area do quadrado");
		printf("\n2- Calcular a area do retangulo");
		printf("\n3- Calcular a area do triangulo retangulo");
		printf("\n4- Calcular a area do circulo");
		printf("\n5- Sair");
		do{
			printf("\n\nDigite a opcao: ");
			scanf("%d",&nic_escolha);	
		}while(nic_escolha!=1 and nic_escolha!=2 and nic_escolha!=3 and nic_escolha!=4 and nic_escolha!=5);	
		switch(nic_escolha){
			case 1:
				areaQua = AreaQuadrado();
				printf("A area do quadrado eh: %.2f\n",areaQua);
			break;
			case 2:
				areaRet = AreaRetangulo();
				printf("A area do retangulo eh: %.2f\n",areaRet);
			break;
			case 3:
				areaTri = AreaTriangulo();
				printf("A area do triangulo retangulo eh: %.2f\n",areaTri);
			break;
			case 4:
				areaCir = AreaCirculo();
				printf("A area do circulo eh: %.2f\n",areaCir);
			break;
			case 5:
				return 0;
			break;
		}
	}while(true);
}
