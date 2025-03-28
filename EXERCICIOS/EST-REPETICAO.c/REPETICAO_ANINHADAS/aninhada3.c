#include <stdio_ext.h>
int main(){

    int linha = 5, numero =1;
    for(int i = 1; i <= linha; i++ )
    {
        for(int j =1 ; j <= i; j++)
        {
            printf("%d ", numero);
            numero++ ;
        }
        printf("\n");
    }






    return 0;
}