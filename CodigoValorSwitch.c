#include <stdio.h>

main ()
{
int codigo, valor, Resultado;

printf("Digite o codigo: ");
scanf("%d", &codigo);
printf("Digite o valor: ");
scanf("%d", &valor);

switch (codigo)
{
case 3:
case 5:printf("Resultado:%d", valor-2);
            break;
case 2:
case 4:
case 7:printf("Resultado:%d", valor);
            break;
case 1:printf("Resultado:%d", valor+5);
            break;
case 6:printf("Resultado:%d", 2*(valor+1));
            break;
case 8:
case 9:
case 10:printf("Resultado 0");
            break;
case 11:printf("Resultado 123");
            break;
default: printf("Codigo Invalido");

}
}
