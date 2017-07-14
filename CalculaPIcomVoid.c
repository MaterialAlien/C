#include <stdio.h>
#include <math.h>

void Calcula_PI (float tol)
{
    int k=0;
    float PI=0, num,div;

    num=sqrt(12)*pow(-3,-k);
    div=(2*k)+1;

    while(abs(num/div)>tol)
        {
            PI=PI+(num/div);
            k=k+1;
            num=(sqrt(12))*pow(-3,(-k));
            div=2*k+1;
        }
    printf("\nO valor aproximado de pi eh %f", PI);
}
int main()

{
    float tol;

    printf("Digte a tolerancia: ");
    scanf("%f", &tol);

    Calcula_PI(tol);
    return 0;
}
