#include "stdio.h"
/*
Criar um vetor de 10 posições e preencher com 0. 
Alterar o valor de uma posição do vetor. 
Usuário indica a posiçãoa ser alterada e o novo valor.
*/
int main()
{
	int i, nic_pos, nic_resp;
	float nic_valor_novo;
	float nic_vetor[10];
	printf("Este e o vetor a ser analisado:\n");
	for(i=0;i<10;i++){
		nic_vetor[i]=0;
		printf("%d\t",nic_vetor[i]);
	}
	printf("\nDigite uma posição do vetor(de 1 a 10): ");
	scanf("%d",&nic_resp);
	nic_pos = nic_resp - 1;
	printf("Qual o novo valor? ");
	scanf("%f",&nic_valor_novo);
	
	printf("Este eh e novo vetor:\n");
	for(i=0;i<10;i++){
		if(i == nic_pos){
			nic_vetor[i] = nic_valor_novo;
			printf("%.1f\t",nic_vetor[i]);
		}
		else{
			nic_vetor[i] = 0;
			printf("%.1f\t",nic_vetor[i]);
		}
	}
	return 0;
}
