//1. Fa�a um programa que leia dois valores que o usu�rio entrar apresente:

//-	quantos n�meros �mpares existem nesse intervalo
//-	quantos n�meros pares existem nesse intervalo
//-	a m�dia dos n�meros pares. 

//bibilioteca padrao para entrada e saida
#include <stdio.h>

int main()

{
	//declara��o dasd variaves
	int n1,n2, par,impar;
	
	//inicializa��o das variaveis
	par=0;
	impar=0;
	
	//entrada de dados do usuario imprimindo mensagem na tela
	printf("Escreva um numero: \n");
	scanf("%d",&n1);
	printf("Escreva outro numero: \n");
	scanf("%d",&n2);
	
	//la�o de repeti��o processando para rodar o codigo enquanto o primeiro numero for menor ou igul ao segundo digitado
	while(n1<=n2){
		// se o numero dividio por 2 tiver seu resto 0 entao ele � par
		if ((n1%2)==0){
			//a variavel par recebe os numeros pares do intervalo escolhido pelo usuario
			par=par+1;
			 
		}else{
			//a variavel impar recebe os numeros impares do intervalo escolhido pelo usuario
			impar=impar+1;
		}
		//incremendo do la�o de repeti��o
		n1=n1+1;
	}
	//saida com os dados processados 
  printf("Qtde pares %d\n\n",par);
  printf("Qtde Impares %d\n\n",impar);	
	
	// retorno do valor da fun��o principaal
	return 0;
}
