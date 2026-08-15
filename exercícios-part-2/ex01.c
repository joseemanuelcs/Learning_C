#include<stdio.h>

void main(){
    int n;
    printf("Digite um numero: ");
    scanf(" %i", &n);

    if (n % 2 == 0)
        printf("Esse numero eh par");

    else
        printf("Esse numero eh impar");
        
}