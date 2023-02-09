#include "stdio.h"//programa que converte garus C em F (celsius*1.8)+32
int main()
{
	float fah,cel;
	printf("Qual a temperatura em Celsius? ");
	scanf("%f",&cel);
	fah=(cel*1.8)+32;
	printf("A temperatura em Fahrenheit eh %.2f",fah);
	return 0;
}
