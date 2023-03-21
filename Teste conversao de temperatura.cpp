#include <stdio.h>

int main()
{
	float c, F;
	printf("Digite a temperatura em Celsius: ");
	scanf("%f",&c);
	//conversão de temperatura de Celsius para Fahrenheit
	F=(9*c+160)/5;
	printf("A tempera em Fahrenheit: %.1f",F);
return 0;
}
