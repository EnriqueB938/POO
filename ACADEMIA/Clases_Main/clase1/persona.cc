#include "persona.h"

bool Persona::mayorEdad() const
{
    if (edad_ >= 18)
    {
        return true;
    }
    return false;
}