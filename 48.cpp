#include<stdio.h>
# define DIM 50
main(){
    int i,j;
    j=0;
    while(j<DIM){
        i=0;
        while(i<DIM-j){
            printf("*");
            i++;
        }
        i=0;
        while(i<2*j){
            printf(" ");
            i++;
        }
        i=0;
        while(i<DIM-j){
            printf("*");
            i++;
        }
        printf("\n");
        j++;
    }
    j=0;
    while(j>=0){
        i=0;
        while(i<DIM-j){
        printf("*");
        i++;
        }
        i=0;
        while(i<2*j){
        printf(" ");
        i++;
        }
        i=0;
        while(i<DIM-j){
        printf("*");
        i++;
        }
        printf("\n");
        j--;
    }
}
