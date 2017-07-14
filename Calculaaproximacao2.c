#include <stdio.h>

main()

{
int valor,valor2,valort,valora;

printf("Digite um valor inteiro: ");
scanf("%d", &valor);
valort=valor;

if (valor>0)
{
    do

{
printf("Digite um valor inteiro: ");
scanf("%d", &valor2);
    if (valor>valor2)
    {
    if (valort>valor-valor2)
       {
       valort=valor-valor2;
        valora=valor2;
        }
    }
    else if (valor<valor2)
         if (valort>valor2-valor)
       {
       valort=valor2-valor;
        valora=valor2;
        }

}
while(valor2!=0);

printf("O numero mais proximo de %d eh %d", valor, valora);
}
else
    if (valor<0)

        {
    do

{
printf("Digite um valor inteiro: ");
scanf("%d", &valor2);
    if (valor>valor2)
    {
    if (valort>valor+valor2)
       {
       valort=valor+valor2;
        valora=valor2;
        }
    }
    else if (valor<valor2)
         if ((abs(valort))<abs(valor2+valor))
       {
       valort=valor2+valor;
        valora=valor2;
        }

}


while(valor2!=0);

printf("O numero mais proximo de %d eh %d", valor, valora);


}
}













