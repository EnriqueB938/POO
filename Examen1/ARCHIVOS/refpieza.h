#ifndef REFPIEZA_H
#define REFPIEZA_H

#include <string>
using namespace std;
#include "pieza.h"


class RefPieza : public Pieza
{
    private:
        string codigoReferencia_;

    public:

    RefPieza(string codigoReferencia_, int codigo, string nombre, int cantidad = 0, double precio = 0) : Pieza(nombre, codigo, cantidad, precio)
    {
        codigoReferencia_ = codigoReferencia;
    }

    RefPieza(const RefPieza &p) 
    {
        codigoReferencia_ = p.codigoReferencia_;
    }

    //SETTERS Y GETTERS

    string getCodigoReferencia()
    {
        return codigoReferencia_;
    }

    void setCodigoReferencia(string codigoReferencia)
    {
        codigoReferencia_ = codigoReferencia;
    }

};








#endif