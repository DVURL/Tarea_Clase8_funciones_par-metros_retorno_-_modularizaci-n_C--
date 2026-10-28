/*
 * EJERCICIO 2: Número mayor entre dos valores
 * AUTOR: URIEL JARAMILLO
 * FECHA: 26-10-2026
 *
 * ENUNCIADO:
 * Ingresar dos números enteros y determinar cuál es el mayor. Si son iguales, también debe indicarlo. Usar funciones para leer, comparar y mostrar.
 *
 * ENTRADA: dos números enteros
 * PROCESO: leerNumero() lee cada valor; compararNumeros() devuelve 1 si el primero es mayor, 2 si el segundo es mayor y 0 si son iguales
 * SALIDA: cuál número es el mayor o que son iguales
 */
#include <iostream>
#include <string>
using namespace std;

// Prototipos de las funciones
int leerNumero(string mensaje);
int compararNumeros(int a, int b);
void mostrarResultado(int a, int b, int resultado);
void mostrarMarca();

int main() {
    int num1, num2, resultado;

    cout << "===== NUMERO MAYOR ENTRE DOS VALORES =====" << endl;
    num1 = leerNumero("Ingresa el primer numero: ");
    num2 = leerNumero("Ingresa el segundo numero: ");

    resultado = compararNumeros(num1, num2);

    mostrarResultado(num1, num2, resultado);
    mostrarMarca();

    return 0;
}

// Pide un numero entero y lo devuelve
int leerNumero(string mensaje) {
    int numero;
    cout << mensaje;
    cin >> numero;
    return numero;
}

// Devuelve 1 si a es mayor, 2 si b es mayor, 0 si son iguales
int compararNumeros(int a, int b) {
    if (a > b) {
        return 1;
    } else if (b > a) {
        return 2;
    } else {
        return 0;
    }
}

// Muestra el resultado de la comparacion
void mostrarResultado(int a, int b, int resultado) {
    cout << endl;
    if (resultado == 1) {
        cout << "El numero mayor es: " << a << endl;
    } else if (resultado == 2) {
        cout << "El numero mayor es: " << b << endl;
    } else {
        cout << "Los dos numeros son iguales" << endl;
    }
}

// Muestra la marca al final del programa
void mostrarMarca() {
    cout << endl;
    cout << "+-------------------+" << endl;
    cout << "|  >_ Urx.code()    |" << endl;
    cout << "+-------------------+" << endl;
}
