#include <stdio.h>
#define DIM1 35
#define DIM2 7

void le_35 (int V[]){
	int i;
	for (i=0;i<DIM1; i++){
		printf("informe V[%d]:",i+1);
		scanf("%d",&V[i]);
	}
}
void separacao_v (int V[], int P[], int I[]){
	int i, n=0, m=0;
	for (i=0;i<DIM1; i++){
		if(V[i]%2==0){
			P[n]= V[i];
			n++;
		}
		else {
			I[m]= V[i];
			m++;
		}
		if (m==DIM2){
			m=0;
		}
		if (n==DIM2){
			n=0;
		}
	}
}
void main (void){
	int V[DIM1], P[DIM2],I[DIM2],i;
	
	le_35 (V);
	separacao_v (V, P, I);
	printf("\n\n");
	for (i=0;i<DIM2;i++){
		printf("%4d",P[i]);
	}
	printf("\n\n\n\n");
	for (i=0;i<DIM2;i++){
		printf("%4d",I[i]);
	}
	
}
