#include <stdio.h>
void main (void){
	
	int hora1, min1, hora2, min2, hora, min;
	
	printf ("Informe o horario de inicio (hora:min):");
	scanf("%d:%d",&hora1, &min1);
	printf ("Informe o horario de termino (hora:min):");
	scanf("%d:%d",&hora2, &min2);
	
	if (hora2<hora1){
		min= 1440 - 60 * hora1 - min1 + 60 * hora2 + min2;
	}
	else{
		if(hora1<hora2){
			min= 60 * hora2 + min2 - 60*hora1 - min1;
		}
		else{
			if(min1==min2){
				min= 1440;
			}
			else{
				if(min1<min2){
				min= min2 - min1;
			   } 
			   else{
			   	min=1440- (min1-min2);
			   }
			
			}
		}
	}
	
	hora= min/60;
	min= min%60;
	
	printf("%d horas e %d minutos.", hora, min);
	
}
