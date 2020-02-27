#include <stdio.h>
#include <math.h>

void main (void){
	int n, i;
	float raiz;
	i=0;
	
	do {
		printf("digite um numero inteiro positivo:");
		scanf("%d",&n);
		printf("\n\n");
		raiz = sqrt(n);
		printf("a raiz quadrada de %d e %f.",n, raiz);
		i++;
		printf("\n\n");
	}while(i<10);
}
