#include <stdio.h>

void inters(int *a,int na,int *b,int nb,int *c,int *nc)
{
    int contA,contB,Nc;
    Nc=*nc;
    for(contA=0;contA<na;contA++)
    for(contB=0;contB<nb;contB++)
     {
        if((*(a+contA))==(*(b+contB)))
        {
            *(c+Nc)=*(a+contA);
                Nc=Nc+1;
        }
     }
     *nc=Nc;
}


main()

{
    int a[40],b[40],na=0,nb=0,c[5],nc=0,cont;

    printf("Entre com o numero de vetores do conjunto A: ");
    scanf("%d",&na);

    for(cont=0;cont<na;cont++)
    {
    printf("Digite o termo %d do conjunto A: ",cont);
    scanf("%d", &a[cont]);
    }
    printf("\n\n");
    printf("Entre com o numero de vetores do conjunto B: ");
    scanf("%d",&nb);
    for(cont=0;cont<nb;cont++)
    {
    printf("Digite o termo %d do conjunto B: ",cont);
    scanf("%d", &b[cont]);
    }
    inters(a,na,b,nb,c,&nc);

    if(nc==0)
        printf("\n\nConjunto vazio");
    else
    {
    printf("\nVetores na intersecao:\n");
    for(cont=0;cont<nc;cont++)
        printf("%d ",c[cont]);
    }
    printf("\n\n");
}
