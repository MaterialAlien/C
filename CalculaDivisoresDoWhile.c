/* Faca um algoritmo que leia um numero positivo e imprima seus divisores e a soma de todos os divisores ´
desse numero, com excec dele messmo */


#include <stdio.h>
#include <math.h>

main()

{
    int numero, nmenos, soma=0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    nmenos=numero-1;

    do
    {
        if (numero%nmenos==0)
            {
            soma=soma+nmenos;
           // printf("%d\n", soma);
           printf("\nDivisor: %d\n", nmenos);
            }

            nmenos=nmenos-1;

    }   while (nmenos>=1);

    printf("\nA soma dos divisores de %d eh %d\n", numero, soma);
}
