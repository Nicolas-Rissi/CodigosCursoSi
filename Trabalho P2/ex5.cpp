#include "stdio.h"
/*
Elabore um programa que seja capaz de calculara médiade dois vetores (índice por índice) A e B e o resultado deverá ser armazenado em um vetor C. 
O programa deverá solicitar os valores dos vetores A e B e exibir o resultadodo vetor C. 
Exibir os três vetores lado a lado ao final.
*/
int main()
{
	int nic_pos, nic_i;
	printf("Digite q quantidade de posicoes que terao os vetores: ");
	scanf("%d",&nic_pos);
	float nic_vetorA[nic_pos];
	float nic_vetorB[nic_pos];
	float nic_vetorC[nic_pos];
	for(nic_i=0;nic_i<nic_pos;nic_i++){
		printf("Digite um valor para o vetor A: ");
		scanf("%f",&nic_vetorA[nic_i]);
		printf("Digite um valor para o vetor B: ");
		scanf("%f",&nic_vetorB[nic_i]);
		nic_vetorC[nic_i]=(nic_vetorA[nic_i]+nic_vetorB[nic_i])/2;
	}
	printf("Esses sao os vetores:\n");
	printf("Vetor A:     ");
	for(nic_i=0;nic_i<nic_pos;nic_i++){
		printf("%.2f\t",nic_vetorA[nic_i]);	
	}
	printf("\nVetor B:     ");
	for(nic_i=0;nic_i<nic_pos;nic_i++){
		printf("%.2f\t",nic_vetorB[nic_i]);
	}
	printf("\nVetor Media: ");
	for(nic_i=0;nic_i<nic_pos;nic_i++){
		printf("%.2f\t",nic_vetorC[nic_i]);
	}
	return 0;
}
