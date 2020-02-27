#include <stdio.h>
#include <stdlib.h>

void criptografia (char Arq1[], char Arq2[]){
	int i,j;
	FILE *fr, *fw;
	char c;
	
	fr= fopen(Arq1,"r");
	if (fr==NULL){
		perror(Arq1);
		exit(2);
	}
	fw= fopen(Arq2,"w");
	if (fr==NULL){
		perror(Arq2);
		exit(3);
	}
	while (fscanf(fr,"%c",&c)!=EOF){
		if (c<= 124){
			c+=2;
		}
		else{
			c= 32+(c-125);
		}
		fprintf(fw,"%c",c);
	}
	fclose(fr);
	fclose(fw);
}

int main (int Argc, char *Argv[]){
	
	if (Argc!=3){
		printf("Uso: %s <arquivoentrada> <arquivosaida>.",Argv[0]);
		return(1);
	}
	criptografia (Argv[1],Argv[2]);
	return(0);
}
