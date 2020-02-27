/* Aula 02 - Abstração de dados 
   Discente: Clênio Borges Barboza Filho 
   Matrícula: 20192EWBJ0221
   Docente: João Samarone Alves de Lima
   
   Código para receber dados do user e informar se está acima do peso:*/
#include <stdio.h>
#include "papessoal.h"
#define altmax 225

int main (void){
    pa pessoal;
    printf("Informe a altura em cm: ");
    scanf("%d",&pessoal.altura);
    printf("Informe o peso em kg: ");
    scanf("%d",&pessoal.peso);
    printf("Peso: %i, Altura: %i. ",pessoal.peso,pessoal.altura);
    if (pessoal.altura>altmax){
        printf("Altura acima da maxima.\n");
    }else{
        printf("Altura abaixo da maxima.\n");
    }
    return 0;
}

    /*pessoal.peso=80;
    pessoal.altura=185;*/