#include<stdio.h>

void main(){
    int n;
    printf("Digite um numero de (1 a 7): ");
    scanf(" %i", &n);

    switch (n)
    {
    case 1:
        printf("Segunda");
        break;
    case 2:
        printf("Terca");
        break;
    case 3:
        printf("Quarta");
        break;
    case 4:
        printf("Quinta");
        break;
    case 5:
        printf("Sexta");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
        printf("Dia Invalido");
        break;
    }
}