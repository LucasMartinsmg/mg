/*Exercício 2: Verificador de Número Par/Ímpar
Objetivo: Praticar estruturas condicionais (if/else).

Escreva um programa que:

Peça ao usuário um número inteiro.

Verifique se o número é par ou ímpar (use o operador %).

Exiba uma mensagem com o resultado.*/
#include <stdio.h>
int main (){
int num;

printf("Entre com numero: "); scanf("%d", &num);
if (num % 2 == 0)
{
    printf("%d é PAR!!\n", num);
} else 
{
    printf ("%d é IMPAR!!\n", num);
}



    return 0;
}