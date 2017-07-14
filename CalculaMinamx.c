#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAMRANDMAX 30

main()

{
 int notas[9][9],cont1,cont2,cont3,menor=0,maior,linha,coluna,NUM,menorb;

 srand(time(NULL));

 do
    {
        printf("Digte um numero entre 3 e 9: ");
        scanf("%d", &NUM);
    } while(NUM>9 && NUM<3);

    maior=notas[0][0];

for (cont1=0; cont1<NUM; cont1++)
    for (cont2=0; cont2<NUM;cont2++)
        {
        notas[cont1][cont2]= (3 + ( rand() % 9));
        if (cont2==NUM-1)
        printf("%3d\n", notas[cont1][cont2]);
        else
        printf("%3d", notas[cont1][cont2]);
        }

maior=notas[0][0];

for (cont1=0; cont1<NUM; cont1++)
    {
        for (cont2=0; cont2<NUM;cont2++)
            {
            if(notas[cont1][cont2]>maior)
                {
                maior=notas[cont1][cont2];
                linha=cont1;
                coluna=cont2;

                }
            }

    }




menor=notas[linha][0];

for (cont3=0; cont3<NUM; cont3++)
    {
        if(notas[linha][cont3]<menor)
            {
            menor=notas[linha][cont3];
            coluna=cont3;
            }
    }



printf("\n\nMinimax %d\n\n", notas[linha][coluna]);

}


