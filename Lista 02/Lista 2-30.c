#include <stdio.h>

void RemoveNumericos(char Arq1[],char Arq2[]){
	char c;
	
	FILE*fr,*fw;
	fr=fopen(fr);
	fw=fopen(fw);
	
	if(fr==NULL){
		perror(Arq1);
		exit(2);
	}
	if(fw==NULL){
		perror(Arq2);
		exit(3);
	}
	while(fscanf(fr,"%c",&c)!= EOF){
		
		if(!(c>='0' && c<='9')){
			fprintf(fw,"%c",c);
		}
	}
	fclose(fr);
	fclose(fw);
	
	
}
