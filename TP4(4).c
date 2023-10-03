#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void suma_punto2(int matriz[3][3], int filas, int columnas, int suma_filas[], int suma_columnas[]){
    suma_filas[3];
    suma_columnas[3];
    int suma = 0;
    for( int i = 0; i < filas; i++){
        for(int j= 0; j < columnas; j++) {
            suma_filas[i] += matriz[i][j];
            suma_columnas[j] += matriz[i][j];
        }
        printf("Suma de las filas: ");
        for( int i = 0; i < filas; i++){
            printf("%d ", suma_filas[i]);
        }
    }
}


int main(void){
    int const filas = 3;
    int const columnas = 3;
    int matriz[3][3] = {5, 7, 3,
                        2, 3, 4,
                        8, 6, 4
    };
    int suma_filas[3] = {0};
    int suma_columnas[3] = {0};

    suma_punto2(matriz, filas, columnas, suma_filas, suma_columnas);

    printf("Matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSuma de las filas: ");
    for (int i = 0; i < filas; i++) {
        printf("%d ", suma_filas[i]);
    }

    printf("\nSuma de las columnas: ");
    for (int j = 0; j < columnas; j++) {
        printf("%d ", suma_columnas[j]);
    }

    printf("\n");

    return 0;
}