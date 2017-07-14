#include <stdio.h>
#define TAM 50

typedef struct dados
    {
        int codigo[TAM];
        int quantidade=0;
        char tipo[TAM];
        char nome[20][TAM];
    } DADOS;


cadastraProduto(DADOS *dados)
{
    int cont,cont2;
    char SN;
    for(cont=0;cont<6;cont++)
    {
        cont2=0;
        printf("\nDia %d",cont);
        do
        {
            printf("Digite o codigo do produto: ");
            scanf("%d", &dados[cont].codigo[cont2]);
            printf("\nDigite o nome do produto");
            gets(dados[cont].nome[cont2]);
            printf("\nDigite  o tipo: P para pequeno, M para medio ou G para grande");
            scanf(" %c", &dados[cont].tipo[cont2]);
            cont2+=1;
            *dados[cont].quantidade=cont2;
                do
                {
                printf("\nHa mais mercadorias para cadastrar nesse dia? S para SIM - N para nao");
                scanf(" %c", &SN);
                }while(SN!= 'S' && SN!='s'  && SN!='N' && SN!='n');
        }while(SN=='S' || SN=='s');
    }
}

imprimeDados(DADOS *dados)
{
    int soma[4]={0,0,0,0},somaSEMANAL[4]={0,0,0,0},cont,cont2,cont3,cont4;
    char nomes[20][4]={"calcinha","meia","cueca","sutia"};

    for(cont=0;cont<6;cont++)
    {
        aux=dados[cont].quantidade;
        for(cont4=0;cont4<5;cont4++)
            soma[cont]=0;
        for(cont2=0;cont2<aux;cont2++)
        {
            switch(dados[cont].nome[cont3])

            case 'calcinha': soma[0]+=1;
                             somaSEMANAL[0]+=1;
                            break;
            case 'meia': soma[1]+=1;
                         somaSEMANAL[1]+=1;
                        break;
            case 'cueca': soma[2]+=1;
                          somaSEMANAL[2]+=1;
                        break;
            case 'sutia': soma[3]+=1;
                          somaSEMANAL[3]+=1;
        }
    }

    for(cont=0;cont<6;cont++)
            printf("\nTotal de %s vendidos(as) no dia %d: ", nomes[cont],cont,soma[cont]);

    for(cont=0;cont<3;cont++)
        printf("Media de venda semanal de %s: %d", nomes[cont],somaSEMANAL[cont]/6);

}

main()

{
    DADOS dados[6];

    cadastraProduto(dados);
    imprimeDados(dados);
}

