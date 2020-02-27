#include <stdio.h>

void main (void){
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, x, y, i, j;
	

		printf("informe seu cpf:");
		scanf("%d %d %d. %d %d %d. %d %d %d- %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
		
		i= (10*n1+9*n2+8*n3+7*n4+6*n5+5*n6+4*n7+3*n8+2*n9)%11;
		
		if(i<2){
			x=0;
		}
		else{
			x= 11-i;
		}
		
		j= (11*n1+10*n2+9*n3+8*n4+7*n5+6*n6+5*n7+4*n8+3*n9+2*x)%11;
	
		if(j<2){
			y=0;
		}
		else{
			y= 11-j;
		}
	
		if (n10!=x || n11!=y){
			printf("cpf invalido");
		}
		else{
			printf("cpf valido");
		}
			
}
