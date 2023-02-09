#include "stdio.h"//exibir os numeros pares de -9 a -34
int main()
{
	int num=-9,teste;
	while(num>=-34)
	{
		teste=num%2;
		if(teste==0)
		{
			printf("%i",num);
		}
		num=num-1;
	}
	return 0;
}
