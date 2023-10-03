#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
   primero haría un vector vacío, luego una variable N que contendrá numeros enteros, una variable que tenga
   2 numeros, el primero va a ser considerado el máximo y el segundo será considerado el minimo una función rand para
   generar numeros aleatorios entre los rangos del maximo y del minimo.
*/

// Función para cargar un vector con números enteros aleatorios entre menor y mayor
void numerosRand_punto1(int V[], int n, int menor, int mayor) {
    int rango = mayor - menor + 1;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        V[i] = rand() % rango + menor;
    }
}

// Función para calcular el producto escalar de dos vectores a y b
int vectores_punto2(int a[], int b[], int n) {
    int producto_escalar = 0;
    for (int i = 0; i < n; i++) {
        producto_escalar += a[i] * b[i];
    }
    return producto_escalar;
}

/*
    Ya que la función va a recibir ambos vectores, lo primero que haría sería hacer un for en el cual igualamos i a 0
    y luego usaría un if para que tome el valor a[i] y si se divide por 2 da como resto 0 y si b[i] dividido 2 da
    como resultado un numero distinto a 0 sumen a[i] y b[i], esto se almacene en sumatoria para luego imprimirlo.
*/

int suma_punto3(int A[], int B[], int N){
    int suma = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            suma += A[i];
        }
        else{
            suma += B[i];
        }
    }
    return suma;
}


int main() {
    // VARIABLE PUNTO 1:
    int n = 10;
    int V[n];
    int mayor = 37;
    int menor = 20;

    // VARIABLE PUNTO 2:
    int a[n];
    int b[n];

    // VARIABLE PUNTO 3:
    int N = 6;
    int A[] = {1,2,3,4,5, 6};
    int B[]= {10, 20, 30, 40, 50, 60};

    // VARIABLE PUNTO 4:
    int m[]= {5,7,4,4,9};
    int u = m[4];

   // LLAMADA A LAS FUNCIONES
    numerosRand_punto1(a, n, menor, mayor);
    numerosRand_punto1(b, n, menor, mayor);
    int resultado = suma_punto3(A, B, N);

    // Calcular el producto escalar
    int producto = vectores_punto2(a, b, n);

    // IMPRIMIR FUNCIÓN PUNTO 2:
    printf("Producto Escalar: %d\n", producto);

    // IMPRIMIR FUNCIÓN PUNTO 3:
    printf("La suma de elementos pares de A con elementos impares de B es: %d\n", resultado);
    return 0;
}
