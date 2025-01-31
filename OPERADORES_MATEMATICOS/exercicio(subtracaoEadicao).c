#include<stdio.h>
int main (){
    
    /*Na fazenda Morro Alto são produzidas laranjas. Assim que começou o período da colheita, 
    uma grande produção já foi contabilizada. A tabela abaixo mostra a produção nos três primeiros dias.*/

float segunda = 3.265;
float terca = 4.127;
float quarta = 2.987;
float resultado = 0;
float diferenca = 0;



printf("Qual a produção total nos 3 dias?\n");
resultado = segunda + terca + quarta;
printf("Resuldo total dos 3 dias é: %.3f\n", resultado);

printf("Qual a diferença de produção entre o dia de maior e menor?\n");
diferenca = terca - quarta;
printf("Diferença de produção é: %.3f\n", diferenca);



return 0;
}