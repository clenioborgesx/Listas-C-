#include <stdio.h>

void main (void){
	
	int n, fib, i, a, b;
	
	printf("digite o numero referente a posicao na sequencia:");
	scanf("%d",&n);
	
	if(n<=0){
		fib= 0;
	}
	if (n==1||n==2){
		fib=1;
	}
		i=2; 
		a=0;
		b=1;
		while (i<=n){
			fib = a + b;
			a= b;
			b= fib;

			i++;
		}
		
		printf("o termo %d da sequencia e %d.", n, fib);
		
		
	
}
