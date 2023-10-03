#include <stdio.h>
#include <stdlib.h>

/*
   Esta función va a recibir dos numeros a través de dos variables "num1" y "num2,
   almacenarlos en una variable llamada "suma" para realizar la operación de sumarlos
   y retornar "suma"
*/
int sumadenumeros(int num1, int num2){
    int suma = num1 + num2;
    return suma;
}

/*
   Esta función va a recibir dos numeros a través de variables "num1" y "num2",
   almacenarlos en una variable llamada "resta" para realizar la operación de restarlos
   y retornar "resta"
*/
int restadenumeros(int num1, int num2){
    int resta = num1 - num2;
    return resta;
}

/*
  Esta funcíón recibe dos numeros a través de las variables "num1" and "num2",
  almacenarlos en una variable llamada "producto" para realizar la operación de multiplicarlos
  y retornar "producto"
*/
int productodenumeros(int num1, int num2){
    int producto = num1 * num2;
    return producto;
}

/*
   Esta es la función main, la encargada de pasar los valores de "num1" y "num2",
   y ejecutar las funciones:
   1) "sumadenumeros" a través de una función nueva llamada "resultadosuma"
   2) "restadenumeros" a través de una función nueva llamada "resultadoresta"
   3) "productodenumeros" a través de una función nueva llamada "resultadoproducto"
   e imprimirlos a través de un printf y luego retornar "0"
*/
int main(){
    int num1 = 4;
    int num2 = 3;
    int resultadosuma = sumadenumeros(num1, num2);
    int resultadoresta = restadenumeros(num1, num2);
    int resultadoproducto = productodenumeros(num1, num2);
    printf("%d\n" "%d\n" "%d\n" , resultadosuma, resultadoresta, resultadoproducto);
    return 0;
}
