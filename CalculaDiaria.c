// Calcula diaria //

#include <stdio.h>
#include <math.h>

main()


{
    float diaria,d_promo,V_promo,V_normal;

    printf("Informe o valor normal da diaria: ");
    scanf("%f", &diaria);

    d_promo=diaria*0.75;
    V_promo=(75*0.80)*d_promo;
    V_normal=(75*0.50)*diaria;

    printf("\n\nDiaria promocional:%.2f R$", d_promo);
    printf("\n\nV1:%.2f R$", V_promo);
    printf("\n\nV2:%.2f R$", V_normal);

    if (V_normal>V_promo)
        printf("\n\nDiferenca entre os dois valores:%.2f R$\n\n", V_normal-V_promo);
    else printf("\n\nDiferenca entre os dois valores:%.2f R$\n\n", V_promo-V_normal);








}
