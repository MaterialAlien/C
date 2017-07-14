#include <stdio.h>
#define MAXSCORES 5

typedef struct str
{
char nome[20];
int score;
}TIPO_SCORE;

int le_arquivo(char *nome_arq, TIPO_SCORE *entradas)
{
    FILE *arq;
    int cont=0;
    arq=fopen(nome_arq,"rb");
    if(arq==NULL)
        printf("\nErro de abertura");
    else
        while(!feof(arq))
        {
         if(fread(&entradas[cont],sizeof(TIPO_SCORE),1,arq)==1)
            {
            fread(&entradas[cont],sizeof(TIPO_SCORE),1,arq);
            cont+=1;
            }
        }
cont-=1;

fclose(arq);
return cont;
}

void imprimehighscores(char *nome_arq,TIPO_SCORE *entradas,int aux)
{
   FILE *arq;
   int cont=0;

   arq=fopen(nome_arq,"rb");
   if(arq==NULL)
    printf("\nErro de abertura");
   else
   {
       rewind(arq);
       while(cont<=aux && !feof(arq))
       {
           fread(&entradas[cont],sizeof(TIPO_SCORE),1,arq);
           cont+=1;
       }

    printf("\n\n");
    for(cont=0;cont<=aux;cont++)
        printf("\nNome:%s   Pontos:%d\n", entradas[cont].nome,entradas[cont].score);
   }

   fclose(arq);
}

atualizascore(TIPO_SCORE *entradas, int *aux)
{
    printf("\n\nNecessario digitar mais %d entradas", MAXSCORES-(*aux)-1);

    while(*aux<MAXSCORES)
    {
    printf("\n\nDigite o nome do jogador: ");
    fflush(stdin);
    gets(entradas[*aux].nome);
    printf("\nDigite a pontuacao: ");
    scanf("%d", &entradas[*aux].score);
    *aux+=1;
    }
}

main()
{
    TIPO_SCORE entradas[MAXSCORES];
    char nome_arq[]="HIGHscore.bin";
    int aux;

    aux=le_arquivo(nome_arq, entradas);

    if(aux>0)
        imprimehighscores(nome_arq,entradas,aux);
    if(aux<MAXSCORES)
        atualizascore(entradas,&aux);

    imprimehighscores(nome_arq,entradas,aux);


}

