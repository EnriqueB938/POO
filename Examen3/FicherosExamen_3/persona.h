#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona
{
    private:

    string nombre_;
    string direccion_;
    string DNI_;

    public:

    Persona(string nombre, string direccion = "XX", string DNI = "XX")
    {
        nombre_ = nombre;
        direccion_ = direccion;
        DNI_ = DNI;
    }

    Persona(const Persona &p)
    {
        nombre_ = p.nombre_;
        direccion_ = p.direccion_;
        DNI_ = p.DNI_;
    }

    string getNombre()
    {
        return nombre_;
    }

    string getDireccion()
    {
        return direccion_;
    }

    string getDNI()
    {
        return DNI_;
    }

    bool setNombre(string nombre)
    {
        if(nombre == "")
        {
            return false;
        }
        nombre_ = nombre;
        return true;
    }

    bool setDireccion(string direccion)
    {
        if(direccion == "")
        {
            return false;
        }
        direccion_ = direccion;
        return true;
    }

    bool setDNI(string DNI)
    {
        if(DNI == "")
        {
            return false;
        }
        DNI_ = DNI;
        return true;
    }

    void getDatos(string &datos)
    {
        datos = nombre_ + " con DNI " + DNI_ + " vive en " + direccion_;
    }
};


#endif