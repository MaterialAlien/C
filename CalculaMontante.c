// Calcula montante

#include <stdio.h>
#include <math.h.>
int main()
{
float C,R,M,F;
int N;
printf ("Digite a montante inicial: ");
scanf ("%f", &C);
printf ("Digite a taxa de rendimento: ");
scanf ("%f", &R);
printf ("Digite o numero de meses: ");
scanf ("%f", &N);
F=(1+R/100);
M=C*pow(F,N);
printf ("Montante final:%.2f",M);
return 0;

}

