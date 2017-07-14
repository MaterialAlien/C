// Calcule a área do círculo através do raio informado

#include <stdio.h>
#include <math.h>

int main()
{

float raio, pi, area;

pi=3.1415;

printf("Digite o valor do raio: ");
scanf ("%f", &raio);

area=pi(*raio*raio);

printf("Valor do area: %f", area);

return 0;
}


