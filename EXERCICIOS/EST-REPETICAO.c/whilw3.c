#include<stdio.h>
int main(){
/* O programa começa com 10 itens em estoque.
Enquanto houver itens disponíveis:
Mostre a quantidade atual.
Pergunte quantos itens o usuário deseja comprar.
Subtraia do estoque (validando se a quantidade é válida).
Quando o estoque acabar, exiba: */
int estoque = 10 , vendidos = 0 , restam = 10;
printf("Temos %d em estoque.\n", estoque);
while (estoque > 0){
    printf("Quantas vendas foram realizadas hoje? \n"); scanf("%d", &vendidos);
    estoque -= vendidos ;
    printf("Estoque atualizado: %d\n", estoque);
}
printf("###ESTOQUE ZERADO###\n");
    return 0;
}