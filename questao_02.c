/* Considere um vetor que guarde 100 números reais. Faça um programa que  preencha este vetor. Após o vetor preenchido multiplique 
seus valores ímpares por 3 e divida os valores pares por 2. Escreva o maior elemento do vetor. */
#include <stdio.h>

#define tam 100

int main(void) {
    int vetor[tam], maior = 0, i, j, a;

    for (i = 0; i < tam; i++) {
        printf("Digite um numero para a posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
        
        if (vetor[i] > maior)
            maior = vetor[i];
    }

    printf("\n\nO maior elemento do vetor eh: %d", maior);
    printf("\n\nOs valores impares multiplicados por 3 sao:");
    
    for (j = 0; j < tam; j++)
        if (vetor[j] % 2 == 1)
            printf(" %d", (vetor[j] * 3));

    printf("\n\nOs valores pares divididos por 2 sao:");

    for (a = 0; a < tam; a++)
        if (vetor[a] % 2 == 0)
            printf(" %d", (vetor[a] / 2));

    return 0;
}