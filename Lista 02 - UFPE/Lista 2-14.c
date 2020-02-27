#include <stdio.h>

struct diahora {
	int dias;
	int horas;
	int minutos;
	int segundos;
};
typedef struct diahora DiaHora;

DiaHora dias (int segundos){
	DiaHora tempo;
	int quant;
	
	tempo.dias= segundos/86400;
	quant= segundos%86400;
	tempo.horas= quant/3600;
	quant= quant%3600;
	tempo.minutos= quant/ 60;
	tempo.segundos= quant%60;
	
	return  (tempo);
	
}

void main (void){
	DiaHora tmp;
	int seg;
	
	printf("informe a quant de segundos:");
	scanf("%d",&seg);
	
	tmp= dias (seg);
	
	printf("%d dias, %d horas, %d minutos e %d segundos.",tmp.dias,tmp.horas, tmp.minutos, tmp.segundos);
	
}
