#include<stdio.h>
int main(){
/* Peça ao usuário um valor em reais (ex: R$ 5.00).

Permita que o usuário digite valores de moedas (R
0.05
,
R
0.05,R 0.10, R
0.25
,
R
0.25,R 0.50 ou R$ 1.00) uma por uma.

Continue somando as moedas até atingir ou ultrapassar o valor desejado.

No final, mostre:

Total arrecadado

Quantidade de moedas inseridas */
float objetivo, saldo, total , deposito;



printf("Qual seu objetivo? "); scanf("%f", &objetivo);
printf("Qual saldo atual? "); scanf("%f", &saldo);
while (objetivo > total){
    printf("Insira um deposito: "); scanf("%f", &deposito);
    total = saldo += deposito;
    printf("saldo total %.2f\n", total);


}



}