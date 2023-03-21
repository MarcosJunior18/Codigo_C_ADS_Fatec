#include <stdio.h>

int main()
{
	float n1, n2, md;
	printf("Digite a nota 1: ");
	scanf("%f",&n1);
	printf("Digite a nota 2: ");
	scanf("%f",&n2);
	md=(n1+n2)/2;
	printf("A media eh: %.2f\n\n",md);
	if(md>=6)
	    printf("APROVADO!\n");
	else
	    printf("REPROVADO!\n");
	return 0;
}
