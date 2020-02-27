#include <stdio.h>

void MostraImpar(int n, int num){
	if(num<n){
		if(num%2!=0){
			printf("%d",num);
		}
	MostraImpar(n,num+1);
	}
}
