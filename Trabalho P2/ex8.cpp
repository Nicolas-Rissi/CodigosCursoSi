/*
Criar programa com funções próprias que crie uma matriz L*C e seja preenchida com (Z+i+j). 
Os valores ímpares da matriz serão alterados por Y. 
A função não deve ter retorno. 
L, C, Y e Z são parâmetros de entradada função e definidos pelo usuário.
*/
#include "stdio.h"
void criarMatriz(int nic_l,int nic_c,float nic_z, float nic_y)
{
	int nic_i, nic_j,nic_teste;
	float nic_preenche;
	float nic_matriz[nic_l][nic_c];
	for(nic_i=0;nic_i<nic_l;nic_i++){
		for(nic_j=0;nic_j<nic_c;nic_j++){
			nic_preenche=nic_z+nic_i+nic_j;
			nic_teste=(int)nic_preenche%2;
			switch(nic_teste){
				case 0:
					nic_matriz[nic_i][nic_j]=nic_preenche;
				break;
				case 1:
					nic_matriz[nic_i][nic_j]=nic_y;
				break;
				case -1:
					nic_matriz[nic_i][nic_j]=nic_y;
				break;
			}
			printf("%.2f\t",nic_matriz[nic_i][nic_j]);	
		}
		printf("\n");
	}
}

int main()
{
	int nic_linha,nic_col;
	float nic_valor, nic_valorY;
	printf("Este programa cria uma matriz LxC preenche com (z+i+j) e altera os valores impares por Y:\nPor favor insira:\n");
	printf("O numero de Linhas: ");
	scanf("%d",&nic_linha);
	printf("O numero de colunas: ");
	scanf("%d",&nic_col);
	printf("O valor de Z: ");
	scanf("%f",&nic_valor);
	printf("O valor de Y: ");
	scanf("%f",&nic_valorY);
	criarMatriz(nic_linha,nic_col,nic_valor,nic_valorY);	
	return 0;
}
