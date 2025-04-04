#include <stdio.h>

void contagem(int numero)
{
    if (numero > 0)
    {
        printf("%d\n", numero);
        contagem(numero -1);
    }
}




int main(){

    int quantidade =10 ;

    printf("Contagem.....\n");
    contagem(quantidade);




    return 0;
}