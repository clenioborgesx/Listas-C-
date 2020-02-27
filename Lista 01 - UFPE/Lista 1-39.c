
#include <stdio.h>
#include <math.h>

void main (void){
	
	int  i;
	float S;
	
	S=0.0;
	i=1;

	for(i=1;i<=10;i++){
		if(i%2!=0){
			S+=(float)1/i;
		}
		else{
			S-=(float)1/i;
		}
	}	
/*	while (i<=10){
		
		if (i%2!=0){
			S = S + (float)1/ i;
			
		}
		else{
			S = S -  (float)1/ i;
		}

		
		i++;
		
		
	}*/
	
	printf("S = %f",S);

}

