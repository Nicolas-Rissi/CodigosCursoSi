#include "stdio.h"
int main()
{
	char letra,invert;
	while(letra<65 or letra>90 and letra<97 or letra>122)
	{
		printf("Digite uma letra: ");
		scanf(" %c",&letra);	
	}
	if(letra>=65 and letra<=90)
	{
		printf("A letra %c eh maiuscula.\n",letra);
		invert=letra+32;
		printf("O contrario dela eh %c.",invert);
	}
	else
	{
		printf("A letra %c eh minuscula.\n",letra);
		invert=letra-32;
		printf("O contrario dela eh %c.",invert);
	}	
	return 0;
}
