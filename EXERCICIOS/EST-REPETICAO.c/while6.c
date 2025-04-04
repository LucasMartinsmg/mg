#include <stdio.h>
int main (){

    int idade;
    printf("Qual sua idade? \n");
    scanf("%d", &idade);

    while(idade < 18)
    {
        printf("acesso liberado somente para maior de idade!!! \n");
    scanf("%d", &idade);

    }
    printf("ACESSO LIBERADO!!!\n");





    return 0;
}