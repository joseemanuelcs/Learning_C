#include <stdio.h>

void main(){
    char opcao;
    printf("Digite A, B ou C: ");
    scanf(" %i", &opcao);

    switch (opcao){
        case 1:
            printf("Voce digitou A");
            break;
        case 2:
            printf("Voce digitou B");
            break;
        case 3:
            printf("Voce digitou C");
            break;
        default:
            printf("Voce nao digitou nenhuma das opcoes. Voce digitou %c", opcao);

    }
}