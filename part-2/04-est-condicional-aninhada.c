#include<stdio.h>

void main(){
    int x;
    printf("Informe um numero: ");
    scanf(" %i", &x);

    if (x >0)
        if ( x % 2 == 0)
            printf("%i eh par", x);
        else
            printf("%i eh impar", x);
}
