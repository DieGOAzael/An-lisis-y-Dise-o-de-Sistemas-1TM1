#include <cstdio>
#include <iostream>
using namespace std;

const int N = 3; // tamaño de la matriz
int op;

//rotacion de 90°

void rotar90(int mat[N][N]) {
    // transponer la matriz
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }

    // invertir las filas de la matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            swap(mat[i][j], mat[i][N - j - 1]);
        }
    }
}

//rotacion 180°
void rotar180(int mat[N][N]) {
    // invertir los elementos de la matriz
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N; j++) {
            swap(mat[i][j], mat[N - i - 1][N - j - 1]);
        }
    }
    if (N % 2 != 0) {
        for (int j = 0; j < N / 2; j++) {
            swap(mat[N / 2][j], mat[N / 2][N - j - 1]);
        }
    }
}

//rotar 270°
void rotar270(int mat[N][N]) {
    // Una rotación de 90 grados en sentido antihorario tres veces
    for (int i = 0; i < 3; i++) {
        rotar90(mat);
    }
}


int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Matriz original:\n");
    //opciones


    printf("Elige lo que quieres hacer: \n");
    printf("1.- Rotar 90°\n");
    printf("2.- Rotar 180°\n");
    printf("3.- Rotar 270°\n");
    scanf ("%d", &op);

    switch(op){

        case 1:
               printf("Matriz original:\n");
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }

            rotar90(mat);

            printf("Matriz rotada 90 grados:\n");
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }

            break;

        case 2:
                printf("Matriz original:\n");
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }

            rotar180(mat);

            printf("Matriz rotada 90 grados:\n");
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }
            break;
             default:
        printf("Opcion no valida.\n");
        break;

        case 3:
            printf("Matriz original:\n");
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }

        rotar270(mat);

        printf("Matriz rotada 270 grados:\n");
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }

            break;

    }
    //FINAL DE OPCIONES
    return 0;

}
