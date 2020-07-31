#include <stdio.h>
#include <stdlib.h>
#include "A4MatrizClenio.h"

int main (int argc, char *argv[]){
    float a,b,c,d;
    int i,j;
    Matriz* M;
    M=cria (5,5);
    atribui(M,1,2,40);

    //atribui(M,2,3,3);
    //atribui(M,3,5,15);
    //atribui(M,5,1,21);
    a= acessa (M,1,2);
    b= acessa (M,2,3);
    //c= acessa (M,3,5);
    //d= acessa (M,5,1);
    printf("M[1][2]: %4.2f \n", a);
    printf("M[2][3]: %4.2f \n", b);
    printf("M[3][5]: %4.2f \n", c);
    printf("M[5][1]: %4.2f \n", d);

    for(i=0;i<=5;i++){
        for(j=0;j<=5;j++){
            printf("%d",M[i][j]);
        }
        printf("\n");
    }


    system("PAUSE");
    return 0;

}