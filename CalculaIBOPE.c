#include <stdio.h>

typedef struct endereco
{
int numero;
char rua[20];
char cidade[20];
} STRUCT1;


typedef struct dados
{
 char nome[20];
 STRUCT1 ender;
 int idade;
 char estadoc[20];
 char sexo[20];
 char instrucao[20];
 int canal;
} ESTRUTURA;

rankingAUDIENCIA(int *soma)
{
    int maior,cont,posmaior;
    maior=*(soma+1);
    posmaior=1;
    for(cont=1;cont<5;cont++)
        if(maior<(*(soma+cont)))
        {
            maior=*(soma+cont);
            posmaior=cont;
        }
printf("\n\nCanal de maior audiencia: %d com %d espectadores!", posmaior,maior);
printf("\n\n");
}

int recolheDADOS(ESTRUTURA *dados)
{
    int aux=0;
    char tecla;
    do
    {
        printf("\nNome: ");
        fflush(stdin);
        gets(dados[aux].nome);
        printf("\nEndereco");
        fflush(stdin);
        printf("\nNumero da casa: ");
        fflush(stdin);
        scanf("%d", &dados[aux].ender.numero);
        printf("\nRua: ");
        fflush(stdin);
        gets(dados[aux].ender.rua);
        printf("\nCidade: ");
        fflush(stdin);
        gets(dados[aux].ender.cidade);
        printf("\nIdade: ");
        fflush(stdin);
        scanf("%d", &dados[aux].idade);
        printf("\nEstado Civil: ");
        fflush(stdin);
        gets(dados[aux].estadoc);
        printf("\nSexo: ");
        fflush(stdin);
        scanf(" %s", &dados[aux].sexo);
        printf("\nGrau de escolaridade: ");
        fflush(stdin);
        gets(dados[aux].instrucao);
        printf("\nCanal que assistiuentre 20 e 21 horas: ");
        fflush(stdin);
        scanf("%d", &dados[aux].canal);

        aux+=1;

        printf("\n\nComputar mais dados? Tecle 1 para sim ou qualquer outra tecla para nao: ");
        fflush(stdin);
        scanf(" %c", &tecla);
    } while(tecla=='1');
    return aux;
}

analisaDADOS(ESTRUTURA *dados, int cont)
{
    int cont1,aux2,soma[5]={0,0,0,0,0};

    for(cont1=0;cont1<cont;cont1++)
    {
        printf("\n\n");
        printf("\n%s", dados[cont1].nome);
        printf("\n%d", dados[cont1].ender.numero);
        printf("\n%s", dados[cont1].ender.rua);
        printf("\n%s", dados[cont1].ender.cidade);
        printf("\n%d", dados[cont1].idade);
        printf("\n%s", dados[cont1].estadoc);
        printf("\n%s", dados[cont1].sexo);
        printf("\n%s", dados[cont1].instrucao);
        printf("\nCanal que assiste entre 20 e 21 horas: %d", dados[cont1].canal);
        aux2=dados[cont1].canal;
        switch(aux2)
        {
            case 1: soma[1]=soma[1]+1;
                    break;
            case 2: soma[2]=soma[2]+1;
                    break;
            case 3: soma[3]=soma[3]+1;
                    break;
            case 4: soma[4]=soma[4]+1;
                    break;
        }

    }

rankingAUDIENCIA(soma);



}


main()
{
    ESTRUTURA dados[30];
    int aux;
    aux=recolheDADOS(dados);
    analisaDADOS(dados,aux);
}




