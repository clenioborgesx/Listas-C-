/* Aula 02 - Abstração de dados 
   Discente: Clênio Borges Barboza Filho 
   Matrícula: 20192EWBJ0221
   Docente: João Samarone Alves de Lima
   
   Código para encontrar o Fatorial de um número informado pelo usuário:*/
#include <stdio.h>
#include "Fatorial01.h"

int main (void){
		//Declaração das variáveis
	int numero, fatorial, i;
	//Imprime na tela a instrução ao usuário
	printf("Digite um numero inteiro e positivo:");
	//Recebe o valor informado pelo usuário
	scanf("%d",&numero);
	fatorial=fato(numero);
	printf("%d",fatorial);
	
}

