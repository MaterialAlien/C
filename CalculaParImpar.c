/* Leia um n�mero inteiro. Se o n�mero lido for positivo, escreva uma mensagem indicando se
ele � par ou �mpar. */

#include <stdio.h>
#include <math.h>

main()


{

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero>0)
        if (numero%2==0)
                printf("\n\nNumero Par\n\n");
        else
                printf("\n\nNumero Impar\n\n");

}

