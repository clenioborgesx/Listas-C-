#include <stdio.h>

void main (void){
	int n, trian, aux1, prim, op, aux2, soma, mult, i, perf;
	
	printf("Digite um numero:");
	scanf("%d",&n);
	printf("\n\n");
	printf("1- verfica se o numero e impar\n\n");
	printf("2- verfica se o numero e par\n\n");
	printf("3- verfica se o numero e primo\n\n");
	printf("4- verfica se o numero e perfeito\n\n");
	printf("5- verfica se o numero e triangular\n\n");
	printf("6- termina o programa\n\n");
	
	printf("escolha uma opcao:");
	scanf("%d",&op);
	printf("\n\n");
	
	switch (op){
		
		case 1:
			if(n%2!=0){
				printf("o numero e impar");
			}
			else {
				printf("o numero e par");
			}
			break;
		case 2:
			if(n%2==0){
				printf("o numero e par");
			}
			else{
				printf("o numero e impar");
			}
			break;
			
		case 3:
			i=2;
			prim=1;
		while (i<n){
			if(n%i==0){
				prim=0;
			}
			i++;
		}
		if (prim){
			printf("o numero e primo");
		}
		else {
			printf("o numero nao e primo");
		}
		break;
		
		case 4:
			perf=0;
			soma=0;
			aux1=1;
			while( aux1<n){
				if(n%aux1==0){
					
					soma= soma + aux1;
					
				}
				
				aux1++;
			}
				if(soma==n){
					
				 perf=1;
				}
				if(perf){
					
					printf("o numero e perfeito");
				}
				else {
					printf("o numero nao e perfeito");
				}
			break;
			
			case 5:
				mult=1;
				aux2=1;
				trian=0;
				
				while (mult<=n && !trian){
					
					mult = aux2 * (aux2 + 1) * (aux2 + 2);
					
					if (mult==n){
						
						trian=1;
						
					}	
					aux2++;
				}
		
		if (trian){
			printf("o numero e triangular");
		}
		else{
			printf("o numero nao e triangular");
		}
		
		break;
		
		case 6:
			
			printf("programa finalizado");
			break;
	}
	
	
}
