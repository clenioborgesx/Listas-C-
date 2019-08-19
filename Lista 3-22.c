#include <stdio.h>

int MDC(int x, int y){
	if(x%y==0){
		return(y);
	}
	else{
		return(MDC((y*x)%y));
	}
}
