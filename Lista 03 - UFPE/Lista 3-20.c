#include<stdio.h>
main(){

int pot(int x, int n){
	if(n==0){
		return(1);
	}
	else{
		if(n>0){
			return(x*pot(x,n-1));
		}
		else{
			return(1/pot(x,-n));
		}
	}
}
printf (pot);
}
