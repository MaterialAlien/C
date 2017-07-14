#include <stdio.h>
#include <math.h>

#define PI 3.1415

void menu()

{
    printf(" \n1-Area\n2-Excentricidade");
}

void area(int a,int b)
{
    float Area;
    Area=PI*a*b;
    printf("\nA area eh %f\n", Area);
}

void elipse (int a, int b)
{
    float ex;
    if (a>b)
    {
    ex=sqrt((pow(a,2)-pow(b,2))/pow(a,2));
    printf("\nA sua excentricidade eh %f\n", ex);
    }
    else printf("Lado A menor do que o lado B");
}
int main()
{
    int a,b,op;
    printf("\nDigite o valor de A: ");
    scanf("%d",&a);
    printf("\nDigite o valor de B:");
    scanf("%d",&b);

    menu();
    printf("\nInforme a sua opcao: ");
    scanf("%d", &op);

    if (op==1)
        area(a,b);
    else if(op==2)
        elipse(a,b);
    else  printf("\nOpcap inavalida");
}






