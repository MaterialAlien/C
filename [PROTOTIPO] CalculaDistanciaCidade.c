#include <stdio.h>
#include <math.h>

#define TAM 5

main()
{
int city[TAM][TAM],cont1,cont2,city1,city2,city3;

for (cont1=0; cont1<TAM; cont1++)
    for (cont2=0; cont2<TAM; cont2++)
        {
        if (cont1==cont2)
            city[cont1][cont2]=0;
        else if (cont2>cont1)
            {
            printf("Digite a distância da cidade %d ateh a cidade %d: ", cont1,cont2);
            scanf("%d", &city[cont1][cont2]);
            }
        else city[cont1][cont2]=city[cont2][cont1];
        }

for (cont1=0; cont1<TAM; cont1++)
    for (cont2=0; cont2<TAM; cont2++)
        {
        if (cont2==0)
        printf("\n%3d", city[cont1][cont2]);
        else
        printf("%3d", city[cont1][cont2]);
        }
}


