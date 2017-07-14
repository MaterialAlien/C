#include <stdio.h>
#include <string.h>
#define TAM 5

typedef struct eletro
{
    char nome[16]; //nome do eletrodomestico
    int quantidade; //quantidade em estoque
} ESTRUTURA;

void registro(FILE *arq, ESTRUTURA dados)
{
    char sair='1';

    if((arq=fopen("arquivo.bin","ab"))==NULL)
        printf("\nErro de abertura de arquivo");
    else
    {
        do
        {
            printf("\nDigite o nome do eletrodomestico: ");
            fflush(stdin);
            gets(dados.nome);

            printf("\nDigite a quantidade no estoque: ");
            fflush(stdin);
            scanf("%d", &dados.quantidade);

            fwrite(&dados,sizeof(ESTRUTURA), 1, arq);

            printf("\nDeseja continuar? Digite 1 para sim ou qualquer outra tecla para nao: ");
            scanf(" %c", &sair);
        }
        while(sair=='1');
    }

    fclose(arq);
}

int busca(FILE *arq, ESTRUTURA dados, char *nomePROD)
{
    int FLAG=0;

    if((arq=fopen("arquivo.bin","rb"))==NULL)
        printf("\nErro de abertura de arquivo");
    else
    {
        rewind(arq);
        while(!feof(arq))
        {
            fread(&dados, sizeof(ESTRUTURA),1,arq);
            if(!(strcmp(dados.nome, nomePROD)))
            FLAG=1;
        }
    }
    fclose(arq);
    return FLAG;
}

void listagem(FILE *arq, ESTRUTURA dados)
{
    if((arq=fopen("arquivo.bin","rb"))==NULL)
        printf("\nErro de abertura de arquivo");
    else
    {
        rewind(arq);
        while(!feof(arq))
        {
            if((fread(&dados,sizeof(ESTRUTURA), 1 ,arq)) == 1)
            {
                fread(&dados,sizeof(ESTRUTURA), 1, arq);
                printf("\nNome do produto: %s", dados.nome);
                printf("        Quantidade: %d\n", dados.quantidade);
            }
        }
    }
    printf("\n");
    fclose(arq);
}

main()
{
    int opcao,SAIR=0;
    FILE *arq;
    ESTRUTURA dados;
    char nomePROD[20];
    int ACHOU=0;
    do
    {
        printf("\n1- REGISTRO\n2- BUSCA\n3- LISTAGEM\n4- SAIR");
        do
        {
            printf("\n\nDigite a sua opcao: ");
            scanf("%d", &opcao);
        }
        while(opcao<1 && opcao>4);

        switch(opcao)
        {
        case 1:
            registro(arq,dados);
            break;
        case 2:
            printf("\nDigite o nome do produto procurado: ");
            fflush(stdin);
            gets(nomePROD);
            ACHOU=busca(arq,dados,nomePROD);
            if(ACHOU==1)
                printf("\nProduto esta no estoque");
            else
                printf("\nProduto nao esta no estoque");
            printf("\n");
            break;
        case 3:
            listagem(arq,dados);
            break;
        case 4:
            SAIR=1;
            break;
        }
    }
    while(SAIR==0);
}
