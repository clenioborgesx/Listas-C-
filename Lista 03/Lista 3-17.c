#include <stdio.h>

void N_Impares(int n, int num){
	if(n>0){
		if(num%2!=0){
			printf("%d",num);
			N_impares(n-1,num+2);
		}
		else {
			N_Impares(n,num+1);
		}
	}
}
