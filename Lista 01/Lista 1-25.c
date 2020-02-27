#include <stdio.h>

void main (void){
	
	float media;
	int n, soma, i;
	
	soma= 0;
	i= 0;
	media=0;
	
	do{
		printf("digite um numero:");
		scanf("%d",&n);
		
		while (n>0 && n%3==0){
			i= i+1;
			soma= soma + n;
			media= (float) soma/ i;
			n++;
		
		}
	} while (n>=0);
	printf("a media e %f",media);
}

