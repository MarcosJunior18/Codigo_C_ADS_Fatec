#include <stdio.h>

// Fa�a um programa que leia um vetor inteiro de 5 posi��es. 
// Imprima somente os n�meros pares desse vetor e o �ndice que eles se encontram.

int main()
{
	int v[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("Digite o elemento %d : ",i);
		scanf("%d",&v[i]);
	}
	printf("\n------------\n");
	for(i=0;i<5;i++)
	// "%2" resto (para fazer impar ou par)
	if ((v[i]%2)==0){
	    printf("O indice %d possui o elemento %d que eh par\n",i,v[i]);	
}
	return 0;
}
