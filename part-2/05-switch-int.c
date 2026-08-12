#include <stdio.h>

void main(){
    int opcao;
    printf("Digite 1, 2 ou 3: ");
    scanf(" %i", &opcao);

    switch (opcao){
        case 1:
            printf("Voce digitou 1");
            break;
        case 2:
            printf("Voce digitou 2");
            break;
        case 3:
            printf("Voce digitou 3");
            break;
        default:
            printf("Voce nao digitou nenhuma das opcoes");

    }
}