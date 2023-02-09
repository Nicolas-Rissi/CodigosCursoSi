#include "stdio.h"//programa que recebe um num int e calcula o sucessor e o antecessor.
int main()
{
	int num,ant,suce;
	printf("Digite um numero inteiro qualquer: ");
	scanf("%d",&num);
	ant=num-1;
	suce=num+1;
	printf("O antecessor do numero eh %d e o sucessor eh %d",ant,suce);
	return 0;
}
