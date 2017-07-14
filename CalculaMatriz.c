#include <stdio.h>
#include <math.h>

#define TAM1 3
#define TAM2 5

main()

{
    int coluna,linha,linhaE,colunaE,cont1,cont2,posmaior,menorq=0;
    float media[TAM2],num[TAM1][TAM2],maior=0,multi=1,soma=0,elemento;


for (cont1=0; cont1<TAM1; cont1++)
    for (cont2=0; cont2<TAM2; cont2++)
        {
        printf("Digite o valor da linha %d e coluna %d: ", cont1,cont2);
        scanf("%f", &num[cont1][cont2]);
        }

printf("\nDigite um elemento para achar na matriz: ");
scanf("%f", &elemento);

for (cont1=0; cont1<TAM1; cont1++)
    for (cont2=0; cont2<TAM2; cont2++)
        {

        if (num[cont1][cont2]==elemento)
            {
            linhaE=cont1;
            colunaE=cont2;
            }

        if (num[cont1][cont2]!=0)
            multi=multi*num[cont1][cont2];

        if (num[cont1][cont2]<0)
            menorq=menorq+1;

        if (cont2==0)
            printf("\n%6.2f", num[cont1][cont2]);
        else
            printf("%6.2f", num[cont1][cont2]);
        }





for (cont1=0; cont1<TAM1; cont1++)
    {
    maior=0;
    posmaior=0;
    for (cont2=0; cont2<TAM2; cont2++)
        {
        if (num[cont1][cont2]>maior)
            {
            maior=num[cont1][cont2];
            posmaior=cont2;
            }
        }
    printf("\n\nMaior elemento da linha %d eh %f\n", cont1,num[cont1][posmaior]);
    }


for (cont2=0;cont2<TAM2;cont2++)
    {
    soma=0;
    for (cont1=0; cont1<TAM1; cont1++)
    {
    soma=soma+num[cont1][cont2];
    }
    media[cont2]=soma/TAM1;
    }

for (cont2=0; cont2<TAM2; cont2++)
    printf("\nA media da coluna %d eh %.2f", cont2, media[cont2]);


printf("\n\nA multiplicacaoo de todos os elementos da matriz eh %.2f", multi);

printf("\n\nO elemento %.2f estah na linha %d e na coluna %d\n\n", elemento, linhaE, colunaE);



}















