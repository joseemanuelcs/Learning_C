#include <stdio.h>

void main(){
    int x;

    printf("Digite um numero: ");
    scanf(" %i", &x);

    if (x % 2 == 0)
    {
        printf("%i eh par\n", x);
    }

    if (x % 2 != 0)
    {
        printf("%i eh impar", x);
    }
        
}