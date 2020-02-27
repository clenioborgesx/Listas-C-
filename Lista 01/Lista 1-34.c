#include <stdio.h>

void main (void){
	int n, i;
	float maior,menor,nota;
	
	printf("informe a quantidade de alunos:");
	scanf("%d",&n);
	maior=0.0;
	menor=10.0;
	i=1;
	do{
		printf("informe a nota do aluno %d :",i);
		scanf("%f",&nota);
		
		if (nota> maior){
			maior=nota;
		}
		
		if(nota<menor){
			menor= nota;
		}
		i++;
	} while (i<=n);
	
	printf("A maior nota foi %.2f e a menor, %.2f",maior,menor);
	
}
