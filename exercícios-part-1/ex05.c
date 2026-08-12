#include<stdio.h>

void main(){
    int number;

    printf("Informe um numero: ");
    scanf(" %i", &number);
    printf("A soma dos numeros de 1 ate %i eh %i", number, (number*(number+1))/2);
}