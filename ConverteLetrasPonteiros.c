#include <stdio.h>
#include <ctype.h>
#define TAM 5

void converte_str(char str[])
{
    int cont;
    for(cont=0;cont<TAM;cont++)
        str[cont]=toupper(str[cont]);
}
main()
{
    char str[TAM];
    int cont;
    printf("Digite a string: ");
    gets(str);
    converte_str(str);
    puts(str);
}
