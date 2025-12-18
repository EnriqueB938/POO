#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include <ostream>
using namespace std;
#include "persona.h"

class Jugador : public Persona
{
    private:
    string puesto_;

    public:

    Jugador(string nombre, string puesto, string direccion = "XX", string DNI = "XX") : Persona(nombre, direccion, DNI)
    {
        if(puesto == "base" || puesto == "alero" || puesto == "escolta" || puesto == "pivot" || puesto == "ala-pivot")
        {
            puesto_ = puesto;
        }
        else
        {
            puesto_ = "Ninguno";
        }

    }

    Jugador(const Jugador &p) : Persona(p)
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
        setDireccion(per.getDireccion());
        setDNI(per.getDNI());
        setNombre(per.getNombre());

        return *this;
    }

    friend ostream &operator<<(ostream &flujo, Jugador p) // cout << p;
    {
        flujo << p.getNombre() << ";" << p.getDireccion() << ";" << p.getDNI() << ";" << p.puesto_ << endl;
        return flujo;
    }

};

#endif