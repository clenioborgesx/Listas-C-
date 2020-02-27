#include <stdio.h>
#define DIM 3
void leitura (float M[][DIM]){
	int i, j;
	for (i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			printf("M[%d][%d]:",i+1, j+1);
			scanf("%f",&M[i][j]);
		}
	}
}
int opcoes (void){
	int op;
	printf("\n\n\nOpcoes\n\n\n");
	printf("1-  Imprime a matriz lida;\n\n");
	printf("2-  Informa a media aritmetica dos elementos abaixo da diagonal principal;\n\n");
	printf("3-  Informa a soma dos elementos acima da diagonal principal;\n\n");
	printf("4-  Informa a soma dos elementos abaixo da diagonal principal;\n\n");
	printf("5-  Informa o produto dos elementos da diagonal principal;\n\n");
	printf("6-  Informa o produto dos elementos da diagonal secundaria;\n\n");
	printf("7-  Informa o menor valor dos elementos abaixo da diagonal secundaria;\n\n");
	printf("8-  Informa o menor valor dos elementos acima da diagonal secundaria;\n\n");
	printf("9-  Informa o maior elemento das k-diagonais (diagonal principal, mais os elementos que estão k diagonais acima e k diagonais abaixo da diagonal principal);\n\n");
	printf("10- Informa o maior elemento das y-diagonais (diagonal secundaria, mais os elementos que estão y diagonais acima e y diagonais abaixo da diagonal secundaria);\n\n");
	printf("11- Informa o maior valor da matriz;\n\n");
	printf("12- Informa o menor valor da matriz;\n\n");
	printf("13- Informa o elemento minimax de uma matriz (o menor elemento da linha em que se encontra o maior elemento da matriz);\n\n");
	printf("14- Informa o elemento maxmin de uma matriz (o maior elemento da linha em que se encontra o menor elemento da matriz);\n\n");
	printf("15- Encerrar o programa.\n\n");

	printf("Informe a opcao escolhida:");
	scanf("%d",&op);
	printf("\n\n\n");
	return(op);
}
void op_1 (float M[][DIM]){
	int i, j;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			printf("%.2f ",M[i][j]);
		}
	printf("\n");	
	}
}
void op_2 (float M[][DIM]){
	int i, j,n;
	float soma=0, media;
	for (i=1,n=0;i<DIM;i++){
		for (j=0;j<i;j++){
			soma= soma + M[i][j];
			n++;
		}
	}
	media= soma/n;
	printf("A media e %.2f.",media);
}
void op_3 (float M[][DIM]){
	int i, j;
	float soma=0;
	for (i=0;i<DIM-1;i++){
		for (j=1+i;j<DIM;j++){
			soma= soma + M[i][j];
		}
	}
	printf("A soma e %.2f.",soma);
}
void op_4 (float M[][DIM]){
	int i, j;
	float soma=0;
	for (i=1;i<DIM;i++){
		for (j=0;j<i;j++){
			soma= soma + M[i][j];
		}
	}
	printf("A soma e %.2f.",soma);
}
void op_5 (float M[][DIM])  {
	int i, j, prod=1;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
		if (j==i){
			prod = prod* M[i][j];
			}
		}
	}
	printf("O produto dos elementos da diagonal principal e %f.",prod);
}
void op_6 (float M[][DIM])  {
	int i, j,  k;
	float prod=1.0;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			k=i+j;
		if (k== DIM -1){
			prod = prod* M[i][j];
			}
		}
	}
	printf("O produto dos elementos da diagonal secundaria e %f.",prod);
}
void op_7 (float M[][DIM])  {
	int i, j, k;
	float menor;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			k=i+j;
		if (k> DIM-1 ){
				if (k== DIM ){
				menor= M[i][j];
				}
				if(menor> M[i][j]){
				menor= M[i][j];
				}
			}
		}
	}
	printf("O menor valor abaixo da diagonal secundaria e %f.",menor);
}
void op_8 (float M[][DIM])  {
	int i, j, k;
	float menor;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			k=i+j;
		if (k< DIM-1 ){
				if (k == 0 ){
				menor= M[i][j];
				}
				if(menor> M[i][j]){
				menor= M[i][j];
				}
			}
		}
	}
	printf("O menor valor acima da diagonal secundaria e %f.",menor);
}
void op_9 (float M[][DIM])  {
	int i, j, k, n;
	float maior= M[0][0];
	printf("Digite um valor para K (max: %d):",DIM -1);
	scanf("%d",&k);
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
		 	for (n=0;n<=k;n++){
		 		if (i==j-n || j==i-n){
					 if(maior< M[i][j]){
					 	maior= M[i][j];
					 }
				 }
			 }
	    	}
		}
		
	printf("O maior elemento das k-diagonais e %f.",maior);
}
void op_10 (float M[][DIM])  {
	int i, j, y, n,s;
	float maior= M[0][DIM-1];
	printf("Digite um valor para y (max: %d):",DIM -1);
	scanf("%d",&y);
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			s= i+j;
		 	for (n=0;n<=y;n++){
		 		if (s==DIM + n -1 || s==DIM-n-1){
					 if(maior< M[i][j]){
					 	maior= M[i][j];
					 }
				 }
			 }
	    	}
		}
	
	printf("O maior elemento das y-diagonais e %f.",maior);
}
void op_11 (float M[][DIM])  {
	int i, j;
	float maior;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
		 			if (i==0 && j==0){
		 				maior= M[i][j];
					 }
					 if(maior< M[i][j]){
					 	maior= M[i][j];
					 }
	    	}
		}
	printf("O maior elemento da matriz e %f.",maior);
}
void op_12 (float M[][DIM])  {
	int i, j;
	float menor;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
		 			if (i==0 && j==0){
		 				menor= M[i][j];
					 }
					 if(menor> M[i][j]){
					 	menor= M[i][j];
					 }
	    	}
		}
	printf("O menor elemento da matriz e %f.",menor);
}
void op_13 (float M[][DIM])  {
	int i, j, k;
	float maior, minimax;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
		 			if (i==0 && j==0){
		 				maior= M[i][j];
		 				k=i;
					 }
					 if(maior< M[i][j]){
					 	maior= M[i][j];
					 	k=i;
					 }
	    	}
		}
		i=k;
		minimax= M[i][0];
		for (j=0;j<DIM;j++){
			if(minimax> M[i][j]){
				minimax=M[i][j];
			}
		}
		
	printf("O minimax da matriz e %f.",minimax);
}
void op_14 (float M[][DIM])  {
	int i, j, k;
	float  menor, maxmin;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
		 			if (i==0 && j==0){
		 				menor= M[i][j];
		 				k=i;
					 }
					 if(menor> M[i][j]){
					 	menor= M[i][j];
					 	k=i;
					 }
	    	}
		}
		i=k;
		maxmin= M[i][0];
		for (j=0;j<DIM;j++){
			if(maxmin< M[i][j]){
				maxmin=M[i][j];
			}
		}
		
	printf("O maxmin da matriz e %f.",maxmin);
}
void op_15 (void){
	printf("Programa finalizado");
}
void main (void){
	float M[DIM][DIM];
	int op;
		leitura (M);
	do{
	op= opcoes();
	switch (op){
		case 1:
			system("cls");
			op_1(M);
			break;
		case 2:
			system("cls");
			op_2(M);
			break;
		case 3:
			system("cls");
			op_3(M);
			break;
		case 4:
			system("cls");
			op_4(M);
			break;
		case 5:
			system("cls");
			op_5(M);
			break;
		case 6:
			system("cls");
			op_6(M);
			break;
		case 7:
			system("cls");
			op_7(M);
			break;
		case 8:
			system("cls");
			op_8(M);
			break;
		case 9:
			system("cls");
			op_9(M);
			break;
		case 10:
			system("cls");
			op_10(M);
			break;
		case 11:
			system("cls");
			op_11(M);
			break;
		case 12:
			system("cls");
			op_12(M);
			break;
		case 13:
			system("cls");
			op_13(M);
			break;
		case 14:
			system("cls");
			op_14(M);
			break;		
		case 15:
			system("cls");
			op_15();
			break;
		Default:
		printf("Opcao invalida.");
	}
	
	}	while (op!=15);

}























