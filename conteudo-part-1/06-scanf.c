#include<stdio.h>

void main(){
    int idade;
    float altura;
    char letra_favorita;

    printf("Qual a sua idade?\n");
    scanf(" %i",&idade);
    printf("Qual é a sua altura?\n");
    scanf(" %f",&altura);
    printf("Qual a sua letra favorita?\n");
    scanf(" %c",&letra_favorita);

    printf("Qual a sua idade: %i\n"\
    "Qual a sua altura: %f\n"\
    "Qual a sua letra favorita %c\n"\
    ,idade, altura, letra_favorita);

} 