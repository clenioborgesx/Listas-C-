#include <stdio.h>
#define DIM 100

int quant_num (void){
	int n;
	do{
	printf("informe a quantidade de numeros:");
	scanf("%d",&n);
	} while (n>DIM);
	return (n);
}
void vetor_num (float v[],int n){
	int i;
	for (i=0;i<n;i++){
		printf("\n\n informe o valor %d:",i+1);
		scanf("%f",&v[i]);		
	}
}
int esc_op (void){
		int op;
		printf("\n\n opcoes \n\n");
		printf("1- impressao dos valores lidos na mesma ordem em que foram digitados;\n");
		printf("2- impressao dos valores na ordem inversa de digitação;\n");
		printf("3- impressao do  menor e do maior numero do vetor;\n");
		printf("4- impressao da media dos valores e de quantos numeros estao acima da media e quantos estao abaixo da media;\n");
		printf("5- encerrar o programa.\n\n");
		printf("informe a opcao desejada:");
		scanf("%d",&op);
		return (op);
	}
void op_1 (float v[],int n){
	int i;
	for (i=0; i<n; i++){
		printf("%.2f ",v[i]);
	}
}
void op_2 (float v[],int n){
	int i;
	for (i=n-1; i>=0; i--){
		printf("%.2f ",v[i]);
	}
}	
void op_3 (float v[], int n){
	int i;
	float maior, menor;
	for (i=0; i<n; i++){
		if (i==0){
			maior= v[i];
		}
		else {
			if (maior< v[i]){
				maior= v[i];
			}
		}
	}
	printf("o maior num e:%.2f\n\n", maior);
	
	for (i=0; i<n; i++){
		if (i==0){
			menor= v[i];
		}
		else {
			if (menor > v[i]){
				menor= v[i];
			}
		}
	}
	printf("o menor num e:%.2f", menor);
}
	void op_4 (float v[], int n){
		int i, j=0, k=0;
		float soma, media;
		soma=0;
		for (i=0; i<n;i++){
			soma+= v[i];
		}
		media= soma/n;
		for (i=0;i<n;i++){
			if (v[i]>media){
				j++;
			}
			if (v[i]<media){
				k++;
			}
		}
		printf("A media e: %f\n\n", media);
		printf("%d numeros acima da media e %d numeros abaixo da media.",j, k);	
	}
	void op_5 (void){
		printf("programa finalizado");
	}
	
	void main (void){
		int n, op;
		float v[DIM];
		n= quant_num();
		vetor_num (v,n);
		 op= esc_op();
		 printf("\n\n");
		switch (op){
			case 1:
			op_1(v,n);
			break;
			case 2:
			op_2(v,n);
			break;
			case 3:
			op_3(v,n);
			break;
			case 4:
			op_4(v,n);
			break;
			case 5:
			op_5();
			break;
			default:
			printf("opcao invalida");	
		}
	
	}

