#include <stdio.h>
#define TAM 8

void inverte_texto(char str1[],char str2[])
{
    int cont,cont1=TAM;
    for(cont=0;cont<TAM;cont++)
    {
    str2[cont]=str1[cont1];
    cont1=cont1-1;
    }
}

main()

{
    char str1[TAM],str2[TAM];
    printf("Digite um string: ");
    gets(str1);
    inverte_texto(&str1, &str2);
    puts(str2);
}
