/* Faça um programa que preencha um vetor de N posições com os N primeiros  termos de uma série de Fibonacci (0 1 1 2 3 5 8 13 21 34...). 
Após preenchido o vetor, verifique se um determinado número informado pelo usuário pertence ou não ao vetor. */
#include <stdio.h>

int main(void) {
    int N, C, num, soma, F1 = 0, F2 = 1;

    do {
        printf("Informe o numero parametro, um numero positivo: ");
        scanf("%d", &N);
    } while (N < 1);

    int vetF[N];
    
    vetF[0] = F1;
    vetF[1] = F2;

    for (int i = 2; i < N; i++) {
        soma = F1 + F2;
        vetF[i] = soma;
        F1 = F2;
        F2 = soma;
    }
    
    printf("\n\nA sequencia eh: \n");
    
    for (int j = 0; j < N; j++)   
        printf(" %d", vetF[j]);

    do{
        printf("\n\n\nDigite o termo que deseja verificar se pertence ao vetor: ");
        scanf("%d", &num);
    } while (num < 0);

    for (int a = 0; a <= N; a++)
        if (vetF[a] == num)
            C = 1;
 
    if (C == 1)
        printf("O termo %d se encontra no vetor", num);
    else
        printf("O termo %d nao se encontra no vetor", num);

    return 0;
}