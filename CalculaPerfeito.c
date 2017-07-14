

/* Para n números inteiros positivos fornecidos, indique os
que são números perfeitos. */

#include <stdio.h>
#include <math.h>

main()

{
int num, div, divmax,somadiv=0, getout;

do{
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

/* if (num%2==0)
{   divmax=num/2; */

    for (div=1; div<num; div++)
    {
        if (num%div==0)
            somadiv=somadiv+div;
    }

    if (somadiv==num)
        printf("\nNumero perfeito!\n");
    else printf("\nNumero imperfeito :(");

printf("\nDigite 0 para sair da iteracao ou qualquer numero pra continuar: ");
scanf("%d", &getout);

div=0;
divmax=0;
somadiv=0;

} while (getout!=0);

}
