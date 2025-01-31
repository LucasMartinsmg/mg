#include<stdio.h>
int main (){

/*Exercício 2 - Multiplicação
Elisa está a procura de uma televisão para colocar em sua sala. 
Ela viu um anúncio de um modelo novo com as opções de pagamento à vista e a prazo.*/

float Avista = 1350;
float parcelado = 138;
float resposta = 0;
float ttlPARCELA = 0;

printf("Quanto Elisa pagará a mais se optar pelo pagamento a prazo?\n");

ttlPARCELA = parcelado *= 12;
printf("Valor total de 12x é: %.2f\n", ttlPARCELA);

 resposta = ttlPARCELA - Avista;

printf("Elisa pagara a mais %.2f por optar em pagamento a prazo.\n Se pagasse a vista seria de %.2f\n", resposta, Avista);







return 0;


}