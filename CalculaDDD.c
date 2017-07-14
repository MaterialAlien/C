#include <stdio.h>


typedef struct str
{
    char nome[20];
    int prefixo;
    int telefone ;
} ESTRUTURA;

main()
{
    ESTRUTURA dados;
    FILE *arq;
    char SAIR='0';

    if((arq=fopen("dados.txt","a+"))==NULL)
        printf("\nErro de abertura de arqivo");
    else
    {
        do
        {
            printf("\nDigite o nome da pessoas: ");
            fflush(stdin);
            gets(dados.nome);
            printf("\nDigite o DDD: ");
            scanf("%d", &dados.prefixo);
            printf("\nDigite o telefone: ");
            scanf("%d", &dados.telefone);

            if(fprintf(arq,"%s %d %d\n",dados.nome,dados.prefixo,dados.telefone)<0)
                printf("\nErro de escrita");

            printf("\n\nDeseja continuar? 1 para sim, qualquer outra tecla para nao: ");
            scanf(" %c", &SAIR);
        }
        while(SAIR=='1');
    }
}
