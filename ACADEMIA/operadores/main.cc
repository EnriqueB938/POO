#include "persona.h"

int main()
{
    Persona p1("1234", 12, 1.40);
    Persona p2, p3;

    // Operadores de comparacion:  == != > < >= <=
    // Operadores de asignacion:  =
    // Operadores aritméticos: + - * / ++ --
    // Operadores auxiliares: []
    // Operador de flujo de salida/entrada: << >> (cout/cin)

    if (p1 == p2)
    {
    }

    if (p1 > p2)
    {
    }

    p2 = p1;

    p1 = 5;
    p1 = 1.70;
    p1 = "67325142R";

    p1 = p2 + p3;

    p1 += p2;

    p1 = p2 + 5;

    int n = 5;
    p1 = n + p2;

    p1++;
    ++p1;

    // p1--;
    // --p1;

    cout << p1 << endl;

    cout << "Introduce los datos de la persona: " << endl;
    cin >> p1;

    return 0;
}