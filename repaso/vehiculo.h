#ifndef VEHICULO_H
#define VEHICULO_H

using namespace std;
#include <string>

class Vehiculo
{
    private:

    string tipo_;
    double precio_;
    string propietario_;

    public: 

    Vehiculo(string tipo, double precio = 0.0, string propietario = "Desconocido")
    {
        tipo_ = tipo;
        precio_ = precio;
        propietario_ = propietario;
    }

    string getTipo()
    {
        return tipo_;
    }

    double getPrecio()
    {
        return precio_;
    }

    string getPropietario()
    {
        return propietario_;
    }

    void setTipo(string tipo)
    {
        tipo_ = tipo;
    }

    bool setPrecio(double precio)
    {
        if(precio < 0.0)
        {
            return false;
        } 
        else 
        {
            precio_ = precio;
            return true;
        }
    }

    void setPropietario(string propietario)
    {
        propietario_ = propietario;
    }
}


class Coche : public Vehiculo
{
    private:

    int cilindrada_;
    string matricula_;

    public: 

    Coche(string matricula, string tipo,  int cilindrada = 1500, double precio = 0.0, string propietario = "Desconocido" ) : Vehiculo(tipo, precio, propietario)
    {
        matricula_ = matricula;
        cilindrada_ = cilindrada;
    }

    int getCilindrada()
    {
        return cilindrada_;
    }

    void getMatricula(string &matricula)
    {
        matricula = matricula_;
    }

    bool setMatricula(string matricula)
    {
        if(matricula == "")
        {
            return false;
        }
        matricula_ = matricula;
        return true;
    }

    void setCilindrada(int cilindrada)
    {
        cilindrada_ = cilindrada;
    }


}

#endif