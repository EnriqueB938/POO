#include "Persona.h"

string Persona::getDatos()
{
    return nombre_ + ";" + apellidos_ + ";" + to_string(edad_) + ";" + to_string(altura_);
}