#include <stdio.h>
#define DIM 5
void leitura (int X[][DIM], int Y[][DIM]){
	int i, j;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			printf("X[%d][%d]:",i, j);
			scanf("%d",&X[i][j]);	
		}
	}
	printf("\n\n\n");
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			printf("Y[%d][%d]:",i, j);
			scanf("%d",&Y[i][j]);	
		}
	}	
}
int opcoes (void){
	int op;
	
	printf("\n\nOpcoes\n\n");
	printf("1- Imprime as duas matrizes, X e Y;\n");
	printf("2- Somar as duas matrizes (Z= X+Y);\n");
	printf("3- Subtrair as duas matrizes (Z= X-Y);\n");
	printf("4- Multiplicar as duas matrizes (Z= X*Y);\n");	
	printf("5- Criar uma matriz com os maiores elementos de cada matriz;\n");
	printf("6- Criar uma matriz com os menores elementos de cada matriz;\n");
	printf("7- Verifica se as matrizes lidas sao triangulares superiores;\n");
	printf("8- Verifica se as matrizes lidas sao triangulares inferiores;\n");
	printf("9- Verifica se as matrizes lidas sao matrizes diagonais;\n");
	printf("10- Verifica se as matrizes lidas sao matrizes identidade;\n");
	printf("11- Verifica se as matrizes lidas sao simetricas;\n");
	printf("12- Encerrar o programa;\n\n");
	
	printf("Informe a opcao escolhida:");
	scanf("%d", &op);
		
	return (op);
}
void op_1 (int X[][DIM], int Y[][DIM]){
	int i, j;
	for (i=0; i< DIM; i++){
		for (j=0; j< DIM; j++){
			printf("%d",X[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	for (i=0; i< DIM; i++){
		for (j=0; j< DIM; j++){
			printf("%d",Y[i][j]);
		}
		printf("\n");
	}	
}
void op_2 (int X[][DIM], int Y[][DIM], int Z[][DIM]){
	int i, j;
	for (i=0; i< DIM; i++){
		for (j=0; j< DIM; j++){
			Z[i][j]= X[i][j]+ Y[i][j];
			printf("%d",Z[i][j]);
		}
		printf("\n");
	}
}
void op_3 (int X[][DIM], int Y[][DIM], int K[][DIM]){
	int i, j;
	for (i=0; i< DIM; i++){
		for (j=0; j< DIM; j++){
			K[i][j]= X[i][j]- Y[i][j];
			printf("%d",K[i][j]);
		}
		printf("\n");
	}

}
void op_4 (int X[][DIM], int Y[][DIM], int M[][DIM]){
	int i, j, k;
	for (i=0; i< DIM; i++){
		for (j=0; j< DIM; j++){
			M[i][j]=0;
			for (k=0; k< DIM; k++){
				M[i][j]+= X[i][k]*Y[k][j];
			}
		}
	}
	for (i=0; i< DIM; i++){
		for (j=0; j< DIM; j++){
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}	
}
void op_5 (int X[][DIM], int Y[][DIM], int Maior[][DIM]) {
	int i, j;
for (i=0; i< DIM; i++){
		for (j=0; j< DIM; j++){
			if (X[i][j]>Y[i][j]){
				Maior[i][j]= X[i][j];
				printf("%d ",Maior[i][j]);
			}
			else {
				Maior[i][j]= Y[i][j];
				printf("%d ",Maior[i][j]);
			}
		}
		printf("\n");
	}	
}
void op_6 (int X[][DIM], int Y[][DIM], int Menor[][DIM]) {
	int i, j;
for (i=0; i< DIM; i++){
		for (j=0; j< DIM; j++){
			if (X[i][j]>Y[i][j]){
				Menor[i][j]= X[i][j];
				printf("%d ",Menor[i][j]);
			}
			else {
				Menor[i][j]= Y[i][j];
				printf("%d ",Menor[i][j]);
			}
		}
		printf("\n");
	}	
}
void op_7 (int X[][DIM], int Y[][DIM]){
	int i, j, trsup=1;
	for (i=1; i< DIM && trsup; i++){
		for (j=0; j< i && trsup; j++){
			if (X[i][j]!=0){
				trsup=0;
			}
		}
	}
	if (trsup){
		printf("A matriz X e triangular superior.");
	}
	else{
		printf("A matriz X nao e triangular superior.");
	}
	trsup=1;
	for (i=1; i< DIM && trsup; i++){
		for (j=0; j< i && trsup; j++){
			if (Y[i][j]!=0){
				trsup=0;
			}
		}
	}
	if (trsup){
		printf("A matriz Y e triangular superior.");
	}
	else{
		printf("A matriz Y nao e triangular superior.");
	}
}
void op_8 (int X[][DIM], int Y[][DIM]){
	int i, j, trinf=1;
	for (i=0; i< DIM-1 && trinf; i++){
		for (j=1+i; j< DIM && trinf; j++){
			if (X[i][j]!=0){
				trinf=0;
			}
		}
	}
	if (trinf){
		printf("A matriz X e triangular inferior.");
	}
	else{
		printf("A matriz X nao e triangular inferior.");
	}
	trinf=1;
	for (i=0; i< DIM-1 && trinf; i++){
		for (j=1+i; j< DIM && trinf; j++){
			if (Y[i][j]!=0){
				trinf=0;
			}
		}
	}
	if (trinf){
		printf("A matriz Y e triangular inferior.");
	}
	else{
		printf("A matriz Y nao e triangular inferior.");
	}
}
void op_9 (int X[][DIM], int Y[][DIM]){
	int i, j, diag=1;
	for (i=0; i< DIM && diag; i++){
		for (j=0; j< DIM && diag; j++){
			if (i!=j){
				if (X[i][j]!=0){
					diag=0;
				}
			}
		}
	}
	if (diag){
		printf("A matriz X e diagonal.");
	}
	else{
		printf("A matriz X nao e diagonal.");
	}
	diag=1;
	for (i=0; i< DIM && diag; i++){
		for (j=0; j< DIM && diag; j++){
			if (i!=j){
				if (Y[i][j]!=0){
					diag=0;
				}
			}
		}
	}
	if (diag){
		printf("A matriz Y e diagonal.");
	}
	else{
		printf("A matriz Y nao e diagonal.");
	}
}
void op_10 (int X[][DIM], int Y[][DIM]){
	int i, j, iden=1;
	for (i=0; i< DIM && iden; i++){
		for (j=0; j< DIM && iden; j++){
			if (i!=j){
				if (X[i][j]!=0){
					iden=0;
				}
			}
			else {
				if (X[i][j]!=1){
					iden=0;
				}
			}
		}
	}
	if (iden){
		printf("A matriz X e identidade.");
	}
	else{
		printf("A matriz X nao e identidade.");
	}
	iden=1;
	for (i=0; i< DIM && iden; i++){
		for (j=0; j< DIM && iden; j++){
			if (i!=j){
				if (Y[i][j]!=0){
					iden=0;
				}
			}
			else {
				if (Y[i][j]!=1){
					iden=0;
				}
			}
		}
	}
	if (iden){
		printf("A matriz Y e identidade.");
	}
	else{
		printf("A matriz Y nao e identidade.");
	}
}
void op_11 (int X[][DIM], int Y[][DIM]){
	int i, j, simet=1;
	for (i=0; i< DIM-1 && simet; i++){
		for (j=1+i; j< DIM && simet; j++){
			if (X[i][j]!=X[j][i]){
				simet=0;
			}
		}
	}
	if (simet){
		printf("A matriz X e simetrica.");
	}
	else{
		printf("A matriz X nao e simetrica.");
	}
	simet=1;
	for (i=0; i< DIM-1 && simet; i++){
		for (j=1+i; j< DIM && simet; j++){
			if (Y[i][j]!=Y[j][i]){
				simet=0;
			}
		}
	}
	if (simet){
		printf("A matriz Y e simetrica.");
	}
	else{
		printf("A matriz Y nao e simetrica.");
	}
}
void op_12 (void){
	printf("Programa finalizado");
}
void main (void){
	int X[DIM][DIM],Y[DIM][DIM],Z[DIM][DIM],K[DIM][DIM],M[DIM][DIM],Maior[DIM][DIM],Menor[DIM][DIM], op;
	leitura (X,Y);
	do{
	op= opcoes();
	switch (op){
		case 1:
			op_1(X,Y);
			break;
		case 2:
			op_2(X,Y,Z);
			break;
		case 3:
			op_3(X,Y,K);
			break;
		case 4:
			op_4(X,Y,M);
			break;
		case 5:
			op_5(X,Y,Maior);
			break;
		case 6:
			op_6(X,Y,Menor);
			break;
		case 7:
			op_7(X,Y);
			break;
		case 8:
			op_8(X,Y);
			break;
		case 9:
			op_9(X,Y);
			break;
		case 10:
			op_10(X,Y);
			break;
		case 11:
			op_11(X,Y);
			break;
		case 12:
			op_12();
			break;
		Default:
		printf("Opcao invalida.");
	}
	
	}	while (op!=12);

}






























































