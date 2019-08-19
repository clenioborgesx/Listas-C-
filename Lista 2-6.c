#include <stdio.h>
#define DIM 5

void leitura (int v[]){
	int i;
	for (i=0;i<DIM;i++){
		printf("Digite o numero que ocupa a posicao %d:",i+1);
		scanf("%d",&v[i]);	
	}	
}
void maior_posicao (int v[]){
	int i,n,maior;
	for (i=0;i<DIM;i++){
		if (i==0){
			maior= v[i];
			n=i+1;
		}
		if (maior<v[i]){
			maior= v[i];
			n=i+1;
		}
	}
	printf("O maior e %d, que ocupa a posicao %d .",maior,n);
}
void main (void){
	int v[DIM];
	leitura (v);
	maior_posicao(v);
}
