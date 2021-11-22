/* Faça um programa que leia os N salários dos funcionários de uma empresa. Calcule a média salarial da empresa 
e escreva a quantidade de funcionários que possuem salário acima da média */
#include <stdio.h>

int main(void) {
    int N, count = 0;
    float media = 0.0;

    do {
        printf("Informe o numero de funcionarios da empresa: ");
        scanf("%d", &N);
    } while (N < 1);
    
    float salario[N];

    for (int i = 0; i < N; i++) {
        printf("\nDigite o salario do funcionario: R$");
        scanf("%f", &salario[i]);

        media += salario[i];
    }

    media /= N;

    for (int j = 0; j < N; j++)
        if (salario[j] > media)
            count++;
    
    printf("\n\n%d funcionarios tem o salario acima da media R$%.2f", count, media);
    
    return 0;
}