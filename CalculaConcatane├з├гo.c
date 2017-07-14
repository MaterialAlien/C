#include <stdio.h>
#include <math.h>
#include <string.h>

#define TAM 40

main()

{
char str1[TAM], str2[TAM], str3[TAM];
int cont1=0, cont2=0, cont3=0, total=0;


puts("\Digite um  conjunto de caracteres: \n");
gets (str1);

do
    {
        cont1+=1;
    } while(str1[cont1]!='\0');

puts ("\nDigite um segundo  conjunto de caracteres: \n");
gets (str2);

do
    {
    cont2+=1;
    } while (str2[cont2]!='\0');



total=cont1+cont2;


for (cont3=0; cont3<total; cont3+=1)
    {
    if (cont3<cont1)
        str3[cont3]=str1[cont3];
    else
        {
            str3[cont3]=str2[(cont3-cont1)];
        }
    }
str3[total]='\0';

printf("\nconcatenacaoo de %s e %s: %s\n", str1,str2,str3);

}



