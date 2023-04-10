#include<stdio.h>

int main (){
	 // declaracao das variaveis
	 
	 int candi1, candi2, candi3, candi4, nulo, branco, opcao;
	 
	 printf("URNA ELETRONICA - ESCOLHA O CAMINHO DO SEU VOTO: \n");
	 printf("1 - CANDIDATO JOAO\n2 - CANDIDATO HENRIQUE\n3 - CANDIDATO MESSI\n4 - CANDIDATO CRISTIANO\n5 - NULO  \n6 - BRANCO \n");
	 scanf("%d", &opcao);
	
	while(opcao != 0){
		
		if(opcao == 1){
			candi1 ++;	
		} else if(opcao ==2){
			candi2 ++;
		} else if(opcao ==3){
			candi3 ++;
		} else if (opcao ==4){
			candi4 ++;
		} else if (opcao ==5){
			nulo ++;
		} else {
			branco ++;
		}
		
		printf("URNA ELETRONICA - ESCOLHA O CAMINHO DO SEU VOTO: \n");
		printf("1 - CANDIDATO JOAO\n2 - CANDIDATO HENRIQUE\n3 - CANDIDATO MESSI\n4 - CANDIDATO CRISTIANO\n5 - NULO  \n6 - BRANCO \n");
		scanf("%d", &opcao);
	}
	 printf("\n TOTAL DE VOTOS: \n ");
	printf("\nCandidado 1: %d votos ", candi1);
	printf("\nCandidado 2: %d votos  ", candi2);
	printf("\nCandidado 3: %d votos  ", candi3);
	printf("\nCandidado 4: %d votos  ", candi4);
    printf("\nNulos: %d votos ", nulo);
    printf("\nBrancos: %d votos\n  ", branco);
    
	return 0;
}


