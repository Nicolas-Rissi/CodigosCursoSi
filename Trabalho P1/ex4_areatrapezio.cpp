#include "stdio.h"//programa que calcula a area de um trapezio regular area=((b+B)*h)/2

int main()
{
	float maior,menor,alt,area;
	printf("Digite o valor da base maior: ");
	scanf("%f",&maior);
	printf("Digite o valor da base menor: ");
	scanf("%f",&menor);
	printf("Digite a altura do trapezio: ");
	scanf("%f",&alt);
	area=((maior+menor)*alt)/2;
	printf("A area do trapezio e igual a %.2f",area);
	return 0;
}
