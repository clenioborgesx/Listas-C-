#include <stdio.h>
#include <math.h>

void main (void){
	float a, b, c, ma, mh, mp, mg;
	int op;
	
	printf("informe tres numeros (a b c):");
	scanf("%f %f %f",&a, &b, &c);
	printf("\n\n");
	printf(" 1- media aritmetica\n\n ");
	printf("2- media harmonica\n\n ");
	printf("3- media geometrica\n\n");
	printf(" 4- media ponderada com pesos respectivos de 1,2 e 3\n\n");
	
	printf("Digite o numero da media desejada:");
	scanf("%d",&op);
	printf("\n\n");
	switch (op) {

		case 1:
			ma= (a+b+c)/3;
			printf("voce escolheu a media aritmetica, cujo valor e %f",ma);
			break;
		case 2:
			mh= 3/(pow(a,-1)+pow(b,-1)+pow(c,-1));
			printf("voce escolheu a media harmonica, cujo valor e %f",mh);
			break;
		case 3:
			mg= pow((a*b*c),(1.0/3.0));
			printf("voce escolheu a media geometrica, cujo valor e %f",mg);
			break;
		case 4:
			mp= (a+ 2*b + 3*c)/6;
			printf("voce escolheu a media ponderada, cujo valor e %f",mp);
			break;
		default:
			printf("opcao invalida");
			break;		
		
	}
	
}
