#include<stdio.h>

int main(){
/* PRINCIPAIS OPERADORES MATEMATICOS
- SOMA (+)
- SUBTRAÇÃO (-)
- MULTIPLICAÇÃO (*)
- DIVISÃO (/)                                            */
int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf("Insira numero1:\n");
scanf("%d", &numero1);
printf("Insira numero2:\n");
scanf("%d", &numero2);

soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero2;

printf("A soma e: %d\n", soma);
printf("A subtração e: %d\n", subtracao);
printf("A multiplicação e: %d\n", multiplicacao);
printf("A divisao e: %d\n", divisao);


}