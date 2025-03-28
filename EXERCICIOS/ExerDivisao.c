#include<stdio.h>

int main(){

/*Exercício 3 — Divisão
Em um projeto para a construção de um cinema, os arquitetos estão avaliando a relação entre a quantidade de fileiras e a quantidade de cadeiras em cada fileira. 
O projeto inicial prevê uma sala para 304 pessoas. No caso de utilizarem 19 fileiras, o número de cadeiras por fileira será

a) 14.
b) 15.
c) 16.
d) 13.
e) 12.*/

int pessoas = 304;
int fileiras = 19;
int cadeirasPF = 0;
// Dividindo Pessoas por fileiras para chegar ao resultado
cadeirasPF = pessoas / fileiras;

printf("Numero de cadeiras por fileiras sao: %d\n", cadeirasPF);










}