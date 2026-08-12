#include <stdio.h>

void main() {
    float raio;

    printf("VAMOS CALCULAR A AREA E O VOLUME DE UMA ESFERA\n");
    printf("Informe o raio: ");
    scanf("%f", &raio); 
    printf("A area dessa esfera e %.2f\n", 4*3.1415*raio);
    printf("O volume dessa esfera e %.2f\n", (4.0*3.1415*raio)3);
    return 0;
}