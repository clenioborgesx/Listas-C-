#include <stdio.h>

void main (void){
	int n, par, impar, somap, somai, soma, quant,i;
	float mediap, mediai, media;
	
		printf("Informe a quantidade de numeros desejada:");
		scanf("%d",&quant);
	somap=0;
	somai=0;
	impar=0;
	par=0;
	i=0;
	while  (i<quant) {
		
		printf("Informe um numero inteiro:");
		scanf("%d",&n);
	
		
		if(n%2==0){
			somap= somap + n;
			par++;
			mediap= (float)somap/par;
		}
		
		if(n%2!=0){
			somai= somai + n;
			impar++;
			mediai= (float)somai/impar;
		}
		
			i++;
	}
	
	soma= somap + somai;
	media= (float)soma/ quant;
	
	printf("\na media entre os numeros pares foi %f\n\n",mediap);
	printf("\na media entre os numeros impares foi %f\n\n",mediai);
	printf("\na media entre os numeros foi %f\n\n",media);
		
		
		system ("pause");
}
