#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float temp_promedio(int matriz[30][2]) {
    float suma = 0;
    for (int i = 0; i < 30; i++) {
        suma += matriz[i][0]; // Sumar las temperaturas máximas
        suma += matriz[i][1]; // Sumar las temperaturas mínimas
    }
    return suma / 60.0; // Dividir la suma total por la cantidad de datos (30 días * 2 temperaturas por día)
}

void temperatura_maxima(int matriz[30][2], int *dia_max_temp, int *max_temp, int *dia_min_temp, int *min_temp){
    *dia_max_temp = 1;
    *dia_min_temp =1;
    *max_temp = matriz[0][0];
    *min_temp = matriz[0][1];

    for( int i = 0; i < 30; i++){
        for( int j = 0; j < 2; j++){
            if(matriz[i][j] > *max_temp){
                *max_temp = matriz[i][j];
                *dia_max_temp = i + 1;
            }
            if(matriz[i][j] < *min_temp){
                *min_temp = matriz[i][j];
                *dia_min_temp = i+1;
            }
        }
    }
}


int main(void){
    srand(time(NULL));
    int matriz[30][2];
    int dia_max_temp = 1, dia_min_temp = 1;
    int max_temp, min_temp;
    float promedio;

    for (int i = 0; i < 30; i++) {
        matriz[i][0] = rand() % 61 - 20;  // Temperatura máxima
        matriz[i][1] = rand() % 61 - 20;  // Temperatura mínima
    }
    promedio = temp_promedio(matriz);
    temperatura_maxima(matriz, &dia_max_temp, &max_temp, &dia_min_temp, &min_temp);

    printf("Promedio de temperaturas: %.2f\n", promedio);
    printf("El dia de maxima temperatura fue el : %d (Temperatura: %d)\n", dia_max_temp, max_temp);
    printf("El dia de minima temperatura fue el: %d (Temperatura: %d)\n", dia_min_temp, min_temp);

    return 0;
}