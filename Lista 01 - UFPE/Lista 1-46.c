#include <stdio.h>

void main (void){
	int n, l, n1, n2, b, e;
	
	printf("informe o numero de linhas:");
	scanf("%d",&n);
	printf("\n\n\n\n");
	b= 2*n - 1;
	l=1;
	while (l<=n){
		n1 = 1;
		while (n1<=l){
			printf("%d", l);
			n1++;
		}
		e=1;
		while (e<= b- 2*l){
			if(l<n){
				printf(" ");
			}
		  e++;
		}
		
		if (l<n){
			n2 = 1;
			while (n2<=l){
			printf("%d", l);
			n2++;
			}
		}
		if (l==n){
			n2 = 1;
			while (n2<=l-1){
			printf("%d", l);
			n2++;
			}
		}
		
		printf("\n");
		l++;
	}

	
}
