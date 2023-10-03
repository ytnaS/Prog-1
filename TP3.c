#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Escribir una función que reciba un arreglo de caracteres e indique si se encuentran ordenados de menor a mayor o no.

/*
    primero para esto debemos crear una función y un metodo main, la función la podemos llamar "Array_punto1" la cual
    recibiría , el main
    no recibe nada en esta ocasión, pero
*/

char Array_punto1(char *A[], int longitud){
    for(int i=0; i<longitud; i++){
        if(A[i]< A[i+1]){
            return 0;
        }
        }
    return 1;
    }

/*
    En una nueva función que podemos llamar "nuevo_vector_punto4" la cual recibe vectorA y vectorB,
    hacer un bucle para iterar sobre vectorA y dentro de ese bucle un bucle que recorra el vectorB,
    en ambas inicializo a "i=0" establezco que "i < tamaño" y hago que "i++", de esta forma, lo que busco es
    que cuando empiece en la primera posición de vectorA que sería vectorA[0] empiece a iterar sobre vectorB en
    todas las posiciones para que así compare toda las posiciones de vectorB a ver si alguna coincide con el valor
    de vectorA[0] de lo contrario sale de ese bucle y vuelve a entrar en el de vectorA avanzando a la siguiente posición
    y en el caso de que vectorA[i] == vectorB[i], vectorC[i] == vectorA[i] y luego haría que vectorC avance una posición
    para así llenar la siguiente posición del vector.
*/

void nuevo_vector_punto4(int vectorA[], int vectorB[], int vectorC[], int tamaño1, int tamaño2, int *tamaño3) {
    int contador = 0;
    for (int i = 0; i < tamaño1; i++) {
        for (int j = 0; j < tamaño2; j++) {
            if (vectorA[i] == vectorB[j]) {
                vectorC[contador] = vectorA[i];
                contador++;
                break;  // Rompe el bucle interno para evitar duplicados
            }
        }
    }
    *tamaño3 = contador;  // Almacena el tamaño real de vectorC
}

void legajos_punto5(int notas[], int promedio[], int largo1){

    for(int i = 0; i < largo1 -1; i++){
        int suma = 0;
        for(int j = 0; j <3; j++){
            suma =+ notas[i * 3 + j];
            }
        promedio[i] = suma / 3;
        }
    }


int main(){
    char *A[6] = {"c", "a", "j", "t", "p", "g"};
    int longitud = sizeof(A)/ sizeof(A[0]);
    int resultado = Array_punto1(A, longitud);

    if(resultado == 0) {
        printf("NO");
    }
    else {
        printf("SI");
    }
    printf("\n");


//  PUNTO 4
    srand(time(NULL));
    int vectorA[10];
    int tamaño1 = sizeof(vectorA)/ sizeof(vectorA[0]);

    printf("Vector A: ");
    for(int i=0; i<10; i++){
        vectorA[i] = rand()%10;
        printf("%d ", vectorA[i]);
    }
    printf("\n");

    int vectorB[10];
    int tamaño2 = sizeof(vectorB)/ sizeof(vectorB[0]);
    printf("Vector B: ");
    for(int i=0; i<10; i++){
        vectorB[i] = rand() % 10;
        printf("%d ", vectorB[i]);
    }
    printf("\n");

    int vectorC[10]= {};
    int tamaño3 = 0;
    nuevo_vector_punto4(vectorA,vectorB,vectorC,tamaño1,tamaño2,&tamaño3);

    printf("Vector C: ", vectorC);
    for(int i=0;i<tamaño3;i++){
        printf("%d ", vectorC[i]);
    }
    printf("\n");

//  PUNTO 5
    char *legajo[] = {"Luis", "Juan", "Martin", "Pedro", "Facundo"};
    int largo1 = sizeof(legajo) / sizeof(legajo[0]);

    int notas[] = {2,9,5,10,8,2,4,6,9,10,4,8,1,10,9};
    int largo2 = sizeof(notas) / sizeof(notas[0]);

    int promedio[largo1];

    legajos_punto5(notas, promedio, largo1);

    for(int i = 0; i< largo1; i++){
        printf("Legajo: %s, Promedio: %d\n", legajo[i], promedio[i]);
    }
    return 0;
}