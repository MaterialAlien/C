
#include <stdio.h>
#include <string.h>

#define TAMPOL 3
#define TAMNOME 40

main()

{
char nome[TAMPOL][TAMNOME];
float porcent;
int votos[TAMPOL], maior=0,cont=0,voto=0,politico=0;

for (cont=0; cont<TAMPOL; cont++)
    {
        puts("\nDigite o nome do canditado: ");
        gets (nome[cont]);
        printf("Digite a quantidade de votos do canditado %s: ", nome[cont]);
        scanf("%d",&votos[cont]);
        voto=voto+votos[cont];
        fflush (stdin);
    }

for (cont=0;cont<TAMPOL; cont++)
    {
        if (votos[cont]>maior)
            {
            maior=votos[cont];
            politico=cont;
            }
    }

porcent=((maior*100)/voto);

printf("\nO canditado com mais votos foi %s . Ele recebeu %d votos, %.2f porcentos dos votos totais\n", nome[politico], votos[politico],porcent);
}

