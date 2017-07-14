// Fac¸a um programa que pec¸a ao usuario para digitar 10 valores e some-os

#include <stdio.h>

main()


{
    int cont=1,termo=1;
    float valor, soma=0;

    for (cont=1; cont<=10; cont++)
    {
        printf("Digite um numero para ser somado (Termo %d): ", termo);
        scanf("%f", &valor);
        soma=soma+valor;
        termo=termo+1;
        printf("\n\nSoma: %.2f\n\n", soma);

    }
    printf("\n\nSoma total: %.2f\n\n", soma);
}





