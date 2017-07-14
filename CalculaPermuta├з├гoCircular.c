#include <stdio.h>
#include <math.h>
#include <string.h>

#define TAM 15

main()

{

char word1[TAM], word2[TAM],word3[TAM];
int cont=0, cont3,contA=0, contB=0,contC=0;


puts("\nInforme uma palavra com no maximo 14 letras: \n");
gets (word1);

while(word1[contA]!='\0')
        {
            contA+=1;

printf("\n\n%d\n\n", contA);
        }


puts("\nInforme uma segunda palavra com no maximo 14 letras: \n");
gets (word3);

while (word3[contB]!='\0')
    contB+=1;

if (contA!=contB)
    printf("\nA segunda palavra nao eh permutacao da primeira :< \n");

else
    {
        contB=contB-1;
        // contC=contB;
            for(cont=0; cont<=contB; cont++)
                {
                cont3=cont+1;
                if (cont==contB)
                {
                word2[0]= word1[cont];
               //  word2[(contC+1)]='\0';
                }
                else
                word2[cont3]=word1[cont];
                }

                /*


                printf("Palavra do word2:%s", word2);
                contA=0;


                for (cont=0; cont<=contB; cont++)
                if (word2[cont]!=word3[cont])
                        contA=contA+1;

                contA=(strcmp(word2,word3));
                if (contA==0) */

             contA=0;

             for (cont=0; cont<=contB; cont++)
                if (word2[cont]!=word3[cont])
                        contA=contA+1;


            if (contA==0)
                printf("\nA segunda palavra eh permutacao da primeira :> \n");
            else
                printf("\nA segunda palavra NAO eh permutacao da primeira :< \n");

        }

}
