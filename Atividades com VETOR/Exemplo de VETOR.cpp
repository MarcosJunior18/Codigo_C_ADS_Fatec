#include <stdio.h>

int main()
{
	int v[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("Digite o elemento %d : ",i);
		scanf("%d",&v[i]);
	}
	printf("\n------------\n");
	for(i=0;i<5;i++)
	printf("Os valores sao: %d\n",v[i]);
	
	return 0;
}

