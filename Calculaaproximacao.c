#include <stdio.h>
#include <math.h>

main()

{
    int valor1,valor2,valor3,abs1,abs2;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor2);


    if(valor2!=0)
    {

        do
        {
            printf("Digite um valor inteiro: ");
            scanf("%d", &valor3);

            abs1=abs(valor1-valor2);
            abs2=abs(valor1-valor3);

            if(abs2<abs1)
                valor2=valor3;

        }
        while(valor3!=0);

        printf("O numero mais proximo de %d eh %d", valor1, valor2);
    }

    else
        printf("Nenhum numero digitado");

}
