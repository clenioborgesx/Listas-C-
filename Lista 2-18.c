#include <stdio.h>

 void leitura (int *dia, int *mes, int*ano){
	printf("Digite a data no formato dd/mm/aaaa:");
	scanf("%d/%d/%d",dia, mes, ano);
}
int data_valida (int dia, int mes, int ano){

			if((ano<0)||(mes<1 || mes>12)||((dia>31||dia<1)&&(mes==01||mes==03||mes==05||mes==07||mes==8||mes==10||mes==12))||((dia>30||dia<1)&& (mes==04||mes==06||mes==9||mes==11))||((dia<1||dia>28)&&(mes==02)&& (ano%4!=0||ano%400!=0))||((dia<1||dia>29)&&(mes==02)&& (ano%4==0 && ano%100!= 0||ano%400==0))){
				
				printf("Data invalida\n\n");
				return(0);
			}	
	
	return(1);
}
int bissexto (int ano){
	if (ano%4==0 && ano%100!= 0||ano%400==0) {
		return (1);
	}
	return(0);
}
int dias_no_mes(int mes){
	int n;
	if(mes==2){
		n=28;
	}
	if (mes==01||mes==03||mes==05||mes==07||mes==8||mes==10||mes==12){
		n=31;
	}
	if(mes==04||mes==06||mes==9||mes==11){
		n=30;
	}
	return (n);
}

int dias_no_ano (int dia, int mes, int ano){
	int i,n, soma=0,k,m;
	k=data_valida(dia, mes, ano);
	m=bissexto(ano);
	if (k){
	for(i=mes-1;i>0;i--){
		n= dias_no_mes(i);
		if (i==2 && m){
			n=n+1;
		}
		soma= soma+n;
	}
	soma= soma+ dia;
	return(soma);
	}
	return(0);	
}
void main (void){
	int a, b , c, total;
	leitura(&a,&b,&c);
	total= dias_no_ano (a,b,c);
	printf("Foram decorridos %d dias do ano de %d.",total,c);

}
