#include <stdio.h>

void main (void){
	int i;
	float n;
	
	i=1;

	for(i=1;i<=10;i++){
		if (i%2!=0){
			n = i*3.0/(6*i - 2);
			printf("n%d = %f",i,n);
			printf("\n\n");
		}
		else {
			n = -i*3.0/(6*i - 2);
			printf("n%d = %f",i,n);
			printf("\n\n");
			
			
		}
	}
	printf("%f",n);
/*		
	while (i<=10){
		if (i%2!=0){
			n = i*3.0/(6*i - 2);
			printf("n%d = %f",i,n);
			printf("\n\n");
			
		}
		
		else {
			n = -i*3.0/(6*i - 2);
			printf("n%d = %f",i,n);
			printf("\n\n");
			
			
		}
		
		i++;
		
	}*/
	
	
	
	
	
	
}
