#include <stdio.h>

void main(){
    int entrada, verifica;
    do {
        printf("Digite um numero inteiro: ");
        scanf(" %i", &entrada);

        if (entrada % 2 == 0)
            printf("Esse numero eh par\n");
        else
            printf("Esse numero eh impar\n");

        printf("Deseja continuar\n"
                "1 - continuar\n"
                "-1 - encerrar\n");
        scanf(" %i", &verifica);
    }while (verifica != -1);
    
}