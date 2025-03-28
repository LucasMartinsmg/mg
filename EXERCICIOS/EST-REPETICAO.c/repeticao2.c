#include<stdio.h>
int main (){
    /*Peça ao usuário dois números inteiros, início e fim (ex: 3 e 10).

Liste apenas os números ímpares nesse intervalo (incluindo os extremos, se forem ímpares).

Use obrigatoriamente o loop for */
int inicio, fim ;
printf("Ente com primeiro numero: \n"); scanf("%d", &inicio);
printf("Ente com segundo numero: \n"); scanf("%d", &fim);

for(int i = inicio; i <= fim; i++) {
    if (i % 2 !=0 )
    {
        printf("%d - ", i);
    }
    
}






}