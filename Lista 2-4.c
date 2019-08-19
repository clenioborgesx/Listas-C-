#include <stdio.h>
#define DIM 5

void vetor_3 (float v1[],float v2[], float v3[]){
	int i, j, k;
	printf("primeiro vetor\n\n");
	for (i=0; i<DIM; i++){
		printf("informe o valor %d:",i+1);
		scanf("%f",&v1[i]);
	}
	printf("\n\n");
	printf("segundo vetor\n\n");
	for (k=0; k<DIM; k++){
		printf("informe o valor %d:",k+1);
		scanf("%f",&v2[k]);
	}
	
	for (j=0,i=0,k=0; j<2*DIM; j++){
		if(j%2==0){
			v3[j]=v1[i];
			i++;
		}
		else{
			v3[j]= v2[k];
			k++;
		}
	}
}
void impressao_v3 (float v3[]){
	int j;
	for (j=0; j<2*DIM;j++){
		printf("%.2f ",v3[j]);
	}	
}
void main (void){
	float v1[DIM], v2[DIM], v3[2*DIM];
	vetor_3 (v1,v2,v3);
	printf("\n\n");
	impressao_v3(v3);
	
}
