#include <stdio.h>
#include <math.h>

main()

{
int ninic,nfinal,r=0,conts=1,cont;

printf("Digite o numero inicial do intervalo: ");
scanf("%d", &ninic);
printf("Digite o numero final do intervalo: ");
scanf("%d", &nfinal);

if (ninic==1)
    printf("1");

for (cont=ninic;cont<=nfinal; cont++)

  {
    for (conts=1; conts<=cont; conts++)
        {
        if(cont%conts==0)
            r=r+1;
        }
        if (r==2)
            printf("\n%d", cont);
            r=0;
    printf("\n");
  }
  }
