#include <iostream>
#include <string>
#include "alumno.h"
#include <fstream>
#include <vector>
using namespace std;

vector<Alumno> obtenerAlumnos(string nombreFichero)
{
    vector<Alumno> vector;
    ifstream fich(nombreFichero);
    if (fich.is_open())
    {
        string datoLeido;
        Alumno a;
        while (getline(fich, datoLeido, ' '))
        {
            a.setDNI(datoLeido);
            getline(fich, datoLeido, ';');
            a.setEdad(stoi(datoLeido));
            getline(fich, datoLeido, '\n');
            a.setAltura(stof(datoLeido));
            getline(fich, datoLeido, ',');
            a.setNotaMedia(stof(datoLeido));
            getline(fich, datoLeido, '\n');
            a.setCurso(stoi(datoLeido));

            vector.push_back(a);
        }

        fich.close();
    }

    return vector;
}

void escribirAlumnos(vector<Alumno> alumnos, string nombreFichero)
{
    ofstream fich(nombreFichero);
    if (fich.is_open())
    {
        for (auto it = alumnos.begin(); it != alumnos.end(); it++)
        {
            float altura;
            it->getAltura(altura);

            fich << it->getDNI() << " " << it->getEdad() << " " << altura << " " << it->getNotaMedia() << " " << it->getCurso() << endl;
        }

        fich.close();
    }
}

int main()
{
    vector<Alumno> alumnos = obtenerAlumnos("alumnos.txt");
    escribirAlumnos(alumnos, "alumnos2.txt");
    return 0;
}