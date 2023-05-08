#include <stdio.h>
int main ()
{
int op;
float v1,v2,v3,tt,v;
v1=0;
v2=0;
v3=0;
op=-1;
while( op !=0){
	printf("digite 1-Limpeza -- 2-Alimentacao -- 3-Higiene --- 0-finaliza--->");
	scanf("%d",&op);
	printf("Digite o Valor -- R$");
	scanf("%f", &v);
	if (op==1)
		v1=v1+v;
	if (op==2)
		v2=v2+v;
	if (op==3)
		v3=v3+v;
}
	printf("\nLimpeza.:      %.2f\n",v1);
	printf("Alimentacao.:  %.2f\n",v2);
	printf("Higiene.:      %.2f\n",v3);
	tt=v1+v2+v3;
	printf("Total de vendas no dia.: %.2f",tt);
	return 0;
}
