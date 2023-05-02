//Prueba Progreso 1 Sebastian Cadena

// Construya un programa que reciba como dato de entrada un número entero positivo, n, y regrese como dato de salida la representación de este número en hexadecimal.


#include <stdio.h>//se incluye la biblioteca estándar de entrada/salida de C.


void decimalToHexadecimal(int num);//se declara el tipo de la función que se utilizará para convertir el número ingresado por el usuario a su representación hexadecimal.

int main() { //esta es la función principal del programa.
    int num; //se declara la variable num que será utilizada para almacenar el número ingresado por el usuario.
    printf("Ingrese un numero entero positivo: "); //se imprime un mensaje en la pantalla para indicar al usuario que debe ingresar un número.
    scanf("%d", &num); // se utiliza la función scanf() para leer el número ingresado por el usuario y almacenarlo en la variable num

    
    decimalToHexadecimal(num); //se utiliza  la función decimalToHexadecimal() para convertir el número ingresado a su representación hexadecimal.

    return 0; //se indica que el programa ha finalizado correctamente y se devuelve el valor 0.
}

// definición de la función para convertir un número a su representación hexadecimal
void decimalToHexadecimal(int num) { // se define la función 
    printf("La representacion hexadecimal de %d es: %X\n", num, num);// se imprime el número ingresado por el usuario en formato hexadecimal,
    
}