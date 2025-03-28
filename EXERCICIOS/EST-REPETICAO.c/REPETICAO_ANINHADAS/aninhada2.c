#include <stdio.h>
int main(){
int linhas =10;

for(int i = 1; i <= linhas; i++ ) // loop externo (linhas)
{
    for(int j = 1; j <= i; j++ ) // loop externo numero na linha
    {
        printf("%d ", j);
        
    }
    printf("\n");
    
} 





    return 0;
}