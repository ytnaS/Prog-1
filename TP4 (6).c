#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para calcular el promedio de temperaturas en el mes
float calcularPromedio(int matriz[30][2]) {
    float suma = 0;
    for (int i = 0; i < 30; i++) {
        suma += matriz[i][0]; // Sumar las temperaturas máximas
        suma += matriz[i][1]; // Sumar las temperaturas mínimas
    }
    return suma / 60.0; // Dividir la suma total por la cantidad de datos (30 días * 2 temperaturas por día)
}

// Función para encontrar el día de máxima y mínima temperatura
void encontrarDiaExtremo(int matriz[30][2], int *dia_max_temp, int *max_temp, int *dia_min_temp, int *min_temp) {
    *max_temp = matriz[0][0]; // Inicializar temperatura máxima con el primer valor
    *min_temp = matriz[0][1]; // Inicializar temperatura mínima con el primer valor

    for (int i = 1; i < 30; i++) {
        if (matriz[i][0] > *max_temp) {
            *max_temp = matriz[i][0];
            *dia_max_temp = i + 1; // Sumar 1 para obtener el día correcto
        }
        if (matriz[i][1] < *min_temp) {
            *min_temp = matriz[i][1];
            *dia_min_temp = i + 1; // Sumar 1 para obtener el día correcto
        }
    }
}

int main(void) {
    srand(time(NULL));
    int matriz[30][2]; // Matriz para almacenar las temperaturas máximas y mínimas de 30 días
    int dia_max_temp = 1, dia_min_temp = 1; // Días de máxima y mínima temperatura
    int max_temp, min_temp; // Temperaturas máxima y mínima
    float promedio;

    for (int i = 0; i < 30; i++) {
        matriz[i][0] = rand() % 41 + 30; // Generar temperatura máxima entre 30°C y 70°C
        matriz[i][1] = rand() % 21 + 10; // Generar temperatura mínima entre 10°C y 30°C
    }

    promedio = calcularPromedio(matriz);
    encontrarDiaExtremo(matriz, &dia_max_temp, &max_temp, &dia_min_temp, &min_temp);

    printf("Promedio de temperaturas en el mes: %.2f\n", promedio);
    printf("Día de máxima temperatura: Día %d, Temperatura: %d°C\n", dia_max_temp, max_temp);
    printf("Día de mínima temperatura: Día %d, Temperatura: %d°C\n", dia_min_temp, min_temp);

    return 0;
}
