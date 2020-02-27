/* Aula 02 - Abstração de dados 
   Discente: Clênio Borges Barboza Filho 
   Matrícula: 20192EWBJ0221
   Docente: João Samarone Alves de Lima
   
   Código para encontrar o Fatorial de um número informado pelo usuário:*/
#include <stdio.h>

void main (void){
	//Declaração das variáveis
	int numero, fatorial, i, fat;
	//Imprime na tela a instrução ao usuário
	printf("Digite um numero inteiro e positivo:");
	//Recebe o valor informado pelo usuário
	scanf("%d",&numero);
	fatorial=1;
	i=numero;
	while (i>0){
		
		fatorial= fatorial*i;
		
		i--;
	}
	for(i=numero;i>0;i--){
		fat*=i;
	}
	
	printf("O fatorial de %d eh %d.",numero ,fatorial);
	
	
}

