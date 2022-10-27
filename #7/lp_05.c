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

int somatorio (int matriz [][3]) {

    int linha;
    long int maiorSoma = -30000;

    for (int i = 0; i < 3; i++) {
        long int soma = 0;
        for (int j = 0; j < 3; j++) {
            soma += matriz [i][j];
        }
        if (soma > maiorSoma) {
            maiorSoma = soma;
            linha = i;
        }
    }

    return linha;
}



int main () {


    int A[3][3] = {}, l;

    preencher (A);

    printf("A matriz A eh:\n");
    mostrar(A);

    l = somatorio(A);

    printf("A linha da matriz que possui a maior soma de seus elementos eh %d\n", l);

    while (getchar() != '\n');
    getchar();
    return 0;
}
