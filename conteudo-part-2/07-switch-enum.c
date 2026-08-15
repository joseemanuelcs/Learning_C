#include <stdio.h>
enum dia {domingo, segunda, terca, quarta, quinta, sexta, sabado};

void main(){
    enum dia d;

    printf("Digite um numero de (0, 6)");
    scanf(" %i", &d);

    switch (d)
    {
        case domingo:
            printf("Domingo, dia de dormir");
            break;
        case segunda:
            printf("Segunda, dia de trabalhar");
            break;
        case terca:
            printf("Terca");
            break;
        case quarta:
            printf("Quarta");
            break;
    }


}