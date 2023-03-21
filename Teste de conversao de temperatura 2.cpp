#include <stdio.h>

int main()
{
	float f, C;
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f",&f);
	//Temperatura convertida em Celsius
	C=(f-32)*5/9;
	printf("A temperatura em Celsius: %.5f",C);
return 0;
}
