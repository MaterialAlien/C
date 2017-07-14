#include <stdio.h>

int maior(int a,int b)
{
int maior;
if(a>b)
    maior=a;
else maior=b;
return maior;
}
int menor(int a,int b)
{
int menor;
if(a<b)
    menor=a;
else menor=b;
return menor;
}
int dado ()
{
    int valor;
    srand(time(NULL));
    valor=1+(rand()%6 );
    printf("\nValor: %d", valor);
    return valor;
}

int main()
{
srand(time(NULL));
char sn;
int cont,codigo,val[6];
for(cont=0;cont<6;cont++)
    val[cont]=0;
for (cont=1;cont<1000000;cont++)
    {
    codigo=dado();
    switch(codigo)
    {
        case 1: val[0]+=1;
                break;
        case 2: val[1]+=1;
                break;
        case 3: val[2]+=1;
                break;
        case 4: val[3]+=1;
                break;
        case 5: val[4]+=1;
                break;
        case 6: val[5]+=1;
                break;
    }
    }
for(cont=0;cont<6;cont++)
    printf("\nValor %d:%d",cont+1, val[cont]);
}
/*
do

{
    dado();
    printf("\nDeseja continuar: s/n?");
    scanf(" %c", &sn);
}while(sn=='s');
}*/


