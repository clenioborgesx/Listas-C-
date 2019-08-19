#include <stdio.h>

void main (void){
	
	int i;
	float H, a;
//	i=1;
	H=0.0;
	a=1.0;
	
//	while (i<=50){
		
//		H= H + (a/i);
//		a= a + 2.0;
//		i++;
//	}
	for(i=1;i<=50;i++){
		H += (a/i);
		a+=2.0;
	}
	
	printf("H = %f",H);
}
