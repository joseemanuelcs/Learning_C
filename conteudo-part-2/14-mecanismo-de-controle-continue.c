#include <stdio.h>

void main(){

    int entrada;

    do {
        printf("Digite um numero positivo para saber se eh impar ou par\n"
               "Digite -1 - SAIR: ");

        scanf("%d", &entrada);

        if (entrada == -1)
            break;
        if (entrada < 0)
            continue;
        if (entrada % 2 == 0)
            printf("Esse numero eh par");
        else 
            printf("Esse numero eh impar");
    }while (1);
    
}