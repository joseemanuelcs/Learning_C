#include <stdio.h>

void main(){
    int entrada;
    do
    {
        printf("Digite um numero positivo para saber se eh impar ou par\n"
        "ou digite um numero negativo para sair do programa: ");
        scanf(" %d", &entrada);

        if (entrada == -1)
            break;
        if (entrada % 2 == 0)
            printf("Esse numero eh par\n");
        else
            printf("Esse numero eh impar\n");
    }while (1);
}