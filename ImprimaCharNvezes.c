/* Fazer uma função que imprime na tela n vezes um caractere c qualquer,
digitado pelo usuário. */

#include <stdio.h>



void imprima(int n,char c)
{
    int cont;
    for(cont=1; cont<=n;cont++)
        {
        printf("\n%c", c);
        printf("\n");
        }
}


int main()
{
int n;
char c;

printf("Digite um numero: ");
scanf("%d", &n);
printf("Digite um caractere: ");
scanf(" %c", &c);

imprima(n,c);

return 0;
}
