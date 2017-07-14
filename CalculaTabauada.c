#include <stdio.h>
int main ( )
{
 int multiplicando, multiplicador;
 for (multiplicador=1; multiplicador <=10; multiplicador++)
 { // para cada valor de multiplicador, varia multiplicando de 1 a 10
 printf(" Tabuada de %d:\n", multiplicador); // 1 vez, antes do for
 for (multiplicando = 1; multiplicando <= 10; multiplicando++)
 printf("%2d X %2d = %3d\n", multiplicando , multiplicador,
 multiplicando * multiplicador);
 printf("\n"); // 1 linha em branco, após conclusão do for interno
 }
}

