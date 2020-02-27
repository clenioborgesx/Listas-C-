// Função para calcular o fatorial de um número
int fato(int numero){
    int fatorial=1.0, i;
    while (i>0){
		
		fatorial= fatorial*i;
		
		i--;
	}
	for(i=numero;i>0;i--){
		fatorial*=i;
	}
	return fatorial;
}