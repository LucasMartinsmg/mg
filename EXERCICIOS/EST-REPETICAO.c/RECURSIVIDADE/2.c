#include <stdio.h>

void maiorIdade(int idadeM)
{
    if(idadeM >= 1)
    {
        printf("Voce é maior de idade!!!!\n");
        maiorIdade(idadeM -1 );
    }

}

int main(){

    int maior = 18;

    maiorIdade(maior);
    printf("FINALIZADO!!!\n");






    return 0;
}