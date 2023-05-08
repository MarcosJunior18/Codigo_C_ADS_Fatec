#include <stdio.h>
int main ()
{
	int v1,v2,i;
	float media, total;
	total=0;
	i=0;
	printf("Digite um numero.:");
	scanf("%d",&v1);
	printf("Digite outro numero.:");
	scanf("%d",&v2);
	while(v1<v2){
		if (v1%2 !=0){
			total=total+v1;
			i++;
		}
	 v1++;
	}
	media=total/i;
	printf("Total de impares.:     %.2f\n",total);
	printf("Quantidade de impares.: %d\n",i);
	printf("Media dos impares.:     %.2f",media);
	
	return 0;
}
