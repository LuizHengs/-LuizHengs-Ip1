#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher (int matriz[][5]) {

    srand (time(NULL));

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            matriz[i][j] = rand();

}

int comparar (int matriz[][5], int * lm, int * cm) {

    int m = -30000;

    for (int l = 0; l < 4; l++)
        for (int c = 0; c < 5; c++) {
            if (matriz[l][c] > m) {
                m = matriz[l][c];
                *lm = l;
                *cm = c;
            }
        }

    return m;

}


int main () {


    int R[4][5] = {}, maior, linha, coluna;

    preencher (R);

    maior =  comparar (R, &linha, &coluna);

    printf("Maior elemento = %d, linha = %d e coluna = %d\n", maior, linha, coluna);
    while (getchar() != '\n');
    getchar();
    return 0;
}
