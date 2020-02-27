#include<stdio.h>

int DIV(int x,int y){
	
	if(x<0){
		x=-x;
	}
	if(y<0){
		y=-y;
	}
	if(x==y){
		return(1);
	}
	else{
		if(x<y){
			return(0);
		}
		else{
			return(1+DIV(x-y,y));
			}
		}
	}

