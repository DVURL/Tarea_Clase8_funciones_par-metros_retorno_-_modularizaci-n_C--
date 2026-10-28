/*
 * EJERCICIO 3: Área de un rectángulo
 * AUTOR: URIEL JARAMILLO
 * FECHA: 26-10-2026
 *
 * ENUNCIADO:
 * Ingresar la base y la altura de un rectángulo y calcular su área usando funciones. Debe trabajar con valores reales (decimales).
 *
 * ENTRADA: base y altura (reales, no negativas)
 * PROCESO: leerValor() lee cada dato; calcularArea() multiplica base por altura
 * SALIDA: el área del rectángulo
 */
#include <iostream>
#include <string>
using namespace std;

// Prototipos de las funciones
double leerValor(string mensaje);
double calcularArea(double base, double altura);
void mostrarArea(double area);
void mostrarMarca();

int main() {
    double base, altura, area;

    cout << "===== AREA DE UN RECTANGULO =====" << endl;
    base = leerValor("Ingresa la base: ");
    altura = leerValor("Ingresa la altura: ");

    if (base < 0 || altura < 0) {
        cout << endl << "DATOS INVALIDOS" << endl;
    } else {
        area = calcularArea(base, altura);
        mostrarArea(area);
    }

    mostrarMarca();

    return 0;
}

// Pide un valor real y lo devuelve
double leerValor(string mensaje) {
    double valor;
    cout << mensaje;
    cin >> valor;
    return valor;
}

// Devuelve el area del rectangulo
double calcularArea(double base, double altura) {
    return base * altura;
}

// Muestra el area
void mostrarArea(double area) {
    cout << endl;
    cout << "El area es: " << area << endl;
}

// Muestra la marca al final del programa
void mostrarMarca() {
    cout << endl;
    cout << "+-------------------+" << endl;
    cout << "|  >_ Urx.code()    |" << endl;
    cout << "+-------------------+" << endl;
}
