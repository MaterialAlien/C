/* Escreva uma subrotina em C que receba como
parâmetros o sexo (M ou F) e a altura de uma pessoa
(em metros), e imprima na tela o peso ideal (em kg)*/

#include <stdio.h>

void peso_ideal(char letra, float altura)

{
    float ps;
    if (letra=='F'  || letra=='f')
        {
        ps=altura*62.1-44.7;
        printf("Peso ideal feminino para a altura %.2f m eh %.2f Kg",altura,ps);
        }
    else if (letra=='M' || letra=='m')
        {
        ps=altura*72.7-58;
        printf("Peso ideal masculino para a altura %.2f m eh %.2f Kg", altura, ps);
        }
    else
        printf("Sexo invalido");

}

void retorna(float ps)
{
    printf("\n%.2f", ps*3 );
}
int main()
{
char letra;
float altura,a,ps;

printf("Digite o sexo: ");
scanf(" %c", &letra);
printf("Digite a altura: ");
scanf("%f", &altura);

peso_ideal(letra,altura);

retorna(ps);

return a;

}


