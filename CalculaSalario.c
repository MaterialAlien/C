/*. Um funcionario recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996 ´
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao
dobro do ano anterior. Fac¸a programa que determine o salario atual do funcion ´ ario. *? */

#include <stdio.h>
#include <math.h>

main()


{
    int ano=1997;
    float sal, porcent, aum, sal1,cont;

    printf("Digite o salario inicial em 1996: ");
    scanf("%f", &sal);
    printf("Digite a porcentagem de aumento em 1997: ");
    scanf("%f",&porcent);

    aum=sal*(porcent/100);
    sal1=sal+aum;
    printf("\nSalario em %d: R$ %.2f",ano, sal1);


    for (cont=1; cont<=18; cont++)

    {
        ano=ano+1;
        aum=aum*2;
        sal1=sal1+aum;
        printf("\nSalario em %d: R$ %.2f",ano, sal1);
    }
    printf("\nSalario em 2015: R$ %.2f\n", sal1);
}
