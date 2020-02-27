#include <stdio.h>

void main (void) {
	
	int l, b, t1, t2, c;
	
	printf("informe um numero para a base: ");
	scanf("%d",&b);
	printf("\n\n");
	l=1;
	while (l<=b){
		t1=1;
		while (t1<=l-1){
			printf("-");
			t1++;
		}
		c=1;
		while (c==1){
			printf("+");
			c++;
		}
		t2=1;
		while (t2<= b-l){
			printf("-");
			t2++;
		}	
	printf("\n");	
	l++;	
	}
	
}
