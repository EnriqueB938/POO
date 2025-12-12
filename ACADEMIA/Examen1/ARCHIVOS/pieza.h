#ifndef PIEZA_H
#define PIEZA_H

#include <string>
using namespace std;

class Pieza
{
    private:
        string nombre_;
        int codigo_;
        int cantidad_;
        double precio_;
    public:

    Pieza()
    {
        nombre_ = "Sin Nombre";
        codigo_ = 0;
        cantidad_ = 0;
        precio_ = 0.0;
    }

    Pieza(int codigo, string nombre, double precio = 0.0, int cantidad = 0)
    {
        codigo_ = codigo;
        nombre_ = nombre;
        precio_ = precio;
        cantidad_ = cantidad;
    }

    Pieza(const Pieza &p)
    {
        codigo_ = p.codigo_;
        nombre_ = p.nombre_;
        precio_ = p.precio_;
        cantidad_ = p.cantidad_;
    }

    // Observadores (getters)
    void getNombre(string &nombre) 
    {
        nombre = nombre_;
    }

    int getCodigo() 
    {
        return codigo_;
    }

    int getCantidad() 
    {
        return cantidad_;
    }

    double getPrecio() 
    {
        return precio_;
    }

    // Modificadores (setters)
    void setNombre(string nombre)
    {
        nombre_ = nombre;
    }

    void setCodigo(int codigo)
    {
        codigo_ = codigo;
    }

    void setCantidad(int cantidad)
    {
        cantidad_ = cantidad;
    }

    void setPrecio(double precio)
    {
        precio_ = precio;
    }

    string getPieza()
    {
        return "Hay " + to_string(cantidad_) + " unidades de la pieza " + nombre_ + ".";
    }
    
};


#endif