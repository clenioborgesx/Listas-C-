#include <stdio.h>
#define DIM 500
void leitura (int Lt[]){
	int i;
	for (i=0;i<DIM;i++){
		printf("Informe a quantidade de locacoes do cliente %d:",i+1);
		scanf("%d",&Lt[i]);
	}
}
void loc_gratis (int Lt[], int Lg[]){
	int i;
	for (i=0;i<DIM;i++){
		Lg[i]= Lt[i]/15;
	}
}	
void main (void){
	int Lt[DIM], Lg[DIM];
	leitura (Lt);
	loc_gratis (Lt, Lg);
}
