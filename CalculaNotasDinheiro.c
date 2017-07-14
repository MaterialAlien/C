#include <stdio.h>
#include <math.h>

main ()


{
    int valor, notas100, notas50, notas20, notas10, notas5, notas1,restoA,restoB,restoC,restoD,restoE,restoF;

    printf("Digite um valor monetario inteiro: ");
    scanf("%d", valor);

    restoA=valor%100;

            if (restoA==0)
                printf("%d notas de R$ 100\n", valor/100);
else

    restoB=restoA%50;
            if (restoB==0)
            printf("\n%d notas de R$ 100\n %d Notas de R$ 50\n", valor/100, restoA/50);
else

    restoC=restoB%20;
            if (restoC==0)
            printf("\n%d notas de R$ 100\n %d Notas de R$ 50\n %d Notas de R$ 20\n", valor/100, restoA/50, restoB/20);
else
    restoD=restoC%10;
            if (restoC==0)
            printf("\n%d notas de R$ 100\n %d Notas de R$ 50\n %d Notas de R$ 20\n %d Notas de R$ 10", valor/100, restoA/50, restoB/20,
                      restoC/10);
else
     restoE=restoD%5;
            if (restoE==0)
             printf("\n%d notas de R$ 100\n %d Notas de R$ 50\n %d Notas de R$ 20\n %d Notas de R$ 10\n %d Notas de R$ 5", valor/100, restoA/50, restoB/20,
                      restoC/10, restoD/5);
else
     restoF=restoE%1;
            printf("\n%d notas de R$ 100\n %d Notas de R$ 50\n %d Notas de R$ 20\n %d Notas de R$ 10\n %d Notas de R$ 5\n %d Moedas de R$ 1", valor/100,
                   restoA/50, restoB/20,restoC/10, restoD/5, restoF);

}
