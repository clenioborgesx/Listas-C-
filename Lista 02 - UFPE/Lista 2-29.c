#include <stdio.h>

void CopiaLetras(char Arq1[],char Arq2[]){
	char c;
	
	FILE*fr,*fw;
	fr=fopen(Arq1,"r");
	fw=fopen(Arq2,"w");
	if(fr==NULL){
		perror(Arq1);
		exit(7);		
	}
	if(fw==NULL){
		perror(Arq2);
		exit(8);
	}	
	while(fscanf(fr,"%c",&c)!= EOF){
		if((c>='a' && c<='z') || (c>='A' && c<='Z')){
			fprintf(fw,"%c",c);
		}		
	}
	fclose(fr);
	fclose(fw);
}
