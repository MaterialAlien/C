/* Dados três valores, calcular e imprimir as médias aritmética e harmônica destes valores. */
#include <stdio.h>
#include <math.h>

main ()
{
float A,B,C,MediaH,MediaA;

printf ("Digite o valor A: ");
scanf ("%f", &A);
printf ("Digite o valor B: ");
scanf ("%f", &B);
printf ("Digite o valor C: ");
scanf ("%f", &C);

MediaH=3/((1/A)+(1/B)+(1/C));
MediaA=(A+B+C)/3;

printf ("Media harmonica: %.2f\nMedia aritmetica: %.2f", MediaH,MediaA);


}

















