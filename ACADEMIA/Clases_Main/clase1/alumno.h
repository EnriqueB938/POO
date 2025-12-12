#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"

class Alumno : public Persona
{
private:
    int curso_;
    float notaMedia_;

public:
    Alumno() : Persona()
    {
        curso_ = 0;
        notaMedia_ = 0.0;
    }

    Alumno(string DNI, float notaMedia, int edad = 0, float altura = 0.0, int curso = 1) : Persona(DNI, edad, altura)
    {
        curso_ = curso;
        notaMedia_ = notaMedia;
    }

    int getCurso()
    {
        return curso_;
    }

    float getNotaMedia()
    {
        return notaMedia_;
    }

    void setCurso(int curso)
    {
        curso_ = curso;
    }

    void setNotaMedia(float nm)
    {
        notaMedia_ = nm;
    }


    string getinfo()
    {
        return "El alumno con DNI" + getDNI() + "ha sacado la nota media :" + to_string((int)getNotaMedia()) + ".";
    }
};

#endif