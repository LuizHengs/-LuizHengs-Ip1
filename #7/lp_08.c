#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher (int matriz[][8]) {

    time_t t;
    srand ((unsigned) time(t));

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            matriz[i][j] = rand() % 40;

    return;

}

void mostrar (int matriz [][8]) {

    int mostre;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            mostre = matriz[i][j];
            printf("%i ", mostre);
        }
        printf("\n");
    }

    return;

}

void somatorio (int matriz[][8], int soma[]) {

    int i, j;

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            soma[i] += matriz[i][j];

    printf("\nO vetor soma eh:\n");
    for (i = 0; i < 8; i++)
        printf("%d ", soma[i]);

}

void  multiplica(int matriz[][8], int resultado[][8], int soma[]) {

    int i, j;

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            resultado[i][j] = matriz[i][j] * soma[i];


}



int main () {


    int M[8][8], R[8][8];
    int soma[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    preencher (M);

    printf("A matriz M eh:\n\n");
    mostrar(M);

    somatorio(M, soma);

    multiplica(M, R, soma);

    printf("\n\nA matriz Resultado agora eh:\n\n");
    mostrar(R);

    while (getchar() != '\n');
    getchar();
    return 0;
}
