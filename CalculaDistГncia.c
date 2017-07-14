// Calcular a distância entre duas coordenadas no plano cartesiano
#include <stdio.h>
#include <math.h>

main ()
{
    int X1,X2,Y1,Y2;

    printf ("Digite a coordenada X do ponto P1: ");
    scanf ("%d", &X1);
    printf ("Digite a coordenada Y do ponto P1: ");
    scanf ("%d", &Y1);
    printf ("Digite a coordenada X do ponto P2: ");
    scanf ("%d", &X2);
    printf ("Digite a coordenada y do ponto P2: ");
    scanf ("%d", &Y2);

    printf("Distancia entre P1 e P2: %.4f\n", sqrt(((pow(X2-X1,2)))+(pow(Y2-Y1,2))));

}








