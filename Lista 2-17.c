#include <stdio.h>
#define DIM1 100
#define DIM2 20

struct dados {
	char nome[DIM1];
	int depen;
	float imp, RBA;
};
typedef struct dados Dados;

void leitura_dados (Dados inf[]){
	int i;
	for (i=0;i<DIM2;i++){
		printf("Digite seu nome completo:");
		fgets (inf[i].nome,DIM1,stdin);
		printf("Informe a quantidade de dependentes:");
		scanf("%d",&inf[i].depen);
		printf("informe sua renda bruta anual:");
		scanf("%f",&inf[i].RBA);
		printf("\n\n\n\n");
	}
}
void calcula_imposto  (Dados inf[]){
	int i;
	float RL[DIM2];
	for (i=0;i<DIM2;i++){
		RL[i]= inf[i].RBA - (600* inf[i].depen); 
		if (RL[i]< 10000){
			inf[i].imp=0;
		}
		if (RL[i]< 30000 && RL[i]>= 10000){
			inf[i].imp= RL[i]* 0.05;
		}
		if (RL[i]< 60000 && RL[i]>= 30000){
			inf[i].imp= RL[i]* 0.1;
		
		}
		if (RL[i]== 60000){
			inf[i].imp=RL[i]* 0.15;
		}	
	}	
}
void exibicao (Dados inf[]){
	int i;
	for (i=0;i<DIM2;i++){
		printf("Nome:");
		fputs(inf[i].nome,stdout);
		printf("\n\n");
		printf("Numero de dependentes:%d\n\n",inf[i].depen);
		printf("Renda bruta anual:%.2f\n\n",inf[i].RBA);
		printf("Imposto devido:%.2f\n\n",inf[i].imp);
	
	}
}

void main (void){
	Dados inf[DIM2];
	leitura_dados (inf);
	calcula_imposto(inf);
	exibicao (inf);
	
}










