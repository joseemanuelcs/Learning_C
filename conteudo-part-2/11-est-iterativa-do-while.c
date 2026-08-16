#include  <stdio.h>

void main()
{
    int i = 0;
    int entrada;
    do
    {
        printf("O valor de i eh: %d\n", i);
        i++;
        printf("Voce gostaria de sair do programa?\n");
        printf("Digite 0 para sair \n");
        printf("Digite 1 para continuar\n");
        scanf(" %d", &entrada);
    } while (entrada );
    
    
}
