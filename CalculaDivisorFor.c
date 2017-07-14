/* Faca um algoritmo que leia um numero positivo e imprima seus divisores e a soma de todos os divisores ´
desse numero, com excec dele messmo */


#include <stdio.h>
#include <math.h>

main()

{
    int numero, divisor,nmenos, soma=0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

nmenos=numero-1;

for (divisor=1; divisor<=nmenos; divisor++)
    {
        if (numero%divisor==0)

            {
            soma=soma+divisor;
            // printf("%d\n", soma);
            printf("\nDivisor: %d\n", divisor);
            }
    }

    printf("\nA soma dos divisores de %d eh %d\n", numero, soma);

 }
