/* Faça um programa que preencha uma matriz M10x5 com números inteiros. Após preencher a matriz, crie uma segunda matriz que seja a transposta de M. 
Ao final, escreva a matriz Transposta. */
#include <stdio.h>

#define l 10
#define c 5
#define lim 25

void preencheMatriz(int mat[lim][lim]) {
    for (int i = 0; i < l; i++) 
        for (int j = 0; j < c; j++) {
            printf("Digite a posicao [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
}
void transpoeMatriz(int mat[lim][lim], int mtx[lim][lim]) {
    for (int i = 0; i < l; i++) 
        for (int j = 0; j < c; j++) 
            mtx[j][i] = mat[i][j];
}
int main(void) {
    int mat[lim][lim], maT[lim][lim];
    
    preencheMatriz(mat);
    transpoeMatriz(mat, maT);
    printf("\n\nA matriz:\n\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) 
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    printf("\n\nTem como matriz transposta:\n\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < l; j++) 
            printf("%d ",maT[i][j]);
        printf("\n");
    }

    return 0;
}