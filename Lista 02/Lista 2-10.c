#include <stdio.h>
#define DIM 5
void leitura (int *Lt){
	int i, a;
	for (i=0;i<DIM;i++){
		printf("Informe a quantidade de locacoes do cliente %d:",i+1);
		scanf("%d",&a);
		Lt[i]=a;
	}
}
void loc_gratis (int *Lt, int *Lg){
	int i;
	for (i=0;i<DIM;i++){
		Lg[i]= Lt[i]/15;
		//printf("O usuario %d tem %d locacoes gratis!\n",i+1,Lg[i]);
		
	}
	return *Lg;
}	
void main (void){
	int Lt[DIM], Lg[DIM];
	leitura (Lt);
	loc_gratis (Lt, Lg);
}
