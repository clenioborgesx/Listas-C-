#include <stdio.h>
void main (void){
	int n, par, impar, j;
	float pp,pi;
	j=0;
	par=0;
	do{
		printf(" digite um numero:");
		scanf("%d",&n);
		j++;
		if (n!= 0){
			
			if (n%2==0){
			par= par + 1;
			}
	    }
	} while( n!=0);
	
	impar= j - par -1;
	
	// o numero 0 nao deve ser inserido no numerador do percentual
	
	pp= (float)par/j;
	pi= (float) impar/j;
	
	printf("o percentual de numeros pares e impares lido e, respectivamente, %.2f e %.2f.",pp,pi);
   
}
