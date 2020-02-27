/* Aula 02 - Abstração de dados 
   Discente: Clênio Borges Barboza Filho 
   Matrícula: 20192EWBJ0221
   Docente: João Samarone Alves de Lima
   
   Exercicios exemplificando os ponteiros:*/
#include<stdio.h>

int main(){
    int x = 25;
    int *y = &x;
    *y=30;
    printf("Valor atual de x: %i\n", x);
    return 0;
}