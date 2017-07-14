/* Converter real para dolar */ // Objetivo do codigo

#include <stdio.h> // Definindo as bibliotecas usadas no código

int main ()
{
float va_real; //Definindo o tipo e nomeando a variável
float tax_con; //Definindo o tipo e nomeando a variável
float va_dolar; //Definindo o tipo e nomeando a variável

printf("Digite a taxa de cambio real-dolar:"); // Comteúdo dgitado entre as aspas seja mostrado na tela
scanf ("%f" , &tax_con); //Conteúdo digitado anteriormente será alocada no espaço de memória designada a variável

printf("Digite o valor wm real a ser convertido em dolar:"); // Comteúdo dgitado entre as aspas seja mostrado na tela
scanf ("%f", &va_real); //Conteúdo digitado anteriormente será alocada no espaço de memória designada a variável

va_dolar=va_real/tax_con; // Operação de atribuição

printf ("Valor em Dolar: %f", va_dolar); // Resultado da operação de atribuição é mostrado na tela
return 0;


}
