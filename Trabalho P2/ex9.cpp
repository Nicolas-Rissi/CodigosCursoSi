/*
Criar programa com funções próprias que crie uma matriz quadrada matx de lado A e seja preenchida com B+(C*i*j). 
A função deve exibir matx e retornar a soma dos elementos da diagonal principal.
 A, B e C são parâmetros de entrada definidos pelo usuário.
*/
#include "stdio.h"
int criaMatrizQ(int nic_va, int nic_vb, int nic_vc)
{
	int nic_soma_princ;
	int nic_i,nic_j;
	int nic_matriz[nic_i][nic_j];
	for(nic_i=0;nic_i<nic_va;nic_i++){
		for(nic_j=0;nic_j<nic_va;nic_j++){
			nic_matriz[nic_i][nic_j]=nic_vb+(nic_vc*nic_i*nic_j);
			printf("%d\t",nic_matriz[nic_i][nic_j]);
			if(nic_i==nic_j){
				nic_soma_princ=nic_soma_princ+nic_matriz[nic_i][nic_j];
			}
		}
		printf("\n");
	}
	return nic_soma_princ;	
}

int main()
{
	int nic_a, nic_b, nic_c,nic_soma_diag_princ;
	printf("Este prorama criara uma matriz quadrado de Lado A e preenchera com b+(c*i*j). Por favor insira:\n");
	printf("O numero de linhas e colunas: ");
	scanf("%d",&nic_a);
	printf("O valor para B: ");
	scanf("%d",&nic_b);
	printf("O valor de C: ");
	scanf("%d",&nic_c);
	nic_soma_diag_princ=criaMatrizQ(nic_a,nic_b,nic_c);
	printf("A soma dos elementos da diagonal principal eh: %d",nic_soma_diag_princ);
	return 0;
}
