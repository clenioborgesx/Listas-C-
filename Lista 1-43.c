#include <stdio.h>

void main (void){
	int l, b, n, k;
	
	printf("informe um numero para a base:");
	scanf("%d",&b);
	k=1;
	l=1;
	while (l<=b){
		n=1;
		while (n<=l){
			
			printf("%4d",k);
			k++;
			n++;
		}
		
		
		printf("\n");
		l++;
	}
	
}
