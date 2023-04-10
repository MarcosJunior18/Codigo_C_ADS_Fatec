//1. Faça um programa que leia dois valores que o usuário entrar apresente:

//-	quantos números ímpares existem nesse intervalo
//-	quantos números pares existem nesse intervalo
//-	a média dos números pares. 


#include <stdio.h>

int main()
{
	int n1,n2, par,impar;
	par=0;
	impar=0;
	printf("Escreva um numero: \n");
	scanf("%d",&n1);
	printf("Escreva outro numero: \n");
	scanf("%d",&n2);
	while(n1<=n2){
		if ((n1%2)==0){
			par=par+1;
			 
		}else{
			impar=impar+1;
		}
		n1=n1+1;
	}
  printf("Qtde pares %d\n\n",par);
  printf("Qtde Impares %d\n\n",impar);	
	
	
	return 0;
}
