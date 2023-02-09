#include "stdio.h"//exibe os numeros impares de -70 ate 12
int main()
{
	int num=-70,teste;
	while(num<12)
	{
		teste=num%2;
		if(teste==1 or teste==-1)
		{
			printf("%i ",num);
		}
		num=num+1;
	}
	return 0;
}
