#include<stdio.h>
int main (){
/* O programa inicia com um saldo de R$ 0.00.
Enquanto o saldo for menor que R$ 50.00 (valor mínimo para bônus):
Peça ao usuário o valor da recarga (mínimo R$ 5.00).
Valide se o valor é positivo e >= R$ 5.00.
Some ao saldo.
Mostre o saldo atual.
Quando atingir ou ultrapassar R$ 50.00:
Adicione 10% de bônus.
Exiba:
Copy
Parabéns! Você ganhou 10% de bônus.  
Saldo final: R$ XX.XX   */
float saldo = 0 , bonus = 50 , recarga, premio ;

printf("Saldo atual é R$ 0.00 e recarga minima R$ 5.00 \n");
while (saldo <= bonus){
    
    printf("Voce ainda não é legivel para promoção...\nInsira uma recarga minima de R$ 5.00: "); scanf("%f", &recarga);
    if (recarga >= 5)
    {
        saldo += recarga;
    printf("Saldo atualizado: R$ %.2f\n", saldo);
    } else 
    {
        printf ("###RECARGA MINIMA R$ 5.00 ###\n");
    }

    if (saldo >= 50)
    {
        saldo += saldo * 0.10;
printf ("Parabéns! Você ganhou 10 por cento de bônus. Saldo total %.2f\n", saldo);
    }
    
}

  

}