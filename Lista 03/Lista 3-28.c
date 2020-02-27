#include<stdio.h>
#include<stdlib.h>

1 - void InsereInicio(No**L,int valor){
	No *novo;
	novo=(No*)malloc(sizeof(No));
	if(novo==NULL){
		printf("ERRO");
		exit(1);
	}
	else{
		Novo-> v=valor;
		Novo-> prox=NULL;
		if(*L==NULL){
		*L=novo;
		}
		else{
			Novo->prox=*L;
			L*=novo;
		}
	}
}

2 - void InsereFinal(No **L,int valor){
	No *N,*A;
	N=(No*)malloc(sizeof(No));
	if(N==NULL){
		printf("Erro");
		exit(1);
	}
	else{
		N->V=valor;
		N->prox=NULL;
		if(*L==NULL){
			*L=N;
		}
		else{
			A=*L;
			while(A->prox!=NULL){
				A=A->prox;
			}
			A->prox=N;
		}
	}
}

5- int RemoveInicio(No **L){
	int valor;
	No*A;
	if(*L!=NULL){
	A=*L;
	*L=A->prox;
	valor=A->v;
	free(A);
	return(valor);
	}	
}

4- int RemoveFinal(No*L){
	int valor;
	No *A,*B;
	if(*L!=NULL){
		A=*L;
		while(A->prox->prox!=NULL){
			A=A->prox;
		}
	B=A->prox;
	valor=B->v;
	free(B);
	A->prox=NULL; 
	return(valor);
	}
}

12- int Contar(No*L, int valor){
	int cont=0;
	while(L!=NULL){
		if(L->v==valor){
			cont++;
		}
	L=L->prox;
	}
}
	
15- void Inverte(No**L){
	No*A,*LI;
	LI=NULL;
	while(*L!=NULL){
		A=*L;
		*L=(*L)->prox;
		A->prox=LI;
		LI=A;
	}
	*L=LI;
}
13- int TamanhoLista(No *L){
	int cont=1;
	while(L!=NULL){
		cont++;
		L=L->prox;
	}
	return(cont);
}

17- int ListaParesImpares(No *L){
	int par=0,impar=0;
		while(L!=NULL){
			if(L->v % 2==0){
				par++
				}	
			else{
				impar++;
			}
			L=L->prox;
		}
	 
	return(par);
	return(impar);
}

18- int ListaPosNeg(No*L){
	int pos=0,neg=0;
		while(L!=NULL){
			if(L->v >0){
				pos++;
			}
			else{
				neg++;
				}
		L=L->prox;
	}	
	return(pos);
	return(neg);
}
