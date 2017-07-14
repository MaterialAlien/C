#include <stdio.h>
#include <math.h>
#include <ctype.h>


char triangulo(float a, float b, float c)
{
    char  letra;
    float area,t;
    if (abs(b-c)<a && a<(b+c) && abs(a-c)<b && b<(a+c) && abs(a-b)<c && c<(a+b))
        {
        if (a==b && a==c)
            {
            letra='Q';
            printf("\nTriangulo equilatero");
            }
        else if (a==b && a!=c || a==c && a!=b || b==c && b!=a)
            {
            letra='I';
            printf("\nTriangulo isosceles");
            }
        else if (a!=b && a!=c && b!=c)
            {
            letra='E';
            printf("\nTriangulo escaleno");
            }
        }
    else
        {
        letra='X';
        printf("Nao eh um triangulo");
        }
}

char lesn()
{
    char sn;
    do
    {
    printf("\nDeseja continuar? (S para Sim e N para Nao) ");
    scanf(" %c", &sn);
    sn=toupper(sn);
    if (sn!='S' && sn!='N')
        printf("\nResposta Invalida");
    } while (sn!='S' && sn!='N');
    return sn;

}

main()
{
    float a,b,c,t,area,resp;
    do
    {
    printf("\nDigite A: ");
    scanf("%f", &a);
    printf("\nDigite B: ");
    scanf("%f", &b);
    printf("\nDigite C: ");
    scanf("%f", &c);
    if ((triangulo(a,b,c))!='X')
    {
    t=(a+b+c)/2;
    area=sqrt(t*(t-a)*(t-b)*(t-c));
    printf(" \nArea de %.2f\n", area);
    resp=lesn();
    }
    else
    resp=lesn();
    } while (resp=='S');
}
