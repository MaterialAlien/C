#include <stdio.h>


void menuop(void)

{
    printf("Opcao 1\n");
    printf("Opcao 2\n");
    printf("Opcao 3\n");
}

void hello()
{
    int cont;
    for(cont=1;cont<5;cont++)
    printf("\nHello");

}

int main()

{
    menuop();
    hello();
    return 0;

}

