#include <stdio.h>
#define DIM 2

void le_matriz (int A[][DIM]){
	int i, j;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			printf("A[%d][%d]:",i+1, j+1);
			scanf ("%d",&A[i][j]);
		}
	}
}
void matriz_condensada (int A[][DIM], int M [][3]){
	int i, j, k=0;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			if (A[i][j]!= 0){
				M[k][0]= A[i][j];
				M[k][1]= i;
				M[k][2]= j;
				k++;
			}
			
		}
		
	}		
}
void impressao (int M[][3]){
	int i, j;
	for (i=0;i<DIM;i++){
		for (j=0;j<3;j++){
			printf("%d ",M[i][j]);
			
		}
		printf("\n");
	}
}
void main (void){
	int A[DIM][DIM], M [DIM][3];
	
	le_matriz(A);
	matriz_condensada(A,M);
	printf("\n\n");
	impressao(M);

}

