#include <stdio.h>
int main()
{
	int qt;
	float total;
	printf("Digite a quantidade de macas que voce quer: ");
	scanf("%d",&qt);
	if(qt>=0.12){
		total= 0.25*qt;
	}else{
		total=0.30*qt;
	}
	printf("O total da compra foi: %2.f\n",total);
	return 0;
}
