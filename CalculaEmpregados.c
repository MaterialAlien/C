#include <stdio.h>

typedef struct tipo_funcionario
{
char nome[20];
float salario;
char cargo[20];
int idade;
char sexo;
} ESTRUTURA;

acrescenta(ESTRUTURA *dados, int *cont)
{
   int aux;

   aux=*cont;

   printf("\nNome do empregado: ");
   fflush(stdin);
   gets(dados[aux].nome);
   printf("\nSalario: ");
   fflush(stdin);
   scanf("%f", &dados[aux].salario);
   printf("\nCargo: ");
   fflush(stdin);
   gets(dados[aux].cargo);
   printf("\nIdade: ");
   fflush(stdin);
   scanf("%d", &dados[aux].idade);
   printf("\nSexo: ");
   fflush(stdin);
   scanf("%s",&dados[aux].sexo);
}

altera(ESTRUTURA *dados,int cont)
{
  int ind;
  printf("\nDigite o nome do empreagado que voce deseja alterar informações: ");
  fflush(stdin);
  gets(dados[51].nome);
  printf("Digite a idade: ");
  fflush(stdin);
  scanf("%d", &dados[51].idade);

  for(ind=0;ind<=cont;ind++)
      if((dados[51].idade == dados[ind].idade) && dados[51].nome == dados[ind].nome)
           {
             printf("\nNome do empregado: ");
             fflush(stdin);
             gets(dados[ind].nome);
             printf("\nSalario: ");
             fflush(stdin);
             scanf("%f", &dados[ind].salario);
             printf("\nCargo: ");
             fflush(stdin);
             gets(dados[ind].cargo);
             printf("\nIdade: ");
             fflush(stdin);
             scanf("%d", &dados[ind].idade);
             printf("\nSexo: ");
             fflush(stdin);
             gets(dados[ind].sexo);
           }
}

decrescenta(ESTRUTURA *dados,int *cont, ESTRUTURA aux)
{
  int ind,ind2;
  printf("\nDigite o nome do empreagado que voce deseja demitir: ");
  fflush(stdin);
  gets(aux.nome);
  printf("Digite a idade: ");
  fflush(stdin);
  scanf("%d", &aux.idade);

  for(ind=0;ind<=*cont;ind++)
      if((aux.idade == dados[ind].idade) && aux.nome == dados[ind].nome)
            for(ind2=ind;ind2<=*cont;ind2++)
                {
                aux=dados[ind2];
                dados[ind2]=dados[ind2+1];
                dados[ind2+1]=aux;
                }
}

listar(ESTRUTURA *dados, int cont)
{
    int cont1;
    for(cont1=0;cont1<cont;cont1++)
        {
        printf("\n\nEmpregado %d", cont1);
        printf("\nNome: %s", dados[cont1].nome);
        printf("\nSalario: %.2f", dados[cont1].salario);
        printf("\nCargo: %s", dados[cont1].cargo);
        printf("\nIdade: %d", dados[cont1].idade);
        printf("\nSexo: %s", dados[cont1].sexo);
        }
}

main()
{
    int opcao,sair=0,cont=0;
    ESTRUTURA dados[51],aux;

    do
    {
    printf("\nOpcao 1 - LISTAR EMPREGADOS\nOpcao 2 - REGISTRAR NOVO FUNCIONARIO\nOpcao 3 - REMOCAOO DE FUNCIONARIO\nOpcao 4 - ALTERARACAO DE DADOS\nOpcao 5 - SAIR");
            do
            {
        printf("\n\nDigite a sua opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);
            }while(opcao!=1  && opcao!=2 && opcao!=3 && opcao!=4);

    switch(opcao)
        {
        case 1: if(cont>0)
                listar(dados,cont);
                else {
                        printf("\nNada a listar");
                        fflush(stdin);
                     }

        case 2: if(cont<50)
                {
                acrescenta(dados,&cont);
                cont+=1;
                }
                else printf("\nLimite de funcionarios excedido");break;
        case 3: if (cont>0)
                    {
                    decrescenta(dados,&cont,aux);
                    cont-=1;
                    }
                else printf("\nNada a excluir\n\n");break;
        case 4: altera(dados,cont); break;
        case 5: sair=1;
        }
    }while(sair==0);
}
