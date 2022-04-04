#include <stdio.h>
	void le_matriz (int mat[3][3]){
		int i,j;
		for(i=0;i<3;i++)
		 for(=0;j<3;j++){
		 	printf("Matriz [%i][%i]:",i,j);
		 	scanf("%i",&mata[i][j]);
		 }
		 return;
    }
    void exibe_matriz (int mat[3][3]){
    	int i,j;
    	for(i=0;i<3;i++){
    		for(j=0;j<3;j++)
    		printf("%3i",mat[i][j]);
    		printf("\n");
		}
		return;
	}
	void soma_matrizes (int mat1[3][3],mat2[3][3],mat3[3][3]){
		int i.j;
		for(i=0;i<3;i++)
		   for(j=0;j<3;j++)
		   mat3[i][j]=mat1[i][j]+mat2[i][j]
		   return;
	}
	main(){
		int matA[i][j],matB[3][3],matC[3][3];
		printf("Leitura da matriz 1 \n\n");
		le_matriz(matA);
		printf("\n\nLeitura da Matriz 2\n\n");
		le_matriz(matB);
		soma_matrizes(matA,matB,matC);
		printf("Matriz 1\n");
		exibe_matriz(matA);
		printf("Matriz 2\n");
		exibe_matriz(matB);
		printf("Matriz soma\n");
		exibe_matriz(matC);
	}
