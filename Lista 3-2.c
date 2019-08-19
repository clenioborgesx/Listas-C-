#include<stdio.h>

int**AlocaMatriz(int linha, int coluna){
	int **M;
	int i,j;
	M=(int**)malloc(sizeof(int*));
	for(i=0;i<linha;i++){
		M[i]=(int*)malloc(coluna * sizeof(int));
	}
	return(M);
}
