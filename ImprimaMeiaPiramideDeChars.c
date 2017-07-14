#include <stdio.h>

void alfabeto(char letra, int num)
{

    int cont;

    for(num=1;num<=16;num++)
    {
        for(cont=0; cont<=num;cont++)
        {
        printf("%c", letra);
        }
    printf("\n");
    letra++;
    }
}
int main()

{
 char letra='a';
 int num=1;

 alfabeto(letra,num);

 return 0;

}


