#include <stdio.h>

int troca_valor(int *x, int *y)
{
    int temp;
    temp=*y;
    *y=*x;
    *x=temp;
}

main()
{
    int a,b;
    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    printf("\nValor de A:%d   Endereco:%p", a,&a);
    printf("\nValor de B:%d   Endereco:%p", b,&b);


    troca_valor(&a,&b);

    printf("\nNovo valor de A:%d\nNovo valor de B:%d",a,b);
}
