#include <stdio.h>
#define DIM 1
struct dados {
	int ano;
	char sexo;
	int proc;
};
typedef struct dados Dados;

void leitura (Dados Acid[]){
	int i;
	
	for (i=0;i<DIM;i++){
		printf("ano de nascimento:");
		scanf("%d",&Acid[i].ano);
		printf("procedencia:");
		scanf("%d",&Acid[i].proc);
		printf("sexo:");
		scanf("%c",&Acid[i].sexo);
		printf("\n\n\n\n");
	}
}
void menos_21 (Dados Acid[]){
	float perc;
	int quant=0,i;
	for (i=0;i<DIM;i++){
		if (2015- Acid[i].ano < 21){
			quant++;
		}
		
	}
	perc= quant/(float)DIM;
	printf("O percentual de motoristas com menos de 21 anos e %f.\n\n",perc);
}
void m_cp (Dados Acid[]){
	int  quant=0,i;
	for (i=0;i<DIM;i++){
		if (Acid[i].sexo=='M'&& Acid[i].proc==0){
			quant++;
		}
		
	}
	printf("A quantidade de mulheres da capital e %d.\n\n",quant);
}
void int_60 (Dados Acid[]){
	int  quant=0,i;
	for (i=0;i<DIM;i++){
		if (2015- Acid[i].ano > 60 && Acid[i].proc == 1){
			quant++;
		}
		
	}
	printf("A quantidade de motoristas do interior com mais de 60 anos e %d.\n\n",quant);
}
void m_60 (Dados Acid[]){
	int  quant=0,i;
	for (i=0;i<DIM;i++){
		if (2015- Acid[i].ano > 60 && Acid[i].sexo=='M'){
			quant++;
		}
		
	}
   if (quant){
   	printf("Existe e a quantidade e %d.\n\n",quant);
   }
   else {
   	printf("Nao existe.");
   }
}
void main (void){
	Dados Acid[DIM];
	leitura (Acid);
	menos_21(Acid);
	m_cp(Acid);
	int_60(Acid);
	m_60(Acid);
}

























