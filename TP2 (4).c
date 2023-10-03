#include <stdio.h>
/*
    Dentro de la función haría una variable que almacene un valor del arreglo para
    luego modificar el valor de esa posición hasta mover todos los elementos
    a la derecha.
*/
void mover_punto4(int m[], int n, int u) {
    int temp = m[u]; // Almacenamos el elemento en la posición 'u'

    for (int i = u; i > 0; i--) {
        m[i] = m[i - 1]; // Movemos cada elemento a la derecha desde 'u' hasta 0
    }

    m[0] = temp; // Asignamos el elemento almacenado en 'temp' en la primera posición
}

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int n = 5; // Tamaño del arreglo

    printf("Arreglo original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }

    int posicion = 2; // Posición desde la que moveremos el elemento
    mover_punto4(arreglo, n, posicion);

    printf("\nArreglo modificado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}