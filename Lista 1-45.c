#include <stdio.h>

void main (void){
	int b, l, n, e;
	
	printf("informe um numero para a base:");
	scanf("%d",&b);
	printf("\n\n");
	l=1;
	while (l<=b){
		e=1;
		while (e<=l-1){
			printf(" ");
			e++;
		}
		n=1;
		while (n<=b-l+1){
			printf("%d",b-l+1);
			n++;
		}
		
		printf("\n");
		l++;
	}
	
	
}
