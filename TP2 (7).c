#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenar_vector(int vector[], int tamaño){
    int i, j;
    for(i = 0; i < tamaño - 1; i++){
        for(j = 0; j < tamaño - i - 1; j++){
            if(vector[j] > vector[j + 1]){
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[ j + 1]= temp;
            }
        }
    }
}

int contar_vector(int vector[], int tamaño){
    int contador = 0;
    int resultado = 0;
    for(int i = 0; i < tamaño -1; i++) { // el -1 es para evitar desbordamiento
        int repetido = 1;
        while(i < tamaño -1 && vector[i] == vector[i+1]){
            repetido++;
            i++;
        }
        if (repetido> contador) {
            contador = repetido;
            resultado = vector[i];
        }
    }
    return resultado;
    }


int main(void) {
    srand(time(NULL));
    int tamaño = 10;
    int vector[tamaño];
    for (int i = 0; i < tamaño; i++) {
        vector[i] = rand() % 10;
    }
    ordenar_vector(vector, tamaño);
    printf("Vector ordenado: ");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", vector[i]); // Agregamos un espacio para separar los números
    }
    printf("\n");
    int edadMasComun = contar_vector(vector, tamaño);

    printf("La edad mas comun es: %d\n", edadMasComun);

    return 0;

}