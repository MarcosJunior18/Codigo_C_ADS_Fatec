//1. Faça um programa que leia dois valores que o usuário entrar apresente:

//-	quantos números ímpares existem nesse intervalo
//-	quantos números pares existem nesse intervalo
//-	a média dos números pares. 

//bibilioteca padrao para entrada e saida
#include <stdio.h>

int main()

{
	//declaração dasd variaves
	int n1,n2, par,impar;
	
	//inicialização das variaveis
	par=0;
	impar=0;
	
	//entrada de dados do usuario imprimindo mensagem na tela
	printf("Escreva um numero: \n");
	scanf("%d",&n1);
	printf("Escreva outro numero: \n");
	scanf("%d",&n2);
	
	//laço de repetição processando para rodar o codigo enquanto o primeiro numero for menor ou igul ao segundo digitado
	while(n1<=n2){
		// se o numero dividio por 2 tiver seu resto 0 entao ele é par
		if ((n1%2)==0){
			//a variavel par recebe os numeros pares do intervalo escolhido pelo usuario
			par=par+1;
			 
		}else{
			//a variavel impar recebe os numeros impares do intervalo escolhido pelo usuario
			impar=impar+1;
		}
		//incremendo do laço de repetição
		n1=n1+1;
	}
	//saida com os dados processados 
  printf("Qtde pares %d\n\n",par);
  printf("Qtde Impares %d\n\n",impar);	
	
	// retorno do valor da função principaal
	return 0;
}
