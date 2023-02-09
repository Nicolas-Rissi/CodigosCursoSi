#include "stdio.h"
/*
Criar programa com funções próprias que crie uma matriz N*M e seja preenchida com X. 
A função não deve ter retorno, mas N, M e X são parâmetros de entrada.
*/
void criaMatriz(int nic_n,int nic_m,float nic_x)
{
	int nic_i,nic_j;
	float nic_matriz[nic_n][nic_m];
	for(nic_i=0;nic_i<nic_n;nic_i++){
		for(nic_j=0;nic_j<nic_m;nic_j++){
			nic_matriz[nic_i][nic_j]=nic_x;	
			printf("%.2f\t",nic_matriz[nic_i][nic_j]);
		}
		printf("\n");
	}
}
int main()
{
	int nic_linha, nic_col;
	float nic_valor;
	printf("Este prorama criara uma matriz NxM e preenchera com X.\nPor favor insira:\n");
	printf("O valor de N: ");
	scanf("%d",&nic_linha);
	printf("O valor de M: ");
	scanf("%d",&nic_col);
	printf("O valor de X: ");
	scanf("%f",&nic_valor);
	criaMatriz(nic_linha,nic_col,nic_valor);
	return 0;
}
