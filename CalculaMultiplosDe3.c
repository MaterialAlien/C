// Calcula multiplos de 3

#include <stdio.h>

main()

{
    int xm,cont, x, xc = 3;

    printf("Digite quantos multiplos de 3 voce quer ver na tela: ");
    scanf("%d", &xm);

    if (xm<=0)
        printf("Quantidade valida");
    else
        for (cont=1; cont<=xm; cont++)
    {
        x=xc*cont;
        printf("\n%d\n", x);
    }

}




