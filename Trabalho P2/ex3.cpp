#include "stdio.h"
/*
Criar uma matriz Identidade de lado L. Usuário define L.
Exibir a matriz. 
Alterar os valores 1 da diagonal principal por 2.
Exibir a matriz.
*/
int main()
{
	int nic_i, nic_j, nic_lado;
	printf("Este programa criara uma Matriz Identidade.\nDigite o valor do lado da matriz: ");
	scanf("%d",&nic_lado);
	int nic_matriz[nic_i][nic_j];
	for(nic_i=0;nic_i<nic_lado;nic_i++){
		for(nic_j=0;nic_j<nic_lado;nic_j++){
			if(nic_i==nic_j){
				printf("%d\t",nic_matriz[nic_i][nic_j]=1);
			}
			else{
				printf("%d\t",nic_matriz[nic_i][nic_j]=0);
			}
		}
		printf("\n");
	}
	printf("\nAlternando os valores 1 por 2 da Matriz Identidade:\n");
	for(nic_i=0;nic_i<nic_lado;nic_i++){
		for(nic_j=0;nic_j<nic_lado;nic_j++){
			if(nic_i==nic_j){
				int nic_teste= nic_i%2;
				switch(nic_teste){
					case 0:
						printf("%d\t",nic_matriz[nic_i][nic_j]=1);
					break;
					case 1:
						printf("%d\t",nic_matriz[nic_i][nic_j]=2);
					break;
				}
			}
			else{
				printf("%d\t",nic_matriz[nic_i][nic_j]=0);
			}
		}
		printf("\n");
	}
	return 0;
}
