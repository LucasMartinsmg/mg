#include <stdio.h>
 
int main() {

    int index;

    char * nomesAlunos [3][3]= {
        {"Aluno 1", "Pt: 30", "Mat: 90"},
        {"Aluno 2", "Pt: 60", "Mat: 60"},
        {"Aluno 3", "Pt: 100", "Mat: 200"}
    };

    printf("Didite o numero do aluno que deseja ver a nora...\n");
    printf("Para aluno 0, digite 0\n");
    printf("Para aluno 1, digite 0\n");
    printf("Para aluno 2, digite 0\n");
    scanf("%d", &index);

    printf("A notas do %s são: %s , %s....\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);









    return 0;
}