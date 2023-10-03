#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    La función recibiría el vector cargado con la letra "X" y utilizaría un bucle para recorrer el vector y
    una función rand para ingresar una letra "A" en una posición aleatoria del vector, y luego recorrería el vector
    con un while verificando si contiene una letra "A" y de no ser así con la función rand haría que modifique
    la posición para ingresar una letra "B"
*/

void vector_punto5(char vector[], int tamano) {
    srand(time(NULL));
    int posicionA = rand()% tamano;
    int posicionB;
    do {
        posicionB = rand() % tamano;
    }
    while(posicionB == posicionA);{
        vector[posicionA] = 'A';
        vector[posicionB] = 'B';
    }
}

/*

*/

int contador_punto6(char vector[], int tamano){
    int contador = 0;
    int posicionA = -1;
    int posicionB = -1;
    for(int i = 0; i < tamano; i++){
        if(vector[i] == 'A'){
            posicionA = i;
        }
        else if(vector[i] == 'B'){
            posicionB = i;
        }
    }
    for(int i = posicionA; i < posicionB; i++){
        if(vector[i] == 'x'){
            contador++;
        }
    }
    return contador;
}
int main(void) {
    // PUNTO 5
    char vector[30];
    int tamano = 30;

    // Inicializar todos los elementos del arreglo con la letra 'x'
    for (int i = 0; i < tamano; i++) {
        vector[i] = 'x';
    }

    printf("Vector original: ");
    for (int i = 0; i < tamano; i++) {
        printf("%c ", vector[i]);
    }
    printf("\n");

    vector_punto5(vector, tamano);

    printf("Vector cambiado: ");
    for (int i = 0; i < tamano; i++) {
        printf("%c ", vector[i]);
    }
    printf("\n");

    // PUNTO 6
    int resultado_punto6 = contador_punto6(vector, tamano);
    printf("La cantidad de X es: %d\n ", resultado_punto6 );
    return 0;
}






