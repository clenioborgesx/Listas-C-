#include <stdio.h>

void main (void){
	float n, s;
	int i=2;
	
	printf("digite um numero:");
	scanf("%f",&n);
	
	while (i<52){
		
		s= 2*(2*i-1)/(n+(2*i-1));
		
		printf("\n\n s%d = %f\n\n", i-1, s);
		
		i++;
	}
	
	
}
