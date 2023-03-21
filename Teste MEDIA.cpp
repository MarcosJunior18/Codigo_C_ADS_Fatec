//Escreva um programa que leia as notas de duas avaliações normais, e a nota da avaliação optativa. 
//Caso o aluno não tenha feito a optativa deve ser fornecido o valor -1. 
//Calcular a media do semestre, considerando que a prova optativa substitui a nota entre as duas primeiras opções. 
//Escrever a média e as mensagens que indique se o aluno foi aprovado, reprovado ou esta em exame, de acordo com as informações abaixo:
// Aprovado(MÉDIA>6), Reprovado(MÉDIA<3) e Exame(MÉDIA<=3).

#include <stdio.h>

int main()
{
	float n1,n2,OP,MD;
	printf("Media do aluno\n\n");
	printf("Escreva a primeira nota: \n");
	scanf("%f",&n1);
	printf("Agora escreva a segunda nota: \n");
	scanf("%f",&n2);
	printf("CASO tenha feito a prova optativa, escreva sua nota, caso contrario, digite -1: \n");
	scanf("%f",&OP);
	if (OP<0){
		MD=(n1+n2)/2;
}   else if(n1<n2){
        MD=(OP+n2)/2; 
}	else{
        MD=(n1+OP)/2;
	}

	printf("\n--------------------------------\n");
	printf("\nSua notas sao: \n");
	printf("P1: %2.f\n\n",n1);
	printf("P2: %2.f\n\n",n2);
	printf("OP: %2.f\n\n",OP);
	printf("Sua media final eh: %.2f\n",MD);
	if (MD>=6){
		printf("A P R O V A D O");
}   else if(MD<3){
		printf("R E P R O V A D O");
}else{
		printf("E X A M E");
	}
	return 0;
}
