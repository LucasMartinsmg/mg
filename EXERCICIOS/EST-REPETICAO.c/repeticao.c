#include <stdio.h>

int main() {
    
    int nun;
        printf("Digite um numero positivo para contagem regressiva: "); scanf("%d", &nun);
        
    for (int i = nun ; i >= 0 ; i--) {
        printf("%d\n", i);
    }
       printf("FOGO!!!!\n");
    
    

    return 0;
}