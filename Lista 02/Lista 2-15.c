#include <stdio.h>

struct cedulas {
	int n100;
	int n50;
	int n20;
	int n10;
	int n5;
	int n2;
	int n1;
};
typedef struct cedulas Cedulas;

Cedulas CalculaCedulas (int valor){
	Cedulas final;
	
	final.n100= valor/100;
	valor= valor%100;
	final.n50= valor/50;
	valor= valor%50;
	final.n20= valor/20;
	valor= valor%20;
	final.n10= valor/10;
	valor= valor%10;
	final.n5= valor/5;
	valor= valor%5;
	final.n2= valor/2;
	final.n1= valor%2;
	
	return  (final);
	
}

void main (void){
	Cedulas res;
	int valor;
	
	printf("informe o valor:");
	scanf("%d",&valor);
	
	res= CalculaCedulas (valor);
	
	printf("%d de 100, %d de 50, %d de 20, %d de 10, %d de 5, %d de 2 e %d de 1.",res.n100,res.n50,res.n20,res.n10,res.n5,res.n2,res.n1);
	
}
