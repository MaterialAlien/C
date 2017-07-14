#include <stdio.h>
#define TAM 5

int calcula_fibonacci(int nro)
{
    int cont,termo,t1=1,t2=1;
    for(cont=1;cont<=nro-2;cont++)
        {
        termo=t1+t2;
        t1=t2;
        t2=termo;
        printf("\n%d", termo);
        }
    return termo;
}

main()
{
  int nro;
  printf("Digite a posição do numero do termo fibonacci: ");
  scanf("%d", &nro);
  printf("\nO termo %d da sequencia de fibonacci eh %d\n", nro, (calcula_fibonacci(nro)));
}

