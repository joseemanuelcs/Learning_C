#include<stdio.h>

int main(){
    int n1;
    int n2;
    int n3;
    

    printf("Digite o primeiro numero: ");
    scanf(" %i",&n1);
    printf("Digite o segundo numero: ");
    scanf(" %i",&n2);
    printf("Digite o terceiro numero: ");
    scanf(" %i",&n3);
    printf("A media eh %.2f\n", (float)(n1+n2+n3)/3);
    return 0;

}