//2. Faça um programa que calcule a tabuada de um numero. Apresente essa mesma tabuada também invertida.

#include <stdio.h>

int main()
{
	int i,t,n;
	i=1;
	printf("Digite um numero: ");
	scanf("%d",&n);
	while (i<=10){
		t=n*i;
		printf("%d * %d = %d\n",n,i,t);
		i=i+1;
	}
	printf("-----------------------------------\n");
	    i=10;
		while (i>0){
		t=n*i;
		printf("%d * %d = %d\n",n,i,t);
		i=i-1;
	}
return 0;
}
