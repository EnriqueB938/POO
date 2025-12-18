#include "Persona.h"
#include <vector>
#include <algorithm>

bool alfabeticamenteNombre(Persona a, Persona b)
{
    return a.getNombre() < b.getNombre();
}

bool ordenaAlturaDesc(Persona a, Persona b)
{
    return a.getAltura() > b.getAltura();
}

bool alfabeticamenteNombreCompleto(Persona a, Persona b)
{
    string nombreCompleto1 = a.getNombre() + " " + a.getApellidos();
    string nombreCompleto2 = b.getNombre() + " " + b.getApellidos();
    return nombreCompleto1 < nombreCompleto2;
}

void mysort(vector<Persona> &v)
{
    sort(v.begin(), v.end(), alfabeticamenteNombreCompleto);
}