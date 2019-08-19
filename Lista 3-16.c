#include <stdio.h>

void MostraMultiplos(int n, int i, int num){
	if(num<n){
		if(num%i==0){
			printf("%d",num);
		}
	MostraMultiplos(n,i,num+1);
	}
}
