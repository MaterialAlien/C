/* Escrever um programa que preenche uma matriz m (12,13) por leitura e divide
todos o 13 elementos de cada uma das 12 linhas de m pelo valor do maior elemento em módulo daquela
linha. Escrever a matriz m lida e a matriz mm modificada. */

#include <stdio.h>
#include <math.h>

#define TAM1 12
#define TAM2 13

main()

{
int cont1,cont2;
float num[TAM1][TAM2], maior[TAM1],maioR;

for (cont1=0; cont1<TAM1; cont1++)
    for (cont2=0; cont2<TAM2; cont2++)
        {
        printf("Digite o valor da linha %d e coluna %d: ", cont1,cont2);
        scanf("%f", &num[cont1][cont2]);
        }

for (cont1=0; cont1<TAM1; cont1++)
    for (cont2=0; cont2<TAM2; cont2++)
        if (cont2==0)
        printf("\n%5.2f",num[cont1][cont2]);
        else
        printf("%5.2f",num[cont1][cont2]);


printf("\n\n");

for (cont1=0; cont1<TAM1; cont1++)
    {
    maioR=0;
    for (cont2=0; cont2<TAM2; cont2++)
        {
        if (num[cont1][cont2]>maioR)
            {
            maioR=num[cont1][cont2];
            maior[cont1]=num[cont1][cont2];
            }
        }
    }

for (cont1=0; cont1<TAM1; cont1++)
    printf("\nMaior elemento da linha %d eh %.2f", cont1,maior[cont1]);

printf("\n\n");

for (cont1=0; cont1<TAM1; cont1++)
    for (cont2=0; cont2<TAM2; cont2++)
        {
        num[cont1][cont2]=(num[cont1][cont2])/maior[cont1];
        if (cont2==0)
        printf("\n%5.2f",num[cont1][cont2]);
        else
        printf("%5.2f",num[cont1][cont2]);
        }


}



