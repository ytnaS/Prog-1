// crear un vector de 500 elementos de forma aleatoria
// pero que estè ordenado 
#include <stdlib.h>
#include <stdio.h>
void llenar_vector(int Vector[], int tamano){
    int x = 0;
    for(int i = 0; i < tamano ; i++){
        x = x + rand()%100;
        Vector[i] = x;
    }
}

void mostrar_vector(int Vector[], int tamano){
    for(int i = 0; i < tamano; i++){
        printf("%i " , Vector[i]);
    }
}

void buscar_vector(int Vector[], int tamano){
    int x = 7;
    int i = 0;
    int pini = 0;
    int pfin = 999;
    int pmed = (pini + pfin) / 2;
    int in = 0;
    while(Vector[pmed]!= x & pini < pfin){
        if (x > Vector[pmed]){
            pini = pmed +1;
        }
        else {
            pfin = pmed -1;
            pmed = (pini + pfin);
            i++;
        }
        
    }
}
int main(){
    int tamano = 5;
    int Vector[tamano];
    llenar_vector(Vector, tamano);
    mostrar_vector(Vector, tamano);
    return 0;
}