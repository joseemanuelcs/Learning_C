#include<stdio.h>

void main(){
    int n1;
    int n2;

    printf("Digite um numero: ");
    scanf(" %i", &n1);
    printf("Digite outro numero: ");
    scanf(" %i", &n2);

    if ( n1 > n2)
        printf(" %i eh maior", n1);

    else if (n1 < n2)
        printf(" %i eh maior", n2);

    else  
        printf("Sao iguais");


}