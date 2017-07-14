#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NUMP 5

typedef struct dados
    {
        char nome[30];
        int idade;
        float altura;
    }   DADOS;
main()
{
    DADOS dados;
    FILE *arquivo;
    char nomeArquivo[30],SN;

    puts("\nDigite o nome do arquivo que voce deseja listar: ");
    gets(nomeArquivo);

    if(!(arquivo = fopen(nomeArquivo,"ab")))
        printf("Erro na abertura\n");
    else
    {
           do
           {
           printf("\nDigite os dados do atleta");
           printf("\n\nNome: ");
           fflush(stdin);
           gets(dados.nome);
           printf("\nIdade: ");
           fflush(stdin);
           scanf("%d", &dados.idade);
           printf("\nAltura: ");
           scanf("%f", &dados.altura);
           if (fwrite(&dados, sizeof(DADOS), 1, arquivo) != 1)
           printf("Erro de escrita\n");

           do{
           printf("\n\nDeseja continuar? S para SIM | N para NAO: ");
           fflush(stdin);
           scanf("%c", &SN);
           }while(SN!='S' && SN!='N' && SN!='n' && SN!='s');
           system("cls");

       } while(SN!='N' && SN!='n');

    fclose(arquivo);
    }
}


