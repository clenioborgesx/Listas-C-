#include <stdio.h>

void main (void){
	int i, j, n, mult, k, multi, multj, aux;
	
	printf("insira o primeiro divisor:");
	scanf("%d",&i);
	printf("insira o segundo divisor:");
	scanf("%d",&j);
	printf("insira o numero de multiplos:");
	scanf("%d",&n);
	
	if(i>j){
		aux= i;
		i=j;
		j= aux;
	}

	for(mult=0, multi=0 ,multj=0, k=1; k<=n; k++){
	 if(k==1){
	 	printf("\n %d \n",mult);
	 }
	 
	 if (k%2==0){
	 	multi=multi + i;
	 	
	 	if(multj!= multi){
	 		printf("\n %d \n",multi);
	    }
	    else {
	    	multi+=i;
	    	printf("\n %d \n",multi);
		}
	 	
	 }

	 if (k%2!=0 && k!=1){
	 	multj=multj + j;
	 	if(multj!= multi){
	 		printf("\n %d \n",multj);
	    }
	    else {
	    	multi+=j;
	    	printf("\n %d \n",multj);
		}
	 	
	 }
			
			
	}
	
	
}
