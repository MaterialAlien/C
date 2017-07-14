#include <stdio.h>

void oi()
{
    printf("Oi\n");
}

void puto()
{
    printf("Puto");
}

void lindo()
{
    printf("lindo");
}

void padrao()
{
    printf("Codigo invalido");
}

int main()
{
   int codigo=0;

    printf("Digite um codigo: ");
    scanf("%d", &codigo);
    do
    {
        switch(codigo)
        {
        case 1: oi();
                break;
        case 2: puto();
                    break;
        case 3: lindo();
                    break;
        default: padrao();
                break;
        }
    printf("\nDigite um codigo:");
    scanf("%d", &codigo);
    } while (codigo!=0);

return 0;

}
