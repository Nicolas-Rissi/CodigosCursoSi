#include "stdio.h"
/*
Criar uma matriz N x M e preencher com (1+(i+M)*(j*N)). 
Exibir a matriz. 
Pesquisar uma posição da matriz pelos seus índices e exibir o valor contido nela.
*/
int main()
{
	int nic_i, nic_j, nic_n, nic_m, nic_indice_linha, nic_indice_col;
	printf("Este programa criara uma matriz N x M e preenchera com (1+(i+M)*(j*N)), por favor digite:\n");
	printf("O valor de N: ");
	scanf("%d",&nic_n);
	printf("O valor de M: ");
	scanf("%d",&nic_m);
	printf("Esta eh a matriz:\n");
	int nic_matriz[nic_i][nic_j];
	for(nic_i=0;nic_i<nic_n;nic_i++){
		for(nic_j=0;nic_j<nic_m;nic_j++){
			nic_matriz[nic_i][nic_j] = (1+(nic_i+nic_m)*(nic_j*nic_n));
			printf("%d\t",nic_matriz[nic_i][nic_j]);
		}
		printf("\n");
	}
	printf("Escolha o indece que quer saber o valor: ");
	printf("\nDigite a linha: ");
	scanf("%d",&nic_indice_linha);
	printf("Digite a coluna: ");
	scanf("%d",&nic_indice_col);
	nic_i = nic_indice_linha - 1;
	nic_j= nic_indice_col - 1;
	printf("O valor do indice %d %d eh %d",nic_indice_linha, nic_indice_col, nic_matriz[nic_i][nic_j]=(1+(nic_i+nic_m)*(nic_j*nic_n)));
	return 0;
}
