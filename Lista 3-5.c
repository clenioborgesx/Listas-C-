#include<stdio.h>
#include<stdlib.h>

int **LeMatrizBinario(char Arq[]),int *linha, int *coluna){
	FILE *fr;
	int **M;
	int i,j;
	
	fr=fopen(Arq,"rb");
	if(fr==NULL){
		perror(Arq);
		exit(1);
	}
	
	fread(lin,sizeof(int),1,fr);
	fread(col,sizeof(int),1,fr);
	M=(int**)malloc(*linha * sizeof(int*);
	for(i=0;i<*linha;i++){
		M[i]=(int*)malloc(*coluna * sizeof(int));
	}
	for(i=0,i<*linha;i++){
		fread(M[i],sizeof(int),*coluna,fr);
	}
	
	fclose(fr);
	return(M);
}
