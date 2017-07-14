/* Faça um programa que leia um texto e o decodifique, utilizando a tabela de
substituição de caracteres abaixo. Imprima o texto original e o texto decodificado. */

#include <stdio.h>
#include <string.h>


main()
{

char word[100],codigo;
int cont=0;

puts("Digite um texto: ");
gets(word);

cont=0;

do
{
    codigo=word[cont];
    switch (codigo)
    {
    case 'z': word[cont]='A';
                break;
    case 'y': word[cont]='E';
                break;
    case 'w': word[cont]='O';
                break;
    case 'k': word[cont]='T';
                break;
    case 'K': word[cont]='T';
                break;
    case 'b': word[cont]='M';
                break;
    case 'd': word[cont]='N';
                break;
    case 'f': word[cont]='P';
                break;
    }
    cont+=1;

}
    while(word[cont]!='\0');

printf("\n%s\n", word);


}
