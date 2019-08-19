#include<stdio.h>

int MOD(int x, int y){
	
	if(x<0){
		x=-x;
	}
	if(y<0){
		y=-y;
	}
	if(x==y){
		return(0);
	}
	else{
		if(x<y){
			return(x);
		}
		else{
			return(MOD(x-y,y));
		}
		}
	}

