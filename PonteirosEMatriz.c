
11222288484#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
void media(int *num)
{
    int cont;
    float soma=0;
        for(cont=0;cont<35;cont++)
            if (cont<=5 || cont>=18 && cont<24 || cont%6==0 || (cont+1)%6==0)
                soma+=*(num+cont);
        printf("\nA media da regiao assinalada eh %.2f\n", soma/20);
}

void maior(int *num)
{

    int maior=*(num+0),cont;
    for(cont=0;cont<35;cont++)
        if (maior<*(num+cont))
        maior=*(num+cont);
    printf("\nO maior termo da matriz eh %d\n", maior);

}
void term0(int *num, int termo)
{
int cont,cont2=0;
for(cont=0;cont<35;cont++)
    if ((*(num+cont))==termo)
        cont2+=1;
if (cont2!=0)
    printf("\nO termo digitado esta na matriz\n");
else
    printf("\nO termo digitado n esta na matriz\n");
}

void diagonal(int *num)
{
int cont;
printf("\nNumeros na diagonal: ");
for(cont=0;cont<36;cont++)
    if (cont%7==0)
        printf("%d ", *(num+cont));
}

main()
{
    int num[6][6],contl,contc,termo;
    srand(time(NULL));

    for(contl=0;contl<6;contl++)
        for(contc=0;contc<6;contc++)
            num[contl][contc]=(1+(rand()%200));

     for(contl=0;contl<6;contl++)
        for(contc=0;contc<6;contc++)
            if (contc==0)
                {
                    printf("\n");
                    printf("%10d", num[contl][contc]);
                }
            else
                printf("%4d", num[contl][contc]);

printf("\n\nDigite um numero para ver se ele aparece na matriz: ");
scanf("%d", &termo);

media(num);
maior(num);
term0(num,termo);
diagonal(num);

printf("\n\n");
}
