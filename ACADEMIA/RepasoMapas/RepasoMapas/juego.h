#ifndef JUEGO_H
#define JUEGO_H

#include <string>
#include <map>
#include <iostream>
using namespace std;


class Juego
{
    private:
    string nombre_;
    int nMax_;
    map<string, int> puntuacion;

    public:

    Juego(string nombre, int nMax)
    {
        nombre_ = nombre;
        nMax_ = nMax;
    }

    bool addJugador(string DNI)
    {
        if(puntuacion.size() == nMax_)
        {
            return false;
        }

        for(auto it = puntuacion.begin(); it != puntuacion.end(); it++)
        {
            if(it->first == DNI)
            {
                return false;
            } 
        }

        puntuacion[DNI] = 0;
        return true;
    }

    bool incrementarPuntuacion(string DNI, int puntos)
    {
        for(auto it = puntuacion.begin(); it != puntuacion.end(); it++)
        {
            if(it->first == DNI)
            {
                it->second += puntos;
                return true;
            } 
        }
        return false;
    }

    int getPuntuacion(string DNI)
    {
        for(auto it = puntuacion.begin(); it != puntuacion.end(); it++)
        {
            if(it->first == DNI)
            {
                return it->second;
            } 
        }
        return -1;
    }

    int size()
    {
        return puntuacion.size();
    }

    string getGanador()
    {
        if(puntuacion.empty())
        {
            return "No hay jugadores registrados";
        }

        auto puntuacionMayor = puntuacion.begin();
        for(auto it = puntuacion.begin(); it != puntuacion.end(); it++)
        {
            if(it-> second > puntuacionMayor->second)
            {
                puntuacionMayor = it;
            } 
        }
        return puntuacionMayor->first;
    }

    string getNombre()
    {
        return nombre_;
    }

    int getMaxJugadores_()
    {
        return nMax_;
    }

    string toString()
    {
        string cadena = "Juego: " + nombre_ + ", Jugadores:";
        for(auto it = puntuacion.begin(); it != puntuacion.end(); it++)
        {
            cadena += " [" + it->first + ", " + to_string(it->second) + "]";
        }
        return cadena;
    }
};

#endif