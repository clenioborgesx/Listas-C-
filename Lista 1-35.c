#include <stdio.h>

void main (void){
	int n, fatorial, i;
	
	printf("Digite um numero inteiro e positivo:");
	scanf("%d",&n);
	fatorial=1;
	i=n;
	while (i>0){
		
		fatorial= fatorial*i;
		
		i--;
	}
	for(i=n;i>0;i--){
		fat*=i;
	}
	
	printf("O fatorial de %d eh %d.",n ,fatorial);
	
	
}

