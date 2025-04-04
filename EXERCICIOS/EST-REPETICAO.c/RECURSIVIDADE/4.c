#include <stdio.h>

void inicial(int inc)
{
    if(inc > 0)
    {
        printf("Bom dia!! Sou Lucas trabalho na aeroMx.\n");
    inicial(inc -1);

    }
}

int main(){

    int repeticao = 2;

inicial(repeticao);

return 0;
}