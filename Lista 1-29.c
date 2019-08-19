#include <stdio.h>

void main (void){
	float nota1, nota2, nota3, me, ma, ni;
	
	printf(" Numero de identificacao:");
	scanf("%f",&ni);
	printf(" Primeira nota:");
	scanf("%f",&nota1);
	printf(" Segunda nota:");
	scanf("%f",&nota2);
	printf(" Terceira nota:");
	scanf("%f",&nota3);
	printf(" Media dos exercicios:");
	scanf("%f",&me);
	
	ma= (nota1 + 2*nota2 + 3*nota3 + me)/7;
	printf("Media de aproveitamento: %f",ma);
	
	if(ma>=9.0){
		printf("\n\nConceito A \n\n");
		printf("Aprovado");
	}
	if(ma>=7.5 && ma<9.0){
		printf("\n\nConceito B \n\n");
		printf("Aprovado");
	}
	if(ma>= 6.0 && ma<7.5){
		printf("\n\nConceito C \n\n");
		printf("Aprovado");
	}
	if(ma>=4.0 && ma<6.0){
		printf("\n\nConceito D \n\n");
		printf("Reprovado");
    }
	if (ma<4.0){
		printf("\n\n Conceito E \n\n");
		printf("Reprovado");
	}
}
