#include <stdio.h>
void le_vetor(int vet[20]){
	int i;
	for(i=0;i<20;i++){
		printf("Vetor [%i]:",i);
		scanf("%i",&vet[i]);
	}
	return;
}
void exibe_vetor(int vet[20]){
	int i;
	for(i=0;i<20;i++)
	printf("%i",&vet[i]);
	return;
}
int verifica(int vet[20],int x){
	int i,qtd=0;
	for(i=0;i<20;i++)
	if(vet[i]%x==0)
	qtd++;
	return qtd;
}
main(){
	int vetor[20],n;
	printf("Leitura do vetor \n\n");
	le_vetor(vetor);
	printf("\nvetor de n: ");
	scanf("%i",&n);
	printf("\n\nQtd de numeros do vetor divididos por %i = %i",n,verifica(vetor,n));
}
