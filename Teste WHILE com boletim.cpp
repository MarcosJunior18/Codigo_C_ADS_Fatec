//Escreva um programa para ler 2 notas de um aluno, calcular e imprimer a média final.
//Logo após escrever a mensagem "Calcular a média de outro aluno [1]Sim [0]Não?" e solicitar uma resposta. 
//Se a resposta for "1", o programa deve ser executado novamente, caso contrário deve ser encerrado imprimindo a quantidade de alunos aprovadados. (media >= 6.0)

#include <stdio.h>

int main()
{
	int i,cont;
	float n1,n2,md;
	cont=0;
	i=1;
	while(i=1){
		printf("Digite a primeira nota: ");
		scanf("%f",&n1);
		printf("Digite a segunda nota: ");
		scanf("%f",&n2);
		md=(n1+n2)/2;
		printf("Media final: %.2f\n\n",md);
		if(md>=6)
		    cont=cont+1;
		    printf("Deseja adicionar mais uma nota? [1]SIM - [0]NAO\n");
		    scanf("%d",&i);
}
    printf("Total de aprovados: %d", cont);
		    
	
	return 0;
}
