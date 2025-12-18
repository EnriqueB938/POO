#include <iostream>

#include "alumno.h"

#include "persona.h"

using namespace std;

int main()
{
    Persona p1;
    Persona p2("1234A", 48, 1.82);

    cout << "DNI de p2 es: " << p2.getDNI() << endl;

    // Prueba de los observadores
    int edad = p2.getEdad();
    float altura;
    p2.getAltura(altura);

    // Prueba de un modificador
    cout << "Introduce la nueva edad de p2: ";
    cin >> edad;
    p2.setEdad(edad);

    /************ alumno **********/
    Alumno a1;
    Alumno a2("44444R", 20, 1.74, 3, 7.2);
    cout << "El DNI del alumno a1 es " << a2.getDNI() << " y la nota media es " << a2.getNotaMedia() << endl;

    return 0;
}