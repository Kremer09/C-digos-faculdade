#include <stdio.h>
int potencia(int x,int y){
	int i,p=1;
	for(i=1;i<=4;i++)
	p=p*x;
	return p;
}
main(){
	int a,b;
	printf("A");
	scanf("%i",&a);
	printf("B");
	scanf("%i",&b);
	printf("O valor de %i elevado a %i = %i",a,b,potencia(a,b));
}
