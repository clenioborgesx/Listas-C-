#include <stdio.h>

int Busca(int valor, int vetor[], int pos, int tam ){
	if(pos<tam){
		if(vetor[pos]==valor){
			return(pos);
		}
	pos=Busca(valor,vetor,pos+1,tam);
	}
	return(-1);
}
