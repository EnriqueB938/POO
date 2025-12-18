#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona
{
    private:
        string nombre_;
        string apellidos_;
        int edad_;
        float altura_;

    public:
        //Cosntructores
        Persona()
        {
            nombre_="";
            apellidos_="";
            edad_=0;
            altura_=0.0;
        }
        Persona(string nombre,string apellidos, int edad, float altura)
        {
            nombre_=nombre;
            apellidos_=apellidos;
            edad_=edad;
            altura_=altura;
        }
        Persona(Persona const & auxiliar)//Se pasa la direccion de memoria de auxiliar(&) para hacer el programa mas rapido. Y se pone const para que usando la funcion no se pueda modificar el contenido de auxiliar 
        {
            nombre_=auxiliar.nombre_;
            apellidos_=auxiliar.apellidos_;
            edad_=auxiliar.edad_;
            altura_=auxiliar.altura_;
        }

        //Observadores y modificadores

        //Observadores
        string getNombre()
        {
            return nombre_;
        }
        int getEdad()
        {
            return edad_;
        }
        string getApellidos()
        {
            return apellidos_;
        }
        float getAltura()
        {
            return altura_;
        }
        void getAltura(float &aux)//Por si lo piden por referencia 
        {
            aux=altura_;
        }
        //Modificadores
        void setNombre(string nombre)
        {
            nombre_=nombre;
        }
        void setApellidos(string apellidos)
        {
            apellidos_=apellidos;
        }
        bool setEdad(int edad)//Asi se meten restricciones
        {
            if(edad>=0 and edad<=150)
            {
                edad_=edad;
                return true;
            }
            return false;
        }
        bool setAltura(float altura)
        {
            if(altura>=0)
            {
                altura_=altura;
                return true;
            }
            return false;
        }

        //Otros
        string getDatos();
};


#endif