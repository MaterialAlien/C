#include <stdio.h>
#include <math.h>

#define TAM 5

main()

{

float valor[TAM],VALOR,menorL;
int cont=0, num, menor,posmenor,num1;

for (num=0; num<TAM; num++)
            {
            printf("Digite um numero real qualquer: ");
            scanf("%f", &valor[num]);
            }
for (num=0; num<TAM; num++)
            {
            printf("\n%.2f", valor[num]);
            }
printf("\n\nDigite um numero real para para ver se ele esta no arranjo: ");
scanf("%f", &VALOR);

for (num=0; num<TAM; num++)
        {
            if (VALOR==(valor[num]))
                cont+=1;
        }

printf("\n\nO valor %.0f apareceu %d vezes\n", VALOR, cont);

for (num=0; num<TAM; num+=1)
    {
    menor=valor[num];
    menorL=menor;
    posmenor=num;
    cont=num+1;
    for(num1=cont;num1<TAM; num1++)
        {
            if (valor[num1]<menor)
            {
            menor=valor[num1];
            posmenor=num1;
            }
        }
    valor[num]=menor;
    valor[posmenor]=menorL;
    }

for (num=0; num<TAM; num++)
    printf("\n%f\n", valor[num]);

}






