#include <stdio.h>

void idoso(int sesseta )
{
    if(sesseta <= 10)
    {
        printf("%d\n",sesseta);
        idoso(sesseta +1);
    }
}

int main(){

    int i = 0;
    idoso(i);



    return 0;
}