#include <stdio.h>

void Maiusculo(int A1[],int A2[]){
	char c;
	
	FILE*fr,*fw;
	fr=fopen(A1,"r");
	fw=fopen(A2,"w");
	
	if(fr==NULL){
		perror(A2);
		exit(5);
	}
	if(fw==NULL){
		perror(A1);
		exit(6);
	}
	while(fscanf(fr,"%c",c)!=EOF){
		if(c>='a' && c<='z'){
			c=c-'a'+'A';
		}
		
	}
	fclose(fr);
	fclose(fw);
	
	
	
}
