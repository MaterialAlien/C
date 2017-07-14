#include <stdio.h>

float maior(float A,float B,float C)
{
    float maior;
    maior=B;
    if (A>B)
        maior=A;
    if (A<C)
        maior=C;
    return maior;
}

float menor (float A, float B, float C)
{
   float menor;
   menor=B;
   if (A<B)
        menor=A;
   if (A>C)
        menor=C;
   return menor;
}
float media (float A,float B, float C)
{
    float media;
    media=(A+B+C)/3;
    return media;
}
int menu()
{
    int op;
    printf("\nMaior valor -opcao 1-\nMenor valor -opcao 2-\nMedia aritmetica -opcao 3-\nSair -qualquer outro valor-");
    printf("\n\nEntre com sua opcao (numero inteiro): ");
    scanf("%d", &op);
    return op;

}
main()
{
    float A,B,C;
    int op1;
    char SN;
    do
    {
    printf("\nDigite o valor A: ");
    scanf("%f", &A);
    printf("Digite o valor B: ");
    scanf("%f", &B);
    printf("Digite o valor C: ");
    scanf("%f", &C);
    op1=menu();
    switch(op1)
        {
        case 1: printf("Maior valor eh %.2f", maior(A,B,C));
                break;
        case 2: printf("Menor valor eh %.2f", menor(A,B,C));
                break;
        case 3: printf("Media eh %.2f", media (A,B,C));
                break;
        }
    do
    {
    printf("\nDeseja continuar S/N?: ");
    scanf(" %c", &SN);
    }
    while(SN!='S' && SN!='s' &&SN!='N' && SN!='n');
    }
while (SN=='S' || SN=='s');
}
