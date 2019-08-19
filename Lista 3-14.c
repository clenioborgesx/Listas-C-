#include<stdio.h>

void MostrarPares(int n, int num){ // Assumindo que "num" inicia em zero
	if(num<n){
		if(num%2==0){
			printf("%d",num);
		}
	MostrarPares(n,num+1);
	}
}
