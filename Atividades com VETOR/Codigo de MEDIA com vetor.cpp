//Leia um vetor de 6 posições contendo médias de aluno.
//Mostre quais são os alunos que possui média maior que a média geral do vetor.

#include <stdio.h>

int main()
{
float v[6];
int i;
float soma,media;
soma=0;

for(i=0;i<6;i++){
	printf("Digite o elemento %d:",i);
	scanf("%f",&v[i]);
}
for(i=0;i<6;i++){
	soma=soma+v[i];
	media=soma/6;
	printf("\n----------------\n");
	printf("A media geral eh: %.2f\n",media);
	printf("\n----------------\n");
	for (i=0;i<6;i++){
		if (media<v[i]){
			printf("Media maiores que a media geral: %.2f\n",v[i]);
		}
	}
}

return 0;
}
