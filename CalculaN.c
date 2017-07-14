#include <stdio.h>
#include <math.h>


main()


{
int num, contador, somanumeroA, somanumeroB,soma,S1;

printf("Digite um numero: ");
scanf("%d", &num);
S1=0;
for(contador=0; contador<=num; contador+=2)
{

    S1=S1+contador;
}

somanumeroA=0;
for(contador=0;contador<=num;contador+=4)

{
    somanumeroA=somanumeroA-(pow(contador,2));


}
somanumeroB=0;
for(contador=2;contador<=num;contador+=4)

{
    somanumeroB=somanumeroB+(pow(contador,2));

}

printf("S1:%d", S1);
printf("\nS2: %d", somanumeroA+somanumeroB);

}






