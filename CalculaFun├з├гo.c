#include <stdio.h>
#include <math.h>

main ()
{
int  b=-1,c=0,exp=-1,cont=3;
float valor,xp, tol,y, z,resultado=0;

printf("Digite um valor entre -1 e 1: ");
scanf("%f", &valor);
printf("Digite a tolerancia: ");
scanf("%f", &tol);

if (valor<=1 && valor>=-1)
    {
        do
        {


            if (cont%2!=0)
            {
            exp=exp+2;
            b=b+2;
            c=c+2;
            cont=cont+1;
            xp=pow(valor,exp);
            y=xp/(b*c);
            resultado=resultado+y;
            printf("\nResultadoV:%f", y);
            }
        else
            {
            exp=exp+2;
            b=b+2;
            c=c+2;
            cont=cont+1;
            xp=pow(valor,exp);
            y=xp/(b*c);
            resultado=resultado-y;
            printf("\nResultadoF:%f", y);
            }

        } while(tol<y);

printf("\n\nResultado:%f", resultado);

    }
else printf("Valor informado fora do intervalo -1 e 1");
}
