#include<stdio.h>

void GravaMatrizTexto(char Arq[],int **A,int linha,int coluna){
	FILE *fw;
	int i,j;
	f=fopen(Arq, "w");
	if(f==NULL){
		perror(Arq);
		exit(-1);
	}
	fprintf(fw,"%d",linha, coluna);
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			fprintf(fw,"%d",A[i][j]);
		}
		fprintf(fw,"\n");
	}
	fclose(fw);
}
