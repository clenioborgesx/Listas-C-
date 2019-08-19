#include <stdio.h>

void main (void){
	int n, fat, i;
	
	printf("Digite um numero inteiro e positivo:");
	scanf("%d",&n);
	fat=1;
/*	i=n;
	while (i>0){
		
		fat= fat*i;
		
		i--;
	}*/
	for(i=n;i>0;i--){
		fat*=i;
	}
	
	printf("O fatorial de %d eh %d.",n ,fat);
	
	
}
