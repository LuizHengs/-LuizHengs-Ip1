#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher (int linha, int coluna, int matriz[linha][coluna]) {

    //time_t t;
    //srand ((unsigned) time(NULL));

    for (int i = 0; i < linha; i++) {
        printf("Preencha a %da linha: \n", i + 1);
        for (int j = 0; j < coluna; j++)
            scanf("%d", &matriz[i][j]);
    }
    return;

}

void mostrar (int linha, int coluna, int matriz[linha][coluna]) {

    int mostre;

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            mostre = matriz[i][j];
            printf("%i ", mostre);
        }
        printf("\n");
    }

    return;

}

void igual0Linha(int linha, int coluna, int matriz[linha][coluna]) {

    int i, j, nulos;

    for (i = 0; i < linha; i++) {
        nulos = 0;
        for (j = 0; j < coluna; j++)
            if (matriz[i][j] == 0)
                nulos++;
        printf("Essa eh a quantidade de 0 na %da linha: %d\n", i + 1, nulos);
    }

    printf("\n");

}

void igual0Coluna(int linha, int coluna, int matriz[linha][coluna]) {

    int i, j, nulos;

    for (j = 0; j < coluna; j++) {
        nulos = 0;
        for (i = 0; i < linha; i++)
            if (matriz[i][j] == 0)
                nulos++;
        printf("Essa eh a quantidade de 0 na %da coluna: %d\n", j + 1, nulos);
    }

    printf("\n");
}

void pares (int linha, int coluna, int matriz[linha][coluna]) {

    int i, j, pares = 0;

    printf("Escolha a linha da matriz (de 0 ao valor (%d)) que voce escolheu subtraido por 1(ou seja, escolha de 0 a %d) para identificar quantos elementos pares temos nessa linha: \n", linha, linha -1);
    scanf("%d", &i);

    for (j = 0; j < coluna; j++)
        if (matriz[i][j] % 2 == 0)
            pares++;

    printf("\nO numero de elementos pares na linha que voce escolheu eh de: %d\n\n", pares);

    pares = 0;

    printf("Agora escolha a coluna da matriz (de 0 ao valor (%d)) que voce escolheu subtraido por 1(ou seja, escolha de 0 a %d) para identificar quantos elementos pares temos nessa coluna: \n", coluna, coluna -1);
    scanf("%d", &j);

    for (i = 0; i < linha; i++)
        if (matriz[i][j] % 2 == 0)
            pares++;

     printf("\nO numero de elementos pares na coluna que voce escolheu eh de: %d\n\n", pares);

}

void media (int linha, int coluna, int matriz[linha][coluna]) {

    int i, j, indice = 0;
    float media[linha], maiorMedia = -30000;

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++)
            media[i] += matriz[i][j];
        media[i] = (float)media[i]/coluna;
        printf("\nA media da %da linha eh de %.2f\n", i + 1, media[i]);

        if (maiorMedia < media[i]) {
            maiorMedia = media[i];
            indice = i;
        }
    }

    printf("A maior media eh de %.2f e seu indice no vetor eh de %d\n", maiorMedia, indice);


}

int main () {


    int j, i, l, c, nulo;

    printf("Escreva a quantidade de linhas e a quantidade de colunas na matriz: ");
    scanf("%d %d", &l, &c);

    int N[l][c];

    //a

    preencher (l, c, N);

    printf("A matriz N eh:\n");
    mostrar(l, c, N);

    //b

    igual0Linha(l, c, N);

    //c

    igual0Coluna(l, c, N);

    //d e

    pares(l, c, N);

    // f g

    media (l, c, N);

    while (getchar() != '\n');
    getchar();
    return 0;
}
