#ifndef CPIEZA_H
#define CPIEZA_H

#include <list>
#include <fstream>
#include "pieza.h"
using namespace std;

class CPieza
{
private:
    list<Pieza> lista_;

public:
    CPieza()
    {
        lista_.clear();
    }

    CPieza(const CPieza &cp)
    {
        for (auto it = cp.lista_.begin(); it != cp.lista_.end(); it++)
        {
            lista_.push_back(*it);
        }
    }

    list<Pieza> get()
    {
        return lista_;
    }

    int size()
    {
        return lista_.size();
    }

    bool addPieza(Pieza p)
    {
        for (auto it = lista_.begin(); it != lista_.end(); it++)
        {
            if (it->getCodigo() == p.getCodigo())
            {
                return false;
            }
        }

        lista_.push_back(p);
        return true;
    }

    bool deletePieza(Pieza p)
    {
        for (auto it = lista_.begin(); it != lista_.end(); it++)
        {
            if (it->getCodigo() == p.getCodigo())
            {
                lista_.erase(it);
                return true;
            }
        }
        return false;
    }

    void write(string nombreFichero)
    {
        ofstream fich(nombreFichero);

        if (fich.is_open())
        {
            for (auto it = lista_.begin(); it != lista_.end(); it++)
            {
                string nombre;
                it->getNombre(nombre);

                fich << it->getCodigo() << " " << nombre << endl;
                fich << it->getCantidad() << " " << it->getPrecio() << endl;
            }

            fich.close();
        }
    }
};

#endif