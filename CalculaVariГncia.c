#include <stdio.h>
#include <math.h>

#define TERMOS 40

main()

{
    float num[TERMOS], soma=0, media,psoma=0,raiz,sub=0;
    int termo=0, QTERMOS=0,cont=0;


    printf("Digite um numero real positivo ou digite um negativo qualquer para sair: ");
    scanf("%f", &num[termo]);

        while (num[termo]>0)
        {
        soma=soma+num[termo];
        QTERMOS=QTERMOS+1;
        termo=termo+1;
        printf("\nDigite um numero real positivo ou digite um negativo qualquer para sair: ");
        scanf("%f", &num[termo]);
        }

    media=soma/QTERMOS;
    soma=0;

        for (termo=0; termo<QTERMOS; termo++)
        {
        sub=num[termo]-media;
        sub=pow(sub,2);
        soma=soma+sub;
        sub=0;
        }

psoma=0;

        for (termo=0; termo<QTERMOS; termo++)
        {
            psoma=psoma+sqrt(num[termo]);
        }

        psoma=psoma/QTERMOS;


printf("\nA media quadrada dos valores informados eh %.3f\n", soma);
printf("\nA media das raizes quadradas eh %.3f\n", psoma);


        for (termo=0; termo<QTERMOS; termo++)
        if ((num[termo]<soma) && (num[termo]>psoma))
            {
            cont=cont+1;
            }
printf("\nQuantidade de termos entre %.3f e %.3f eh %d\n", soma, psoma,cont);

}
