#include<stdio.h>

int **LeMatrizTexto(char Arq[],int *linha, int *coluna){
	FILE *fr;
	int **M,i,j;
	
	fr=fopen(Arq,"r");
	if(fr==NULL){
		perror(Arq);
		exit(-1);
	}
	fscanf(fr,"%d %d",linha,coluna);
		
	M=(int**)malloc(sizeof(int*));
	for(i=0;i<*linha;i++){
		M[i]=(int*)malloc(*coluna * sizeof(int));
	}
	
	for(i=0;i<*linha;i++){
		for(j=0;j<*coluna;j++){
			fscanf(fr,%d,&M[i][j])
		}
	}
	
	fclose(fr);
	return(M);
