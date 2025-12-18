#ifndef AULA_H
#define AULA_H

#include "alumno.h"
#include <vector>

class aula
{
private:
    string nombre_;
    int maAlumnos_;
    Persona profesor_;
    vector<Alumno> alumnos_;
public:
    Aula(string nombre, int maxAlumnos)
    {
        nombre_ = nombre;
        maxAlumnos_ = maxAlumnos;
    }

    void asignarProfesor(Persona profesorNuevo)
    {
        profesor_ = profesorNuevo;
    }

    bool buscarAlumno(string dni)
    {
        for(auto it= alumnos_.begin(); it!=alumnos_.end(); it++)
        {
            if((*it).getDNI() == dni)
            {
                return true;
            }
        }

        return false;
    }

    bool nuevoAlumno(Alumno a)
    {
        if(alumnos_.size() == maxAlumnos_)
        {
            return false;
        }

        if(buscarAlumno(a.getDNI()) == true)
        {
            return false;
        }

        alumnos_.push_back(a);
        return true;
    }

    int aforo()
    {
        return alumnos_.size();
    }

    bool modificarNotaMedia(string dni, float notaNueva)
    {
        for(auto it= alumnos_.begin(); it!=alumnos_.end(); it++)
        {
            if((*it).gentDNI() == dni)
            {
                (*it).setNotaMedia(notaNueva);
                return true;
            }
        }
        return false;
    }

};


#endif