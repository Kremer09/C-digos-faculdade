#include <stdio.h>
main(){
	int m1[10][10],m2[10][10],m3[10][10],m4[10][10],i,j,k,l1,l2,c1,c2;
	
	//leitura da ordem da matriz 1;
	do{
		printf("\nQtd de linhas da matriz 1: ");
		scanf("%i",&l1);
	} while((l1<2)||(l1>10));
	do{
		printf("Qtd de colunas da matriz 1: ");
		scanf("%i",&c1);
	} while((c1<2)||(c1>10));
	
	//leitura da matriz 1;
	for(i=0;i<l1;i++)
	   for(j=0;j<c1;j++){
	   	 printf("Matriz 1 [%i][%i]:",i,j);
	   	 scanf("%i",&m1[i][j]);
	   }
	   
	//leitura da ordem da matriz 2;
	do{
		printf("\nQtd de linhas da matriz 2: ");
		scanf("%i",&l2);
	} while((l2<2)||(l2>10));
	do{
		printf("Qtd de colunas da matriz 2: ");
		scanf("%i",&c2);
	} while((c2<2)||(c2>10));
	
	//leitura da matriz 2;
	for(i=0;i<l2;i++)
	   for(j=0;j<c2;j++){
	   	 printf("Matriz 2 [%i][%i]:",i,j);
	   	 scanf("%i",&m2[i][j]);
	   }
	//somando as matrizes;
	if((l1==l2)&&(c1==c2)){
	 for(i=0;i<l1;i++){
	   for(j=0;j<c1;j++){
	   	 m3[i][j]=m1[i][j]+m2[i][j];
	   }
     }
    printf("Matriz soma\n");
    for(i=0;i<l1;i++)
       printf("|");
    for(j=0;j<c1;j++) printf("%4i",m3[i][j]);
       printf("\n");
	}
    else printf("Nao e possivel somar");
    
    //multiplicação das matrizes;
    if(c1==l2){
    	for(i=0;i<l1;i++)
    	for(j=0;j<c2;j++)
    	  m4[i][j]=0;
    	  for(i=0;i<l1;i++)
    	    for(k=0;k<c1;k++)
    	    m4[i][j]=m4[i][j]+m1[i][k]*m2[k][j];
    	    printf("\n\nMatriz multiplicada: ");
    	    for(i=0;i<l1;i++){
    	    for(j=0;j<c2;j++)
    	        printf("%3i",m4[i][j]);
    	        printf("\n");
	    }
     }
	else printf("Nao ha como multiplicar");
}
