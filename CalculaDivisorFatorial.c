


#include <stdio.h>
#include <math.h>

main()

{
float num, div=1, fat=1;
float soma;

for (num=99; num>=80; num-=1, div+=1)
    {
    fat=fat*div;
    soma=soma+(num/fat);
    printf("\nResultador parcial: %f\n", soma);
    }
printf("\nResultador final: %f\n", soma);

}
