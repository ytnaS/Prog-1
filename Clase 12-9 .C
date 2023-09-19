
/*
mostrar(*M, CEU)
recibe la matriz y Cantidad de elementos utiles y la recorre con 2 ciclos anidados y
y la muestra elemento x elemento 
La matríz va por referencia y CEU va por valor

CARGAR_AZAR(*M, CEU)
recorre la matriz con 2 ciclos anidados y carga cada elemento usando la función random
para generar los elementos 

Intercambia()
recibe la matriz, la fila1 y la columna1
guarda el valor de fila1 y la columna1 en una variable temporal 
y le asigna el valor de fila2 y columna2 a la fila1 y la columna1
y luego asigna el valor de fila 1 columna 1 a fila2 y columna2

Main()
define la matriz(tamaño), CEU
llama a cargar_azar()
llama a mostrar()
realiza 2 ciclos anidados (I;J) y en cada vuelta cada ciclo llamar a intercambia
pasandole fila y columna porque para el otro elemento es columna fila y llamar a mostrar 
en cada vuelta
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int mostrar(int M[][20], int fila, int columna){
    int i, j;
    for(i=0; i<fila; i++){
        printf("\n");
        for(j = 0; j < columna; j++){
            printf("%i\t", M[i][j]);
        }
    }
    printf("\n");
}
 int cargar_azar(int M[][20], int fila, int columna){
    int i, j;
    for(i=0; i<fila; i++){
        printf("\n");
        for(j = 0; j < columna; j++){
            M[i][j]= rand()% 50;
        }
    }
 }

int intercambia(int M[][20], int fila, int columna){ 
    int auxiliar = M[fila][columna] ;
    M[fila][columna] = M[columna][fila] ;
    M[columna][fila] = auxiliar;
}

int main(){
    int M[20][20];
    int CEUfila = 3;
    int CEUcolumna = 3;
    cargar_azar(M, CEUfila, CEUcolumna);
    mostrar(M, CEUfila, CEUcolumna);
    int i,j;
    for(i=0;i<CEUfila;i++){
        for(j=i;j<CEUcolumna; j++){
            intercambia(M, i, j);
        }
        mostrar(M, CEUfila, CEUcolumna);

    }
}



 /*
 Escribir un script que verifique que una matriz cuadrada es una matriz diagonal dominante
 Una matriz diagonal dominante es aquella en que cada valor absoluto de un elemento de 
 la diagonal principal es mayor que la suma de los valores absolutos del resto de 
 los elementos de su fila mas la suma de los valores absolutos del resto de os elementos
 de su columna*/
