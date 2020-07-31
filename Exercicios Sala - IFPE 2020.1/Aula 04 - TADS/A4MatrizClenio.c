#include <stdio.h>
#include <stdlib.h>
#include "A4MatrizClenio.h"

struct matriz{
    int lin, col;
    float* v;
};
void libera (Matriz* mat){
    free(mat->v);
    free(mat);
}

Matriz* cria (int m, int n){
    int i;
    Matriz*mat=(Matriz*)malloc(sizeof(Matriz));
    if (mat==NULL){
        printf("Memoria Insuficiente!\n");
        exit (1);
    }
    mat->lin=m;
    mat->col=n;
    mat->v=(float*)malloc(m*n*sizeof(float));
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    return mat;
    
}

float acessa (Matriz* mat, int i, int j){
    int k;
    if (i<1|| i>=mat->lin || j<1||j>=mat->col ){
        printf("Acesso invalido!\n");
        exit(1);
    }
    k=(i-1)*mat->col+(j-1);
    return mat->v[k];
}

int linhas (Matriz* mat){
    return mat->lin;
}

void atribui (Matriz* mat, int i, int j, float v){
    int k;
    if(i<1|| i>=mat->lin || j>=mat->col ){
        printf("Atribuicao Invalida!\n");
        exit(1);
    }
    k=(i-1)*mat->col+(j-1);
    mat->v[k]=v;
}
int colunas (Matriz* mat){
    return mat->col;
}