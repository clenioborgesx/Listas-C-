#include <stdio.h>

void main (void){
	int maior, dia, quant, i;
	
	i=1;
	maior=0;
	
	do{
		printf("informe a quantidade de discos vendidos em %d de marco:",i);
		scanf("%d",&quant);
		
		if (quant>maior){
			maior=  quant;
			dia= i;
		}
		
		i++;
	} while (i<=31);
	
	printf ("a maior venda foi de %d discos no dia %d de marco.",maior,dia);


}

