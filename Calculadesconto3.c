#include <stdio.h>
#include <math.h>

main()


{
int codigo;
float v_compra,compra;



printf("Digite o codigo do cliente <1-cliente especial, 2-funcionarios, 3-clientes normais: ");
scanf("%d", &codigo);

printf("Digite o valor total da compra: ");
scanf("%f", &v_compra);


switch(codigo)

{
    case 1: printf("Valor da compra: %.2f R$",v_compra*0.90);
            break;
    case 2: printf("Valor da compra: %.2f R$", v_compra*0.95);
            break;
    case 3:printf("Valor da compra: %.2f R$", v_compra);
            break;
    default: printf("Codigo invalido");

 }
 }








