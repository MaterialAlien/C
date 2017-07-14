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
            printf("%d\n", soma);
            }

            nmenos=nmenos-1;

    }   while (nmenos>=1);

    printf("A soma dos divisores de %d eh %d", numero, soma);
}
