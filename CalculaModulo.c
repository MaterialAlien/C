#include <stdio.h>
#include <math.h>

main()
{
    int Valor, ValorN,ValorM,ModA,ModB,ModF;

    printf("Digite um valor inteiro: ");
    scanf("%d", Valor);

    printf("Digite um valor inteiro diferente de 0: ");
    scanf("%d", ValorN);
     ModA=abs(Valor-ValorN);

        printf("Digite um valor inteiro: ");
        scanf("%d", ValorM);

        ModB=abs(Valor-ValorM);
do{
        ModB=abs(Valor-ValorM);
        if (ModA=ModB)
               {
                if (ValorN<ValorM)
                ModF=ValorN;
          else if (ValorM<ValorN)
                ModF=ValorM;
          else ModF=ValorM;
               }
    else if (ModA<ModB)
            {
            ModF=ValorN;
            ModA=ModA;
            }
    else if (ModB<ModA)
            {
            ModF=ValorM;
            ModA=ModB;
            }

        printf("Digite um valor inteiro: ");
        scanf("%d", ValorM);

    } while(ValorM!=0);

    printf("Entre os valores digitados, o que mais se aproxima de %d eh %d", Valor, ModF);
}
