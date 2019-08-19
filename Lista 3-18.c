#include <stdio.h>

void N_Pares(int n, int num){
	if(n>0){
		if(num%2==0){
			printf("%d",num);
			N_impares(n-1,num+2);
		}
		else {
			N_pares(n,num+1);
		}
	}
}
