#include <stdio.h>

	int *LeVetor(int n){
		int *v;
		int i;
		v=(int) malloc(n * sizeof(int));
	
		if(v==NULL){
			printf("Falha na alocação");
			exit(-1);
	}
	for(i=0; i<n; i++){
		printf("Informe o elemento v[%d]=",i+1);
		scanf("%d",&v[i]);
	}
	
	return(v);
}


