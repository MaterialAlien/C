#include <stdio.h>

void propriedade(int p1,int p2,int p3,int p4)
{
    int p12,p34,p1234;
    p1234=p1*1000+p2*100+p3*10+p4;
    p12=p1*10+p2;
    p34=p3*10+p4;
    if (((p12+p34)*(p12+p34))==p1234)
        printf("\n%d\n",p1234);

}

main()
{
    int p1,p2,p3,p4;
    printf("\nNumeros de 4 algarismos (XYZW) que obedecem a propriedade (XY+ZW)*(XY+ZW)=XYZW\n");
    for(p1=1; p1<=9; p1++)
        for(p2=0; p2<=9; p2++)
            for(p3=0; p3<=9; p3++)
                for(p4=0; p4<=9; p4++)
                    propriedade(p1,p2,p3,p4);
}
