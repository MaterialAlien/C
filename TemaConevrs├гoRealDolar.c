/* Converter real para dolar */

#include <stdio.h>

int main ()
{
float va_real;
float tax_con;
float va_dolar;

printf("Digite a taxa de cambio real-dolar:");
scanf ("%f" , &tax_con);

printf("Digite o valor wm real a ser convertido em dolar");
scanf ("%f", &va_real);

va_dolar=va_real/tax_con;

printf ("Valor em Dolar: %f", va_dolar);
return 0;


}
