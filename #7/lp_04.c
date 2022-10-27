#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher (int matriz[][3]) {

    srand (time(NULL));

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matriz[i][j] = rand();

}

void mostrar (int matriz [][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

}


void transpor (int matriz [][3], int trans[][3]) {

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        trans[j][i] = matriz[i][j];

}


int main () {


    int A[3][3] = {};
    long int soma;

    preencher (A);


    int T[3][3] = {};

    transpor(A, T);

    printf("A matriz A eh:\n");
    mostrar(A);

    printf("A matriz transposta eh:\n");
    mostrar(T);

    while (getchar() != '\n');
    getchar();
    return 0;
}
