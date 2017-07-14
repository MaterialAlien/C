#include <stdio.h>
#include <math.h>

main()

{

    int nmr,
    s=2, r=1;

 printf("Digite um numero inteiro: ");
 scanf("%d", &nmr);

 do
 {
  if (nmr%s==0)
    {
    r=r+1;
    s=s+1;
    }

 else s=s+1;
 r=0;

 } while (s<=nmr);

 if (r==2)

    printf("Numero primo");
    else printf("numero n primo");








}
