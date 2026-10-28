/*
 * EJERCICIO 5: Contador actualizado con referencia
 * AUTOR: URIEL JARAMILLO
 * FECHA: 27-10-2026
 *
 * ENUNCIADO:
 * Pedir un número entero positivo n e incrementar un contador desde 0 hasta n, usando una función que actualice el valor del contador (paso por referencia). Mostrar el contador en cada incremento.
 *
 * ENTRADA: n (entero positivo)
 * PROCESO: se valida n; mientras el contador sea menor que n, incrementarContador() le suma 1 usando referencia (&)
 * SALIDA: el valor del contador en cada incremento
 */
#include <iostream>
#include <string>
using namespace std;

// Prototipos de las funciones
int leerNumero(string mensaje);
void incrementarContador(int &contador);
void mostrarMarca();

int main() {
    int n;
    int contador = 0;

    cout << "===== CONTADOR CON REFERENCIA =====" << endl;
    n = leerNumero("Ingresa un numero entero positivo: ");

    if (n <= 0) {
        cout << endl << "ERROR: el numero debe ser mayor que 0" << endl;
    } else {
        cout << endl << "Contador inicial: " << contador << endl;

        while (contador < n) {
            incrementarContador(contador);
            cout << "Contador: " << contador << endl;
        }
    }

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

// Suma 1 al contador. Se usa & (referencia) para cambiar la variable del main
void incrementarContador(int &contador) {
    contador = contador + 1;
}

// Muestra la marca al final del programa
void mostrarMarca() {
    cout << endl;
    cout << "+-------------------+" << endl;
    cout << "|  >_ Urx.code()    |" << endl;
    cout << "+-------------------+" << endl;
}
