#include<stdio.h>
main(){
	
	int h,m,s;
	
	printf("Informe a hora no formato hh:mm:ss:  ");
	
	scanf("%d:%d:%d",&h, &m, &s);
		
		if(h >=0 && h <=23 && m >=0 && m <=59 && s >=0 && s<=59 ){
	
		
			if(h >=0 && h < 12)
				printf("Bom dia");
				
			elif(h >=12 && h< 18 )
				printf("boa tarde");
			
			elif(h>=18 && h <23)
				printf("Boa noite");
		}else
			printf("Hora invalida");
				
		
			
		
}
