#ifndef TALLER_H
#define TALLER_H

using namespace std;
#include <string>
#include <list>
#include "vehiculo.h"


class Taller
{
private:
    string nombre_;
    int capacidadMaxima_;
    list<Coche> coches_;

public:
    Taller(string nombre, int capacidadMaxima)
    {
        nombre_ = nombre;
        capacidadMaxima_ = capacidadMaxima;
    }

    int registrarEntrada(Coche c)
    {

        if(coches_.size() == capacidadMaxima_)
        {
            return -1;
        }

        string matriculaAbuscar;
        c.getMatricula(matriculaAbuscar);

        for(auto it = coches_.begin(); it != coches_.end(); i++)
        {
            string matricula;
            it->getMatricula(matricula);
            if(matricula == matriculaAbuscar)
            {
                return -1;
            }
        }

        coches_.push_back(c);
        return coches_.size();
    }

    int size()
    {
        return coches_.size();
    }

    bool registrarSalida(string matricula)
    {
        for(auto it = coches_.begin(); it != coches_.end(); i++)
        {
            string matricula;
            it->getMatricula(matricula);

            if(matricula == matricula)
            {
                it->erase(it);
                return true;
            }
        }

        return false;
    }

    string getInfo()
    {
        // El taller Moreno Motor tiene pendiente de arreglar 4 vehículos de los 10 máximo que puede reparar
        return "El taller " + nombre_ + "tiene pendiente de arreglar " +  + "de los " + to_string(capacidadMaxima_) + "máximo que puede reparar";
    }
}

#endif