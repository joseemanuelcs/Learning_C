#include<stdio.h>

void main(){
    float base;
    float altura;

    printf("Digite o comprimento da base: ");
    scanf(" %f", &base);
    printf("Digite a altura ");
    scanf(" %f", &altura);

    printf("A área desse triangula eh %.2f", (base*altura)/2);


}