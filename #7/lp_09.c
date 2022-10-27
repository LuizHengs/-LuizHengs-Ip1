#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher (int matriz[][10]) {

    //time_t t;
    srand ((unsigned) time(NULL));

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            matriz[i][j] = rand() % 150;

    return;

}

void mostrar (int matriz [][10]) {

    int mostre;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mostre = matriz[i][j];
            printf("%i ", mostre);
        }
        printf("\n");
    }

    return;

}

void troca (int matriz[][10], int resultado [][10]) {

    int i, j;

    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            resultado[i][j] = matriz[i][j];

    for (j = 0; j < 10; j++) {
        resultado[1][j] = resultado[1][j] + resultado[7][j];
        resultado[7][j] = resultado[1][j] - resultado[7][j];
        resultado[1][j] = resultado[1][j] - resultado[7][j];
    }

    for (j = 0; j < 10; j++) {
        resultado[j][3] = resultado[j][3] + resultado[j][9];
        resultado[j][9] = resultado[j][3] - resultado[j][9];
        resultado[j][3] = resultado[j][3] - resultado[j][9];
    }

}



int main () {


    int M[10][10], R[10][10];

    preencher (M);

    printf("A matriz M eh:\n");
    mostrar(M);

    troca(M, R);

    printf("\nA matriz Resultado agora eh:\n\n");
    mostrar(R);

    while (getchar() != '\n');
    getchar();
    return 0;
}
