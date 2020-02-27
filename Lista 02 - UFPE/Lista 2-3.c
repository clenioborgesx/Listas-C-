#include <stdio.h>
#include <math.h>
#define DIM 11
int inf_grau (void){
	int grau;
	printf("informe o grau do polinomio (max= %d):", DIM-1);
	scanf("%d",&grau);
	printf("\n");
	return(grau);
}
void vetor_coef (float v[],int grau){
	int i;
	for (i=grau; i>=0;i--){
		printf("digite o coeficiente associado a x^ %d:",i);
		scanf("%f", &v[i]);
	}
	}
float valor_de_x (){
	float x;
	printf("digite um valor para x:");
	scanf("%f",&x);
	return (x);
}
	
int calculo (float v[], int grau, float x){
	int i;
	float soma=0;
	for (i=grau;i>=0;i--){
		soma+= v[i]*(pow(x,i));
		return (soma);
	}
	
}
void main (void){
	int grau;
	float x, v[DIM], soma;
	grau= inf_grau();
	vetor_coef(v,grau);
	x=valor_de_x ();
	soma= calculo(v,grau,x);
	printf("o resultado e %.2f", soma);
	
}	
	
	
	

