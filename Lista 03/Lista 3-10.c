#include<stdio.h>

void ImprimeOrdem(int vetor[], int pos, int tam){ //Assumindo que "pos" � zero inicialmente
	if(pos<tam){
		printf("%d",vetor[pos]);
		ImprimeOrdem(vetor,pos+1,tam);
	}
}
