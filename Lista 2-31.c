#include <stdlib.h>
#include <stdio.h>

void CopiaMultiplos (char Arq1[], char Arq2[], int i, int j){
	FILE *fr, *fw;
	char c;
	fr= fopen(Arq1,"r");
	if (fr==NULL){
		perror (Arq1);
		exit (2);
	}
	fw= fopen(Arq2,"w");
	if (fw==NULL){
		perror (Arq2);
		exit (3);
	}
	while(fscanf(fr,"%c",&c)!= EOF){
		if (c%i==0||c%j==0){
			fprintf(fw,"%c",c);
		}
	}
	fclose(fr);
	fclose(fw);
}
int main (int Argc, char *Argv[]){
	int i=2, j=3;
	if (Argc!= 3){
		printf("Uso: %s <arquivoentrada> <arquivosaida>.",Argv[0]);
		return(1);
	}
	CopiaMultiplos (Argv[1],Argv[2],i,j);
	return(0);
}
