#include<stdio.h>

void main(){
    int x ;
    printf("Informe um numero: ");
    scanf(" %i", &x);
    if (x<0)
        printf("%i eh negativo", x);
    else if ( x == 0)
        printf("%i eh 0", x);
    else
        printf("%i eh postivo", x);
}