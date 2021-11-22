/* Faça um programa que preencha uma matriz M5x5 com números reais. Após preencher a matriz:
    a) Verifique se ela é simétrica.
    b) Imprima a soma dos elementos da diagonal principal.
    c) Imprima a soma dos elementos da diagonal secundária.
Faça funções distintas para cada operação. */
#include <stdio.h>

#define N 5

void preencheMatriz(int mat[N][N]) {
    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) {
            printf("Digite a posicao [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
}
void escreveMatriz(int mat[N][N]) {   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) 
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}
void transpoeMatriz(int mat[N][N], int mtx[N][N]) {
    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) 
            mtx[j][i] = mat[i][j];
}
void verificaSimetria(int mat[N][N], int maT[N][N]){
    int C = 0;
    for (int i = 0; i < N; i++)
        if (maT[i][i] != mat[i][i]) {
            C = 1;
            break;
        }
    if (C == 1)
        printf("\n\nNao eh simetrica\n\n");
    else
        printf("\n\nEh simetrica\n\n");
}
int somaDiagonalPrincipal(int mat[N][N]) {   
    int soma = 0;   
    for (int i = 0; i < N; i++)
        soma = soma + mat[i][i];
    return soma;
}
int somaDiagonalSecundaria(int mat[N][N]) {   
    int soma = 0;
    for (int i = 0; i < N; i++)
        soma = soma + mat[i][N - 1 - i];
    return soma;
}
int main(void) {
    int mat[N][N], maT[N][N], soma, soma2;
    
    preencheMatriz(mat);
    printf("\n\nA matriz:\n\n");
    escreveMatriz(mat);
    transpoeMatriz(mat, maT);
    verificaSimetria(mat, maT);
    soma = somaDiagonalPrincipal(mat);
    printf("\n\nA soma da diagonal principal eh: %d\n\n", soma);
    soma2 = somaDiagonalSecundaria(mat);
    printf("\n\nA soma da diagonal secundaria eh: %d\n\n", soma2);
       
    return 0;
}