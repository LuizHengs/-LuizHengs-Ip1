#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher (int matriz[][4]) {

    time_t t;
    srand ((unsigned) time(t));

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 4; j++)
            matriz[i][j] = rand() % 40;

    return;

}

void mostrar (int matriz [][4]) {

    int mostre;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            mostre = matriz[i][j];
            printf("%i ", mostre);
        }
        printf("\n");
    }

    return;

}

int  maior30 (int matriz[][4], int resultado[][4]) {

    int i, j;
    int quantidadeMaior30 = 0;

    for (i = 0; i < 6; i++)
        for (j = 0; j < 4; j++)
            if (matriz[i][j] > 30)
                quantidadeMaior30++;

    for (i = 0; i < 6; i++)
        for (j = 0; j < 4; j++) {
                resultado[i][j] = matriz[i][j];
            if (matriz[i][j] == 30)
                resultado[i][j] = 0;
        }

    return quantidadeMaior30;

}



int main () {


    int M[6][4], R[6][4], m30;

    preencher (M);

    printf("A matriz M eh:\n");
    mostrar(M);

    m30 = maior30(M, R);

    printf("\nEh(Sao) %d elemento(s) maior(es) do que 30 na matriz\n\n", m30);

    printf("A matriz Resultado agora eh:\n");
    mostrar(R);

    while (getchar() != '\n');
    getchar();
    return 0;
}
