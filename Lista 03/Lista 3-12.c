#include<stdio.h>

void ImprimePosicoesMultiplas(int vetor[],int i, int mult, int tam){
	if(mult<tam){
		if(mult%i==0){
			printf("%d", vetor[mult]);
		}
	ImprimePosicoesMultiplas(vetor,i,mult+1,tam);
		
	}
}

