#include <stdio.h>
int main (){
/* O programa deve pedir ao usuário uma nota.
Se a nota for inválida (menor que 0 ou maior que 10), repita o pedido.
Quando a nota for válida, exiba uma mensagem de confirmação. 
Digite uma nota (0-10): -5  
Nota inválida! Tente novamente.  
Digite uma nota (0-10): 15  
Nota inválida! Tente novamente.  
Digite uma nota (0-10): 7  
Nota válida! Você digitou: 7.0 
*/
int nota;
do
{
    printf("Insira a nota (0 - 10) \n"); scanf("%d", &nota);
} while (nota > 0 && nota < 10);
{
    printf("Nota invalida digite nota entre 0 - 10 !!!\n");
    scanf("%d", &nota);
}



    return 0;
}