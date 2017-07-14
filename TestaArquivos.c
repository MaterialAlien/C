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


int main()
{
    FILE *arquivo;
    DADOS dados;
    int cont=0;
    char nomeArquivo[20],SN;

    puts("\nDigite o nome do arquivo; ");
        gets(nomeArquivo);


   if(!(arquivo = fopen(nomeArquivo,"wb")))
        printf("\nErro na abertura");

    else
    {
       do
       {
           printf("\nDigite os dados do atleta %d",cont);
           printf("\n\nNome: ");
           fflush(stdin);
           gets(dados.nome);
           printf("\nIdade: ");
           fflush(stdin);
           scanf("%d", &dados.idade);
           printf("\nAltura: ");
           scanf("%f", &dados.altura);

           do{
           printf("Deseja continuar? S para SIM | N para NAO: ");
           fflush(stdin);
           scanf("%c", &SN);
           toupper(SN);
           }while(SN!='S' && SN!='N');
           system("cls");
           cont+=1;

       } while(SN!='N');

    fclose(arquivo);

}
}
