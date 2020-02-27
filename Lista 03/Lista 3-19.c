#include <stdio.h>

/* Retorna o fatorial de n */

int fatorial(int n) {
  
  if (n == 0){
   	 return (1);
   }
  
  else{
  	return( n * fatorial (n-1));
	}

}
