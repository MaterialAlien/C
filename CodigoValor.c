#include <stdio.h>

main ()


{
int codigo, valor, Resultado;

printf("Digite o codigo: ");
scanf("%d", &codigo);
printf("Digite o valor: ");
scanf("%d", &valor);

    if (codigo==5 || codigo==3)
        printf("Resultado:%d", valor-2);
else
    if (codigo==2 || codigo==4 || codigo==7)
    printf("Resultado:%d", valor);

else
    if (codigo==1)
    printf("Resultado:%d", valor+5);
else
    if (codigo==6)
    printf("Resultado:%d", (valor+1)*2);
else
    if (codigo==8 || codigo==9 || codigo==10)
    printf ("Resultado: 0");
else if (codigo==11)
    printf("Resultado: 123");
else
    printf ("Código digitado invalido");

}





