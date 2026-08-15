#include<stdio.h>

void main(){
    int n1;
    printf("Digite um numero entre 2-10: ");
    scanf(" %i", &n1);

    switch (n1)
    {
    case 2:
        printf("Primo");
        break;
    case 3:
        printf("Primo");
        break;
    case 5:
        printf("Primo");
        break;
    case 7:
        printf("Primo");
        break;
    default:
        printf("Nao eh primo");
        break;
    }
}
