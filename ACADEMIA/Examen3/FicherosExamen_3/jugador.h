#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
using namespace std;
#include "persona.h"

class Jugador : public Persona
{
    private:
    string puesto_;

    public:

    Jugador(string nombre, string puesto, string direccion = "XX", string DNI = "XX")
    {
        if(puesto == "base" || puesto == "alero" || puesto == "escolta" || puesto == "pivot" || puesto == "ala-pivot")
        {
            puesto_ = puesto;
        }
        puesto_ = "Banquillo";
    }

    Jugador(const Jugador &p)
    {
        puesto_ = p.puesto_;
    }

    string getPuesto()
    {
        return puesto_;
    }

    bool setPuesto(string puesto)
    {
        if(puesto == "base" || puesto == "alero" || puesto == "escolta" || puesto == "pivot" || puesto == "ala-pivot")
        {
            puesto_ = puesto;
            return true;
        }
        return false;
    }

    Jugador &operator=(Jugador per)
    {
        puesto_ = per.puesto_;

        return *this;
    }

    


};

#endif