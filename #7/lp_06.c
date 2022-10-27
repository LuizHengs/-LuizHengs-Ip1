#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher (int matriz[3][3]) {

    srand (time(NULL));

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matriz[i][j] = rand() % 3000;
    
    return;

}

void mostrar (int matriz [3][3]) {

    int mostre;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mostre = matriz[i][j];
            printf("%i ", mostre);
        }
        printf("\n");
    }

    return;

}

void menorMultipl (int matriz[3][3], int resultado[3][3]) {

    int i, j;
    int menor = 3000;

    for (i = 0; i < 3; i++) 
        for (j = 0; j < 3; j++) 
            if (menor > matriz[i][j])
                menor = matriz[i][j];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            resultado[i][j] = ((matriz[i][j]) * menor);
    
    return;

} 



int main () {


    int M[3][3], R[3][3];

    preencher (M);

    printf("A matriz M eh:\n");
    mostrar(M);

    menorMultipl(M, R);

    printf("A matriz Resultado agora eh:\n");
    mostrar(R);

    while (getchar() != '\n');
    getchar();
    return 0;
}
