#include <stdio.h>

int main()
{
	int valor1, valor2, valor3, soma, total, opcao;
	opcao=1;
	while(opcao>0){
		printf("Digite o valor obtido do dia: ");
		scanf("%d",&soma);
		printf("Informe o codigo para o valor segundo a tabela:\n '1'-limpeza\n '2'-alimentacao\n '3'-higiene\n caso tenha finalizado digite '0'\n");
		scanf("%d",&opcao);
		if(opcao>3){
			printf("Opcao invalida");
			
		}else if(opcao==1){
			valor1=soma+valor1;
			
		}else if(opcao==2){
			valor2=soma+valor2;
			
		}else if(opcao==3){
			valor3=soma+valor3;
		}
}


	return 0;
}
