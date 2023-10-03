#include <stdio.h>


/*
    dentro de la función llamaría iniciaria una varaible que en un futuro almacenaría el valor de la posición
    del vector sobre la cual estoy parado. Luego, iniciaría un bucle for sobre el vector1 el cual tendría como
    letra indicadora del indice la letra "i" y dentro de este bucle, otro bucle que haría lo mismo pero con el vector2
    pero que la letra del indice de este vector sería la letra "j".
*/
void vectores_iguales_punto8(int vector1[], int vector2[], int tamaño1, int tamaño2){
    int sonIguales = 1;
    while(tamaño1 != tamaño2){
    sonIguales = 0;
    }
    for(int i=0; i<tamaño1; i++){
        if(vector1[i] != vector2[i]){
            sonIguales = 0;
            break;
        }
    }
    if(sonIguales == 0){
        printf("Son distintos");
    }
    else{
        printf("Son identicos");
    }
}


int main(void){
    int vector1[] = {1,2,3,4,5,6,7,8,9};
    int vector2[] = {1,2,3,4,5,6,7,8,9};
    int tamaño1 = 9;
    int tamaño2 = 9;
    vectores_iguales_punto8(vector1,vector2, tamaño1, tamaño2);
    return 0;


}