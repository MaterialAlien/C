#include <stdio.h>
#include <math.h>

void acha_raiz(float a,float b,float c,float *raiz1,float *raiz2)
{
    float delta;
    delta=(b*b-4*a*c);
    if (delta<0)
    {
    *raiz1=-b/(2*a);
    *raiz2=-b/(2*a);
    }
    else
    {
    delta=sqrt(delta);
    *raiz1=(-b+delta)/(2*a);
    *raiz2=(-b-delta)/(2*a);
    }
}

main()

{
    float a,b,c,raiz1,raiz2;

    printf("Digite os coeficentes da Equacao");
    printf("\nA: ");
    scanf("%f",&a);
    printf("\nB: ");
    scanf("%f",&b);
    printf("\nC: ");
    scanf("%f",&c);

    acha_raiz(a,b,c,&raiz1,&raiz2);
    printf("\nRaiz 1:%.2f\nRaiz 2:%.2f\n",raiz1,raiz2);
}
