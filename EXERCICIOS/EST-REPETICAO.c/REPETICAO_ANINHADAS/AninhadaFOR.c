#include <stdio.h>
int main (){

    int i, j ;
    char letra;
    int nun;

    for (i = 1; i <= 5; i++)
    {
        letra = 'A';
        nun = 1 ;


        for (j = 1; j <= i; j++)
        {
            printf("%d ", nun);
            ++nun ;

        }
        printf("\n");
    }







    return 0;
}