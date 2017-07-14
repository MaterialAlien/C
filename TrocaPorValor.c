#include<stdio.h>

main()
{
    int num1=1,num2=2;
    char pl1='b',pl2='e';

    printf("\nNumero 1");
    printf("\nDado na variavel num1: %d", num1);
    printf("\nEndereco da variavel num1: %d", &num1);
    printf("\nSegunda letra");
    printf("\nDado na variavel pl1: %c", pl1);
    printf("\nEndereco da variavel pl1: %d", &pl1);

    printf("\n\n\n\n");

    printf("\nInt: %d Bytes ", sizeof(int));
    printf("\nChar: %d Bytes ", sizeof(char));
    printf("\nDouble: %d Bytes ", sizeof(double));
    printf("\nfloat: %d Bytes ", sizeof(float));

    printf("\n\nEndereco de pl1:%d\nQuantidades de bytes utilizados:%d\n\n",&pl1,sizeof(pl1));



}
