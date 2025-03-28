#include <stdio.h>
int main (){

    //Exercício: Triângulo Retângulo de Asteriscos
//Crie um programa que exiba um triângulo retângulo de asteriscos (*) com 5 linhas
int linha = 5 ;

for (int i =1; i <= linha ; i++)
{
    for (int j = 1; j <= i; j++)
    {
        printf("* ");
    }
    printf("\n");
}






    return 0;
}