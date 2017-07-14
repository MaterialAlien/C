#include <stdio.h>
#include <math.h>

main()

{
int pos,n,n1,n2,cont,na,nb;
printf("Digite a posição do numero na sequencia de fibonacci que voce quer descobrir: ");
scanf("%d", &pos);
n1=1;
n2=1;
switch (pos)
{



   case 1:
   case 2: printf("\n\nNumero 1\n\n\n");
           break;
default:
    for (cont=3; cont<=pos; cont++)
{
n=n1+n2;
na=n2;
nb=n;
n1=n2;
n2=nb;
}
printf("\n\nNumero na posicao %ld: %d\n\n", pos, n);
}
}
