/* Faça um programa que leia os nomes e as notas dos 60 alunos de uma turma e  imprima, após a entrada 
de todos os dados, os nomes dos alunos aprovados. Considere que a média para aprovação é 6,0. */
#include <stdio.h>
#include <string.h>
#include <conio.h>

#define ent 60

int main(void) {
    char alunos[ent][100];
    float notas[ent][1];

    for (int i = 0; i < ent; i++) {
        printf("Digite o nome d@ %dº alun@: ", i+1);
        scanf(" %[^\n]s", alunos[i]);
        
        printf("Digite a nota d@ %dº alun@: ", i+1);
        scanf("%f", &notas[i][0]);
        
        printf("\n");
    }
    
    printf("Os alun@s aprovados sao: \n");
    
    for (int j = 0; j < ent; j++)
        if (notas[j][0] >= 6.0)
            printf("%s\n", alunos[j]);

    return 0;
}