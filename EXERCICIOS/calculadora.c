#include <stdio.h>


/* Exercício 1: Calculadora Simples
Objetivo: Praticar operações básicas e entrada/saída.

Escreva um programa que:

Peça ao usuário para digitar dois números.

Mostre o resultado das quatro operações básicas (+, -, *, /) com esses números.

Trate o caso de divisão por zero (exiba "Erro: divisão por zero!"). 
Digite o primeiro número: 10  
Digite o segundo número: 2  
Soma: 12  
Subtração: 8  
Multiplicação: 20  
Divisão: 5.0 */

int main (){
int num1, num2, soma, subtracao, multiplicacao;
float divisao;
// SOLICITAÇÃO DE DADOS 1 E 2
printf("Entre com primeiro numero: \n"); scanf("%d", &num1); 
printf("Entre com segundo numero: \n"); scanf("%d", &num2); 

// SOMAS DOS RESULTADOS
soma = num1 + num2;
subtracao = num1 - num2 ;
multiplicacao = num1 * num2 ;
divisao = (float)num1 / num2 ;

printf(" Soma: %d\n", soma);
printf("Subtração: %d\n", subtracao);
printf("Multiplicação: %d\n", multiplicacao);
if (divisao == 0)
{
    printf ("Erro: divisão por zero! Faça novamente");
} else 
{
    printf("Divisão: %.2f\n", divisao);
}
printf("#### CALCULOS FINALIZADOS ####\n");
    return 0;
}