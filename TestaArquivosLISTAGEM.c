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
    char nomeArquivo[30];

    puts("\nDigite o nome do arquivo que voce deseja listar: ");
    gets(nomeArquivo);

    if(!(arquivo = fopen(nomeArquivo,"rb")))
        printf("Erro na abertura\n");
    else
    {
        while(!feof(arquivo))
            {
                if(fread(&dados,sizeof(DADOS), 1 ,arquivo) == 1)
                    {
                    printf("Nome: %s\n",dados.nome);
                    printf("Idade: %d\n",dados.idade);
                    printf("Altura: %.2f\n\n",dados.altura);
                    }
            }
 printf("Fim da Listagem");

    fclose(arquivo);
    }

}
