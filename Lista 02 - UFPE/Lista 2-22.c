#include <stdio.h>

int compara_texto (char texto1[], char texto2[]){
	int i,soma;
	for (i=0;texto1[i]==texto2[i] && texto1[i]!='\0';i++){
		soma= texto1[i]-texto2[i];
	}
return (soma);
}
	
int copia_texto (char destino [], char fonte []){
	int i;
	for (i=0;fonte[i]!='\0';i++){
	
		destino [i]= fonte [i];
	}
	destino[i]='\0';
	return (i);
}

int concatena_texto (char destino[], char fonte []){
	int i,j;
	for (i=0;destino[i]!='\0';i++);
	for(j=0;fonte[j]!='\0';j++,i++){
		destino[i]=fonte[j];
	}
		destino[i]='\0';
		return (j);
	}
	
	
void inverte_texto (char texto_original[], char texto_invertido[]){
	int i,j;
	for (i=0;texto_original[i]!='\0';i++);
	for (j=0;i>=0;j++,i--){
		texto_invertido[j]=texto_original[i];
		printf("%c",texto_invertido[j]);
		
	}
	texto_invertido[i]='\0';
	printf("%c",texto_invertido[i]);
	
}

int numero_ocorrencia_caracter (char texto[],char caracter){
	int i,c=0;
	for (i=0;texto[i]!='\0';i++){
		if(texto[i]==caracter){
			c++;
		}
	}
	return (c);
}


int prefixo (char s[], char t[]){
	int i;
	for (i=0;t[i]!='\0';i++){
		if(t[i]!=s[i]){
			return 0;
		}
	}
	return 1;
}


int sufixo (char s[], char t[]){
	int i,j;
	for(i=0;s[i]!='\0';i++);
	for(j=0;t[j]!='\0';j++);
	for(	;j>=0;j--,i--){
		if(s[i]!=t[j]){
			return 0;
		}
	}
	return 1;
}
	


int palindrome (char texto []){
	int i,j;
	for(i=0;texto[i]!='\0';i++);
	for(j=0;j<i/2;j++){
		if(texto[i]!=texto[i-j-1]);
			return 0;
		}
	return 1;
}
void minuscula (char texto []){
	int i;
	for (i=0;texto[i]!='\0';i++){
		if (texto[i]>='A' && texto[i]<='Z')
		texto[i]+=32;
	}
}

void maiuscula (char texto[]){
	int i;
	for (i=0;texto[i]!='\0';i++){
		if (texto[i]>='a' && texto[i]<='z')
		texto[i]-=32;
	}
}

int eh_numero (char cadeia []){
	int i;
	for (i=0;cadeia[i]!='\0';i++){
		if (!cadeia[i]>='0' && !cadeia[i]<='9')
		return 0;
		
	}
	return 1;
}

int inteiro (char cadeia[]){

}

int sub (char cadeia1[], char cadeia2[]){
	
}

int qpalavras (char cadeia []){
	int i,c=0;
	for (i=0;cadeia[i]!='\0';i++){
		if (cadeia[i]==' ' || cadeia[i]==',')
		c++;
	}
	c++;
	return (c);
}

int qvogais (char cadeia []){
	int i,c=0;
	for(i=0;cadeia[i]!='\0';i++){
		if (cadeia[i]>='a' && cadeia[i]<='z'){
			cadeia[i]-=32;
		}
		if (cadeia[i]=='A' || cadeia[i]=='E' || cadeia[i]=='I'
		|| cadeia[i]=='O' || cadeia[i]=='U')
			c++;
		}
	return (c);
}


int qconsoantes (char cadeia []){
	int i,c=0;
	for (i=0;cadeia[i]!='\0';i++){
		if (cadeia[i]>='a' && cadeia[i]<='z'){
			cadeia[i]-=32;
		}
		if(cadeia[i]!='A'|| cadeia[i]!='E'|| cadeia[i]!='I' || cadeia[i]!='O' || cadeia[i]!='U')
		c++;
}
return (c);
}

void ocorrencia_letras (char cadeia[]){

	int i,j,cont=0;
	for(i=0;cadeia[i]!='\0';i++){
		if((cadeia[i]>='a' && cadeia[i]<='z') || (cadeia[i]>='A' && cadeia[i]<='Z')){
			for(j=0;cadeia[j]!= '\0';j++){
			if(cadeia[i]==cadeia[j]){
				cont++;
				}
				printf("A letra %c aparece %d na cadeia",cadeia[i],cont);
			
		}
		
	}
}
}

void inverte_palavras_texto (char texto_original[], char texto_alterado[]){
	int i,j;
	for (i=0;texto_original[i]!='\0';i++);
	for (j=0;texto_alterado[j]!='\0';j++,i--){
	
	while (texto_original[i]!=' ' || texto_original[i]!=','){
			texto_alterado[j]=texto_original[i];
	}
}
texto_alterado[j]='\0';
}


  













