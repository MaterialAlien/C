#include <stdio.h>
#define TAM 5

void le_vetor(float vetor[],int num)

{
    int cont;
    for(cont=0;cont<TAM;cont++)
        {
        printf("\nDigite o valor do vetor %d: ", cont);
        scanf("%f", &vetor[cont]);
        }
}

main()

{
    float vetor[TAM];
    int cont;
    le_vetor(vetor,TAM);
    for(cont=0;cont<TAM;cont++)
        printf("\nVetor %d: %f", cont,vetor[cont]);
}
