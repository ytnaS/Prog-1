#include <stdio.h>
#include <stdlib.h>
// esta función lo que hace es recibir una palabra a traves de la función *palabra y luego en un bucle "for"
// iguala "i" a 0 para que tenga el mismo valor que el del indice de cada letra de la palabra, luego
// el valor de "i" tiene que aumentar en cada itercación, definimos una variable que se llame "letra" que tiene
// ser igual a la variable *palabra en la posición "i"
// y así tras cada iteración imprimimos la PALABRA "letra", el valor de "i" y la FUNCIÓN "letra"

void palabras_punto5(char *palabra) {
    for (int i = 0; palabra[i] != '\0'; i++) {
        char letra = palabra[i];
        printf("Letra %d: %c\n", i, letra);
    }
}

/*
   Realizaría una función con 3 cadenas "*cadena1", "*cadena2" y "*cadena3", luego haría una comparación
   entre las 3 cadenas a través de un if y devolver el numero correspondiente según el resultado de la comparación
*/

void cadenas_punto6(char *cadena1, char *cadena2, char *cadena3){
    int resultado;
    char suma_de_cadena[4];
    suma_de_cadena[0] = cadena1[0];
    suma_de_cadena[1] = cadena2[0];
    suma_de_cadena[2] = cadena3[0];
    suma_de_cadena[3] = '\0';

    if(cadena1 == cadena2 && cadena3 == cadena1){
        resultado = 3;
    }
    else if(cadena1 == cadena2 && cadena2 != cadena3){
        resultado = 0;
    }
    else if(cadena2 == cadena3 && cadena3 != cadena1){
        resultado = 2;
    }
    else {
        resultado = 4;
    }
    printf("%s\n""%d\n",  suma_de_cadena, resultado);
}

/*
   Realizaría una función que primero tenga dos variables para almacenar cada nota del parcial "parcial1" y "parcial2",
   luego haría una variable que almacene el valor promedio de ambas notas de los parciales, para así con un "if"
   verificar la situación del alumno y poder devolverla en pantalla.
*/

void promedio_punto7(int parcial1, int parcial2) {
    float promedio = (parcial1 + parcial2) / 2.0;
    char *resultado; // Debe ser char * para almacenar una cadena

    if (parcial1 >= 4 && parcial2 >= 4 && promedio >= 7) {
        resultado = "Promovido";
    }
    else if (parcial1 >= 4 || parcial2 >= 4) {
        resultado = "Regular";
    }
    else {
        resultado = "Libre";
    }

    printf("Promedio: %.2f\nResultado: %s\n", promedio, resultado);
}

/*
   Primero lo que haría es dentro de la función nueva que creamos una variable para determinar la cantidad de alumnos
   en el curso, así luego poder generar el promedio con la variable promedio anteriormente usada.
   luego haría un bucle for que vaya iterando con las notas de los alumnos y determinar su situación acadecima para
   despues imprimirlo con printf.
*/

void curso_punto8(int n) {
    for (int i = 0; i < n; i++) {
        int nota1 = rand() % 11; // Generar una nota aleatoria entre 0 y 10
        int nota2 = rand() % 11;

        printf("Alumno %d:\n", i + 1);
        promedio_punto7(nota1, nota2); // Llamar a la función con las notas aleatorias
        printf("\n");
    }
}



/*
   - variable para la maquina
   - función switch
   - while
   - resultado
   Primero crearía una variable para la maquina.
   Luego haría un while para validar que el valor ingresado en la variable maquina pertenezca al rango
   de valores del switch, de lo contrario cumpliría la condición 5.
   Y por último utilizaria la función switch para ver que tipo de bomba es necesario para la maquina
*/

void bomba_punto9(int maquina) {
    char *resultado;

    if (maquina < 0 || maquina > 4) {
        resultado = "No existe un valor valido para el tipo de bomba";
    } else {
        switch (maquina) {
            case 0:
                resultado = "No hay establecido un valor definido para el tipo de bomba";
                break;
            case 1:
                resultado = "La bomba es una bomba de agua";
                break;
            case 2:
                resultado = "La bomba es una bomba de gasolina";
                break;
            case 3:
                resultado = "La bomba es una bomba de hormigón";
                break;
            case 4:
                resultado = "La bomba es una bomba de pasta alimenticia";
                break;
            default:
                resultado = "Valor de bomba no reconocido";
                break;
        }
        printf("%s\n", resultado);
    }
}

/*
  -while
  -rand()
*/
int bucle_punto10() {
    srand(time(NULL));
    while (1) {
        int numero_aleatorio = rand() % 11;
        printf("Numero aleatorio: %d\n", numero_aleatorio);
        bomba_punto9(numero_aleatorio); // Llama a la función bomba_punto9 con el número aleatorio

        if (numero_aleatorio == 9) {
            break; // Salir del ciclo cuando el número sea 9
        }
    }

    return 0;
}
int main() {
//  VARIABLE PUNTO 5
    char *palabra = "Sencillo";

//  VARIABLES PUNTO 6
    char *cadena1 = "Palabra1";
    char *cadena2 = "Frase";
    char *cadena3 = "Oracion";

//  VARIABLES PUNTO 7
    int parcial1 = 10;
    int parcial2 = 4;

// VARIABLES PUNTO 8
    int numAlumnos = 10;

// VARIABLES PUNTO 9
    int maquina = 6;

// VARIABLES PUNTO 10


// FUNCIONES DEL PROGRAMA
    palabras_punto5(palabra);
    cadenas_punto6(cadena1, cadena2, cadena3);
    promedio_punto7(parcial1, parcial2);
    curso_punto8(numAlumnos);
    bomba_punto9(maquina);
    bucle_punto10();
    return 0;
}