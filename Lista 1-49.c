#include <stdio.h>

int main (){
	int a, b, total, soma, termo, i;
	printf("digite um par de numeros:");
	scanf("%d %d", &a, &b);
	printf(" %d, %d\n", a, b);
	total= 0;
	soma= 0;
	while (a!= 0){
		total= total + 1;
		termo=1;
		for (i=1;i<=b;i++){
			termo= termo*a;
		}
		printf("resp= %d\n",termo);
		soma = soma + termo;
		printf("soma= %d\n",soma);
		printf("digite um par de numeros:");
		scanf("%d %d", &a, &b);
		printf(" %d, %d\n", a, b);	
		
	}
	
	printf("total de pares: %d\n", total);
	
}
