// Calcular conceito de alunos

#include <stdio.h>
#include <math.h>

main()

{

float P1,P2,AP,NT,MF,F,FM;{


if (F<FM/100*75)
printf("Aluno reprovado por falta de frequencia");

printf("Digite a Frequencia do aluno: ");
scanf ("%f", &F);
printf("Digite O numero maximo de aulas: ");
scanf ("%f", &FM);
printf("Digite a nota da prova 1: ");
scanf ("%f", &P1);
printf("Digite a nota da prova 2: ");
scanf ("%f", &P2);
printf("Digite a nota das aulas práticas: ");
scanf ("%f", &AP);
printf("Digite O nota do teste final: ");
scanf ("%f", &NT);

MF=0.3*P1+0.45*P2+0.15*AP+0.1*NT;

if (F<FM/100*75)
printf ("Aluno reprovado por falta de frequencia");
if (MF<6)
printf ("Conceito D");
if (MF>6 && MF<8)
printf ("Conceito C");
if (MF>6 && MF<9 || NT==0)
printf ("Conceito B");
if (MF>9 && MF<=10)
printf ("Conceito A");

}





