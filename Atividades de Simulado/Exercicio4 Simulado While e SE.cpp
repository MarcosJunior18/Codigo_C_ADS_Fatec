#include <stdio.h>

int main()
{
	int valor1,valor2;
	printf("Digite o primeiro valor: ");
	scanf("%d",&valor1);
	printf("Digite o segundo valor: ");
	scanf("%d",&valor2);
	printf("--------------------------------\n\n");
	if (valor1>valor2){
		printf("Valor 1: %d",valor1);
		printf(" eh maior!\n");
	}else{
		printf("Valor 2: %d",valor2);
		printf(" eh maior!\n");
	}
	
	return 0;
}
