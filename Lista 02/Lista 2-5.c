#include <stdio.h>
#define DIM 10

void vetor_AB (float A[], float B[]){
	int i;
	printf("matriz A\n\n");
	for(i=0;i<DIM;i++){
		printf("informe o valor %d:",i+1);
		scanf("%f", &A[i]);		
	}
	printf("\n\nmatriz B\n\n");
	for(i=0;i<DIM;i++){
		printf("informe o valor %d:",i+1);
		scanf("%f", &B[i]);		
	}
}
int opcoes (void){
	int op;
	printf("\n\n1- imprimir uniao de A com B\n");
	printf("2- Imprimir intersecao entre A e B\n\n");
	printf("informe a opcao escolhida:");
	scanf("%d", &op);
	printf("\n\n\n");
	return (op);
}
void op_1 (float A[], float B[] ){
	int i, j, k, parada;

	for (i=0;i<DIM;i++){
		printf("%.2f ",B[i]);
		parada=1;
		for(j=0; j<DIM && parada; j++){
			if (B[j]== A[i]){	
			parada=0;
			}
		}
		if(parada){
		printf("%.2f ",A[i]);	
		}
	}
}

void op_2 (float A[], float B[] ){
	int i, j, parada;
	for(i=0; i<DIM; i++){
		parada=1;
		for (j=0; j<DIM && parada; j++){
			if(A[i]== B[j]){
			printf("%.2f ",B[j]);	
			parada=0;
			}
		}
	}
	
}


void main (void){
	float A[DIM], B[DIM];
	int op;
	vetor_AB(A,B);
	op= opcoes();
	switch (op){
		case 1:
		op_1(A,B);
		break;
		case 2:
		op_2(A,B);
		break;
		default:
		printf("opcao invalida");
	}

}
