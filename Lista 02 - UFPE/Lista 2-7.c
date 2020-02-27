#include <stdio.h>
#define DIM 10


void leitura (int A[]){
	int i;
	for (i=0;i<DIM;i++){
		printf("Digite A[%d]:",i+1);
		scanf("%d",&A[i]);	
	}	
}

void compactacao (int A[]) {
	int i,j,n=0;
	for (i=0;i<DIM;i++){
		if (A[i]==0){
			n++;
		}	
	}
	
	for (j=0,i=0;j<DIM-n;i++,j++){
	  while (A[i]==0){
	  	i++;
	  }
	A[j]=A[i];
	printf("%d ",A[j]);
	}
}

void main (void){
	int A[DIM];
	leitura(A);
	compactacao(A);	
	
}
