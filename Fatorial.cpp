#include <stdio.h>
int fatorial(int x){
	int i,f=1;
	for(i=2;i<=x;i++)
	f=f*i;
	return f;
}
main(){
	int a,i;
	for(i=1;i<=5;i++){
		do{
			printf("Numero");
			scanf("%i",&a);
		}
			while(a<0);
			printf("Fatorial de %i = %i",a,fatorial(a));
	}
}
