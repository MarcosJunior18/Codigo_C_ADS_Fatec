#include <stdio.h>
int main()
{
	int i,t,n;
	i=0;
	printf("Digite um numero: ");
	scanf("%d",&n);
	while (i<=10){
		t=n*i;
		printf("%d * %d = %d\n",n,i,t);
		i=i+1;
	}

return 0;
}
