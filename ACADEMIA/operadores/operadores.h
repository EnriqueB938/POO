#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
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

    /*************************************************************
                    OPERADORES
    ************************************************************* */

    bool operator==(Persona per)
    {
        if (DNI_ == per.DNI_ && edad_ == per.edad_ && altura_ == per.altura_)
        {
            return true;
        }
        return false;
    }

    bool operator>(Persona per)
    {
        if (edad_ > per.edad_)
        {
            return true;
        }
        return false;
    }

    Persona &operator=(Persona per)
    {
        DNI_ = per.DNI_;
        edad_ = per.edad_;
        altura_ = per.altura_;

        return *this;
    }

    Persona &operator=(float altura)
    {
        altura_ = altura;
        return *this;
    }

    Persona &operator=(string dni)
    {
        DNI_ = dni;
        return *this;
    }

    int operator+(Persona per)
    {
        return edad_ + per.edad_;
    }

    int operator+(int edad)
    {
        return edad_ + edad;
    }

    Persona &operator+=(Persona per)
    {
        edad_ = edad_ + per.edad_;
        return *this;
    }

    friend int operator+(int edad, Persona per)
    {
        return edad + per.edad_;
    }

    Persona &operator++(int) // sufijo p++
    {
        edad_ += 1;
        return *this;
    }

    Persona &operator++(void) // prefijo ++p
    {
        edad_ += 1;
        return *this;
    }

    friend ostream &operator<<(ostream &flujo, Persona p) // cout << p;
    {
        flujo << "DNI: " << p.DNI_ << ", Edad: " << p.edad_ << endl;
        return flujo;
    }

    friend istream &operator>>(istream &flujo, Persona &p) // cin >> p;
    {
        cout << "Introduce el DNI: ";
        flujo >> p.DNI_;
        cout << "Introduce la edad: ";
        flujo >> p.edad_;
        return flujo;
    }
};

#endif