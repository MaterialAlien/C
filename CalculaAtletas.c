#include <stdio.h>

typedef struct str
{
char nome[20];
float altura;
int idade;
}ESTRUTURA;

registro(FILE *arq, ESTRUTURA dados)
{
    char tecla='1';

    arq=fopen("dadosATLETAS.bin","ab+");
    if(arq==NULL)
        printf("\nErro de abertura");
    else
        do
        {
        printf("\n\nDigite o nome do atleta: ");
        fflush(stdin);
        gets(dados.nome);
        printf("\nDigite a altura do atleta: ");
        scanf("%f", &dados.altura);
        printf("\nDigite a idade do atleta: ");
        scanf("%d", &dados.idade);

        fwrite(&dados,sizeof(ESTRUTURA),1,arq);

        printf("\nDigite 1 para continuar ou qualquer outa tecla para sair: ");
        scanf(" %c", &tecla);
        }while(tecla=='1');

    fclose(arq);
}

busca(FILE *arq, ESTRUTURA dados)
{
    char tecla='1',nomee[20];
    int cont=0;

    arq=fopen("dadosATLETAS.bin","rb");
    if(arq==NULL)
        printf("\nErro de abertura");
    else
        {
        printf("\nDigite o nome do atleta que voce procura: ");
        fflush(stdin);
        gets(nomee);
        rewind(arq);
        while(!feof(arq))
        {
            if(fread(&dados,sizeof(ESTRUTURA),1,arq)==1)
            if(strcmp(dados.nome,nomee)==0)
            {
            printf("\nNome: %s", dados.nome);
            printf("\nIdade: %d", dados.idade);
            printf("\nAltura: %.2f", dados.altura);
            printf("\n");
            cont+=1;
            }
        }
        if(cont==0)
            printf("\nNome nao encontrado");
        }
printf("\n\n");
fclose(arq);
}

listagem(FILE *arq, ESTRUTURA dados)
{
    arq=fopen("dadosATLETAS.bn","rb");
    if(arq==NULL)
        printf("\nErro de abertura");
    else
        {
        rewind(arq);
        while(!feof(arq))
        {
            if(fread(&dados,sizeof(ESTRUTURA),1,arq)==1)
            {
            printf("\nNome: %s", dados.nome);
            printf("\nIdade: %d", dados.idade);
            printf("\nAltura: %.2f", dados.altura);
            printf("\n");
            }
        }}

printf("\n\n");
fclose(arq);
}


main()
{
    FILE *arq;
    ESTRUTURA dados;
    int op,SAIR=0;

    do
    {
    printf("\n1-Regsitro\n2-BUSCA\n3-LISTAGEM\n4-SAIR");
    printf("\n\nDigite a sua opcao: ");
    scanf("%d", &op);

    switch(op)
    {
        case 1: registro(arq, dados);break;
        case 2: busca(arq,dados);break;
        case 3: listagem(arq,dados);break;
        case 4: SAIR=1;
    }
    }while(SAIR==0);
}

