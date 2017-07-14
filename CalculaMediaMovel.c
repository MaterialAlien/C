#include <stdio.h>
#define TAM 100

void armazena_vetor(float *termos, int nro,int cont)
{
    *(termos+cont)=nro;
}
void calcula_media(float *termos, int cont,float *media)
{
int cont1;
for(cont1=cont-4;cont1<cont+1;cont1++)
    {
    *media=*media+*(termos+cont1);
    }
}
main()
{
    int cont=-1,cont1,nro;
float termos[TAM],media=0;
    do
        {
        media=0;
        cont+=1;
        printf("\nDigite o termo %d (Digite um termo negativo para sair): ",cont);
        scanf("%d", &nro);
        if (nro>0)
        armazena_vetor(termos,nro,cont);
        if (cont>=4)
            {
            calcula_media(termos,cont,&media);
            printf("\nMedia movel parcial: %.2f\n", media/5);
            }
        }while (nro>0);
        printf("\nMedia final: %.2f", media/5);


}
