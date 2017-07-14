// Faça um programa que pec¸a ao usuario para digitar 10 valores e some-os


#include <stdio.h>

main()

{
    int termo=1, termosp=0, valor, soma=0, cont;
    float media;

    for(cont=1; cont<=10; cont++)

    {
        printf("\n\nDigite o valor %d: ", termo);
        scanf("%d", &valor);
        if (valor>=0)
            {
            soma=soma+valor;
            termo=termo+1;
            termosp=termosp+1;
            }
        else
            {
            printf("\n\nValor ignorado no calculo por ser negativo");
            termo=termo+1;
            }
    }

    printf("\n\nMedia dos termos calculados:%.2f\n\n", (float) soma/termosp);




}
