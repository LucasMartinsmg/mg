#include<stdio.h>
int main (){
/* O programa deve pedir ao usuário uma senha numérica de 4 dígitos (ex: "1234").

Enquanto a senha digitada não for igual à senha armazenada no sistema, o programa deve continuar pedindo.

Quando acertar, exibir "Acesso liberado!" e encerrar */
int segredo = 1234, senhadigitada ;
printf(" digite a senha do cartao: "); scanf("%d", &senhadigitada);
while (segredo != senhadigitada){
    printf (" Senha incorreta!!!\n");
    printf(" digite a senha do cartao Novamente: "); scanf("%d", &senhadigitada);
    
}
printf ("ACESSO LIBERADO\n");



    return 0;
}