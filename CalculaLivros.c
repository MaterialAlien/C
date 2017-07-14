#include <stdio.h>
#include<stdlib.h>

typedef struct struct_livro
        {
        int cod;
        char titulo[45];
        float preco;
        int np;
        } LIVRO;

void cadastroLivro(LIVRO *livros,int *L_lidos,LIVRO *AUX)
{
    if(*L_lidos<3)
    {
    printf("\nDigite o codigo do livro: ");
    scanf("%d", &livros[(*L_lidos)].cod);
    fflush(stdin);
    puts("\nDigite o nome do livro: ");
    gets(livros[*L_lidos].titulo);
    printf("\nDigite o preco: ");
    scanf("%f", &livros[*L_lidos].preco);
    printf("\nDigite o numero de paginas: ");
    scanf("%d", &livros[*L_lidos].np);
    *L_lidos=(*L_lidos)+1;
    }

    else if (*L_lidos==3)
    {
    printf("\nDigite o codigo do livro: ");
    scanf("%d", &livros[(*L_lidos)-1].cod);
    fflush(stdin);
    puts("\nDigite o nome do livro: ");
    gets(livros[(*L_lidos)-1].titulo);
    printf("\nDigite o preco: ");
    scanf("%f", &livros[(*L_lidos)-1].preco);
    printf("\nDigite o numero de paginas: ");
    scanf("%d", &livros[(*L_lidos)-1].np);
    }

    system("cls");

}

void OrdenaPreco(LIVRO *livros, int L_lidos,LIVRO *AUX)
{
    int cont, aux,aux1;
    aux1=L_lidos-1;
    do
    {   aux=0;
        for(cont=0;cont<aux1;cont++)
            if ((livros[cont].preco)>(livros[cont+1].preco))
            {
            *AUX=(livros[cont]);
            (livros[cont])=(livros[cont+1]);
            (livros[cont+1])=*AUX;
            aux+=1;
            }
    aux1-=1;
    }while(aux!=0);
}

void Imprime_Biblioteca(LIVRO *livros, int L_lidos,LIVRO *AUX)
    {
        int cont;
        for(cont=0;cont<L_lidos;cont++)
            {
                printf("\nCodigo do livro: %d", livros[cont].cod);
                printf("\nNome do livro: %s", livros[cont].titulo);
                printf("\nPreco do livro: R$ %.2f", livros[cont].preco);
                printf("\numero de paginas: %d\n\n", livros[cont].np);

            }
    }
void preco_Medio(LIVRO *livros, int L_lidos)
    {
        int soma=0,cont;
        for(cont=0;cont<L_lidos;cont++)
        {
            soma=soma+(livros[cont].preco);
        }
    printf("\nPreco medio dos livros: R$ %d", soma/L_lidos);
    }
void consulta_Livro(LIVRO *livros, int *L_lidos)
{
    int cont=0,aux=0,codProc;

    printf("\nDigite o codigo do livro que voce procura: ");
    fflush(stdin);
    scanf("%d", &codProc);

    for(cont=0;cont<(*L_lidos);cont++);
        if (livros[cont].cod == codProc);
       {
        printf("\nNome do Livro: %s", &livros[cont].titulo);
        aux=1;
       }

    if(aux==0)
        printf("\nLivro nao encontrado");
}
main()
{
    LIVRO livros[4],AUX;
    int opcao,L_lidos=0,Sair;

    printf("\nOpcao 1 - Cadastro de livros\nOpcao 2 - Consulta de livros\nOpcao 3 - Preco medio dos livros\nOpcao 4 - Imprime biblioteca\nOpcao 5 - Sair");

    do{
    printf("\n\nEntre com sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1: cadastroLivro(livros,&L_lidos,&AUX);
                OrdenaPreco(livros, L_lidos,&AUX);
                break;
        case 2: consulta_Livro(livros,&L_lidos);
                break;
        case 3: preco_Medio(livros,L_lidos);
                break;
        case 4: Imprime_Biblioteca(livros, L_lidos,&AUX);
                break;
        case 5: Sair=1;
    }}while(opcao<1 && opcao>5 || Sair!=1);

    }
