#include <stdio.h>
#include <conio.h>
#include <time.h>

#define CIMA 72
#define BAIXO 80
#define ESQUERDA 75
#define DIREITA 77
#define ENTER 13

int main(void)
{
clock_t IniciaTempo;
char opcao=CIMA; // de default :)
int passou_tempo=0;

IniciaTempo=clock();

while(!kbhit())
if( passou_tempo=((clock()-IniciaTempo)/CLK_TCK > 1)) // cinco seg.
break;

if(passou_tempo)
printf("\nTime over. Tecla default %c", opcao);
else
printf("\nA tecla foi %c\n", opcao=getch());

fflush(stdin); getchar();

return 0;
}
