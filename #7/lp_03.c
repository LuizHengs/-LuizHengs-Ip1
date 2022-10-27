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

int somatorio(int matriz[][3]) {

    long int soma = 0;

    for (int i = 0; i < 3; i++) {
            soma += matriz[i][2 - i];
        }

    return soma;

}

void diagonar (int matriz [][3], int diag[]) {

    for (int i = 0; i < 3; i++)
        diag[i] = matriz[i][2 - i];

}


int main () {


    int A[3][3] = {};
    long int soma;

    preencher (A);

    printf("A matriz A eh:\n");
    mostrar(A);

    //a
    soma =  somatorio(A);

    //b

    int D[3] = {};

    diagonar(A, D);

    printf("A soma na diagonal secundaria da matriz = %ld\n", soma);
    for (int i = 0; i < 3; i++)
        printf("O %do diagonal secundaria eh: %d\n", i + 1, D[i]);

    while (getchar() != '\n');
    getchar();
    return 0;
}
