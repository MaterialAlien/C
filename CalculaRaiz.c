// Calcula os Xs possíveis que satisfaçam a igualdade a partir do A informado
#include <stdio.h>
#include <math.h>

int main ()

{

float X1,X2,A;

printf ("Digite o valor para A para X.X-A=0: ");
scanf("%f", &A);

if (A>0)
{
X1=(sqrt(A));
X2=-(sqrt(A));
printf ("Raiz1:%.2f\n", X1);
printf ("Raiz2:%.2f", X2);
}
else
    if (A<0)
    printf ("Nao ha numeros reais que satisfacam X.X-A=0");

    else
            printf ("X1=0 \nX2=0");
return 0;
 }











