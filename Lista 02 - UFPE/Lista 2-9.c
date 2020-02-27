#include <stdio.h>
#define DIM 50

void leitura (float B[]){
	int i;
	for (i=0;i<DIM;i++){
		printf("Digite A[%d] em reais:",i+1);
		scanf("%f",&B[i]);	
	}	
}
float maior (float B[]) {
	int i;
	float m;
	for (i=0;i<DIM;i++){
		if (i==0){
			m= B[i];
		}
		if (m<B[i]){
			m= B[i];
		}
	}
	return (m);
}
void alteracao (float B[],float m){
	int i;
	for (i=0;i<DIM;i++){
		B[i]= B[i]/m;
	}	
}
void impressao (float B[]) {
	int i;
	for (i=0;i<DIM;i++){
	printf("%.2f ",B[i]);	
	}
}
void main (void){
	float m, B[DIM];
	leitura (B);
	m= maior (B);
	alteracao (B,m);
	impressao (B);
	
}
