#include <stdio.h>
int main (){
/* O programa pede ao usuário o valor total da compra (ex: R$ 120.00).
Enquanto o valor for menor que R$ 100.00, exiba:
"Valor insuficiente para desconto. Adicione mais itens."
Peça um novo valor (simulando a adição de itens).
Quando o valor atingir ou ultrapassar R$ 100.00:
Aplique descontos progressivos:
5% para compras ≥ R$ 100.00
10% para compras ≥ R$ 200.00
Exiba o valor final com desconto. */
float compras = 0, maisitens = 0;

printf("Qual valor de total em compras gastos na loja LUCAS.COM"); scanf("%f", &compras);
while (compras < 100)
{
    printf("Realize mais compras para poder adquirir descoontos na Loja!!!\n");
    scanf("%f", &maisitens);
    compras += maisitens ;
    printf (" Saldo em compras: %.2f\n", compras);
}
if( compras >= 100 && compras <200) 
{
    compras -= compras * 0.05 ;
    printf("Voce tem 5 por cento de desconto!!! valor a pagar é: %.2f", compras);
} else if (compras >= 200)
{
    compras -= compras * 0.10 ;
    printf("Voce tem 10 por cento de desconto!!! valor a pagar é: %.2f", compras);
}


    return 0;
}