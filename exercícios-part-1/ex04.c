#include <stdio.h>

void main(){
    int tempo;

    printf("Informe a quantidade de segundos: ");
    scanf(" %i", &tempo);
    printf("Voce informou %is\n", tempo);
    printf("Essa quantidade de segundos em minutos eh %im\n", (tempo/60));
    printf("Essa quantidade de segundos em horas eh %.2fh", (float)(tempo/60)/60);

}