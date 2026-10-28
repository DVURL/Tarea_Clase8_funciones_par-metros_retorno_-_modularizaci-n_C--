/*
 * EJERCICIO 4: Intercambio de dos números
 * AUTOR: URIEL JARAMILLO
 * FECHA: 27-10-2026
 *
 * ENUNCIADO:
 * Ingresar dos números enteros e intercambiar sus valores usando una función. Mostrar los valores antes y después del intercambio.
 *
 * ENTRADA: dos números enteros
 * PROCESO: leerNumero() lee cada valor; intercambiar() recibe los dos números por referencia (&) y les cambia el valor
 * SALIDA: los valores antes y después del intercambio
 */
#include <iostream>
#include <string>
using namespace std;

// Prototipos de las funciones
int leerNumero(string mensaje);
void intercambiar(int &a, int &b);
void mostrarValores(string titulo, int a, int b);
void mostrarMarca();

int main() {
    int num1, num2;

    cout << "===== INTERCAMBIO DE DOS NUMEROS =====" << endl;
    num1 = leerNumero("Ingresa el primer numero: ");
    num2 = leerNumero("Ingresa el segundo numero: ");

    mostrarValores("Antes del intercambio", num1, num2);

    intercambiar(num1, num2);

    mostrarValores("Despues del intercambio", num1, num2);
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

// Intercambia los valores. Se usa & (referencia) porque necesitamos
// modificar las variables originales del main
void intercambiar(int &a, int &b) {
    int auxiliar;
    auxiliar = a;
    a = b;
    b = auxiliar;
}

// Muestra los dos valores con un titulo
void mostrarValores(string titulo, int a, int b) {
    cout << endl;
    cout << titulo << ":" << endl;
    cout << "Primer numero: " << a << endl;
    cout << "Segundo numero: " << b << endl;
}

// Muestra la marca al final del programa
void mostrarMarca() {
    cout << endl;
    cout << "+-------------------+" << endl;
    cout << "|  >_ Urx.code()    |" << endl;
    cout << "+-------------------+" << endl;
}
