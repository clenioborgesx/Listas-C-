#include<stdio.h>

void ImprimeOrdemInversa (int vetor[],int pos){ //Assumindo que "pos" inicialmente é zero 
	if(pos>=0){
		printf("%d",vetor[pos]);
		ImprimeOrdemInversa(vetor,pos-1);
	}
}
