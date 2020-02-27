#include <stdio.h>

void main (void){
	int dian, diaat, mesn, mesat, anon, anoat, anos, meses, dias;
	
	printf("insira a data de nascimento (dd/mm/aaaa):");
	scanf("%d/%d/%d",&dian,&mesn,&anon);
	printf("insira a data atual (dd/mm/aaaa):");
	scanf("%d/%d/%d",&diaat,&mesat,&anoat);
	
	if (anon != anoat){
		if (mesn<=mesat && dian<=diaat){
			anos= anoat - anon;
			meses= mesat - mesn;
			dias= diaat - dian;	
		}
		if(mesn>mesat && dian>diaat){
			anos= anoat - anon - 1;
			meses= 12 - mesn + mesat -1;
			dias= 30 - dian +diaat;
		}
		if (mesn>mesat && dian<=diaat){
			anos= anoat - anon -1;
			meses=12 + mesat - mesn;
			dias= diaat - dian;	
		}
		if(mesn<=mesat && dian>diaat){
			anos= anoat - anon ;
			meses=  - mesn + mesat - 1;
			dias= 30 - dian +diaat;
		}
		
	}
	if (anon == anoat){
		if(mesn<=mesat && dian>diaat){
			meses=  - mesn + mesat - 1;
			dias= 30 - dian +diaat;
		}
		if (mesn<=mesat && dian<=diaat){
			meses= mesat - mesn;
			dias= diaat - dian;	
		}
	
		
	}

 	printf(" %d anos, %d meses, %d dias",anos, meses, dias);
	
}
