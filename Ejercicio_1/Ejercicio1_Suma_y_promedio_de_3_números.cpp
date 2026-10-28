/*
 * EJERCICIO 1: Suma y promedio de 3 números
 * AUTOR: URIEL JARAMILLO
 * FECHA: 26-10-2026
 *
 * ENUNCIADO:
 * Ingresar 3 números enteros y, usando funciones, leerlos, calcular la suma, calcular el promedio y mostrar los resultados.
 *
 * ENTRADA: tres números enteros
 * PROCESO: leerNumero() lee cada valor; calcularSuma() suma los tres; calcularPromedio() divide la suma entre 3
 * SALIDA: la suma y el promedio
 */
#include <iostream>
#include <string>
using namespace std;

// Prototipos de las funciones
int leerNumero(string mensaje);
int calcularSuma(int a, int b, int c);
double calcularPromedio(int suma);
void mostrarResultados(int suma, double promedio);
void mostrarMarca();

int main() {
    int num1, num2, num3, suma;
    double promedio;

    cout << "===== SUMA Y PROMEDIO DE 3 NUMEROS =====" << endl;
    num1 = leerNumero("Ingresa el primer numero: ");
    num2 = leerNumero("Ingresa el segundo numero: ");
    num3 = leerNumero("Ingresa el tercer numero: ");

    suma = calcularSuma(num1, num2, num3);
    promedio = calcularPromedio(suma);

    mostrarResultados(suma, promedio);
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

// Devuelve la suma de tres numeros
int calcularSuma(int a, int b, int c) {
    return a + b + c;
}

// Devuelve el promedio (se divide entre 3.0 para no perder los decimales)
double calcularPromedio(int suma) {
    return suma / 3.0;
}

// Muestra la suma y el promedio
void mostrarResultados(int suma, double promedio) {
    cout << endl;
    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
}

// Muestra la marca al final del programa
void mostrarMarca() {
    cout << endl;
    cout << "+-------------------+" << endl;
    cout << "|  >_ Urx.code()    |" << endl;
    cout << "+-------------------+" << endl;
}
