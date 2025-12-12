#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

// TAD
class Persona
{
private:
    string DNI_;
    int edad_;
    float altura_; // en metros

public:
    // Constructor vacío
    Persona()
    {
        DNI_ = "";
        edad_ = 0;
        altura_ = 0.0;
    }

    // Constructor parametrizado
    Persona(string DNI, int edad, float altura)
    {
        DNI_ = DNI;
        edad_ = edad;
        altura_ = altura;
    }

    // Observadores (getters)
    string getDNI() const
    {
        return DNI_;
    }

    int getEdad() const
    {
        return edad_;
    }

    void getAltura(float &altura) const
    {
        altura = altura_;
    }

    // Modificadores (setters)
    void setDNI(string DNI)
    {
        DNI_ = DNI;
    }

    bool setEdad(int edad)
    {
        if (edad >= 0 and edad <= 150)
        {
            edad_ = edad;
            return true;
        }
        return false;
    }

    void setAltura(float altura)
    {
        altura_ = altura;
    }

    // Métodos inventados
    bool mayorEdad() const;
};

#endif