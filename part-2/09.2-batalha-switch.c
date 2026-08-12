#include <stdio.h>

void main()
{
    int d;
    printf("Digite um dia da semana (0 a 6): ");
    scanf("%i", &d);

    switch (d){
    case 0:
        printf("Domingo\n");
        break;
    case 1:
        printf("Segunda\n");
        break;
    case 2:
        printf("Terca\n");
        break;
    }

}
