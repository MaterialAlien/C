// Informe a locoalização do quadrante no plano cartesiano dos valores de par ordenado (x,y) informado

#include <stdio.h>
#include <math.h>

int main()
{
float x,y;

printf("Digite o valor de x: ");
scanf ("%f", &x);

printf ("Digite o valor de y: ");
scanf ("%f", &y);


if (x>0 && y>0)
    printf ("Quadrante 1");

if (x<0 && y>0)
    printf ("Quadrante 2");

if (x<0 && y<0)
    printf ("Quadrante 3");


if (x>0 && y<0)
    printf ("Quadrande 4");

if (x==0 && y==0)

    printf("Origem do plano cartesiano");

if (x==0 && y!=0)
    printf("Eixo Y");

if (x!=0 && y==0)
    printf("Eixo X");

return 0;

}


