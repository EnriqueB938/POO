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

    Alumno(string DNI, int edad, float altura, int curso, float notaMedia) : Persona(DNI, edad, altura)
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
};

#endif