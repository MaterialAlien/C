/* Converter real para dolar */ // Objetivo do codigo

#include <stdio.h> // Definindo as bibliotecas usadas no c�digo

int main ()
{
float va_real; //Definindo o tipo e nomeando a vari�vel
float tax_con; //Definindo o tipo e nomeando a vari�vel
float va_dolar; //Definindo o tipo e nomeando a vari�vel

printf("Digite a taxa de cambio real-dolar:"); // Comte�do dgitado entre as aspas seja mostrado na tela
scanf ("%f" , &tax_con); //Conte�do digitado anteriormente ser� alocada no espa�o de mem�ria designada a vari�vel

printf("Digite o valor wm real a ser convertido em dolar:"); // Comte�do dgitado entre as aspas seja mostrado na tela
scanf ("%f", &va_real); //Conte�do digitado anteriormente ser� alocada no espa�o de mem�ria designada a vari�vel

va_dolar=va_real/tax_con; // Opera��o de atribui��o

printf ("Valor em Dolar: %f", va_dolar); // Resultado da opera��o de atribui��o � mostrado na tela
return 0;


}
