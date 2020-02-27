#include<stdio.h>
#include<stdlib.h>

void GravaMatrizBinario(char Arq[],int **A,int linha, int coluna){
	FILE *fw;
	int i,j;
	
	fw=fopen(Arq,"wb");
	if(fw==NULL){
		perror(Arq);
		exit(1);
	}
	fwrite(linha,sizeof(int),1,fw);
	fwrite(coluna,sizeof(int),1,fw);
	
	for(i=0;i<linha;i++){
		fwrite(A[i],sizeof(int),coluna,fw);
	}
	
	fclose(fw);
}
