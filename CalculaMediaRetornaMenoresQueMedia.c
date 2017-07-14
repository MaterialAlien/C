#include <stdio.h>
#include <math.h>

#define TAM 10

main()


{
    float nota[TAM], media, soma=0;
    int aluno;

    for (aluno=0; aluno<TAM; aluno+=1)
        {
        printf("Digite a nota do aluno %d: ", aluno+1);
        scanf("%f", &nota[aluno]);
        soma=soma+nota[aluno];
        }

        media=soma/TAM;
        printf("\nMedia da turma: %.2f", media);
        printf("\n\nNotas menores que a media\n");

        for(aluno=0; aluno<TAM; aluno+=1)
        {
            if (media>nota[aluno])
                printf("\nAluno %d: %.2f", aluno+1, nota[aluno]);
        }

}
