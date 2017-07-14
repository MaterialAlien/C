#include <stdio.h>
#include <math.h>

#define TAM 100

main()

{

int num, cont1;
float soma=0, DIV=1, NUM;

printf("Digite um numero natural: ");
scanf("%d", &num);

    for (cont1=1; cont1<=num; cont1+=1)
        {
            NUM=(pow(-1,cont1))*pow(2,cont1);
            DIV=DIV*cont1;
            soma=soma+(NUM/DIV);
        }

printf("Resultado final:%f", soma);
}
