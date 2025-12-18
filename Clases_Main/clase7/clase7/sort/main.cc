
#include <iostream>
#include <vector>
#include "sort.h"
#include "Persona.h"
using namespace std;

int main()
{
    Persona p1("Angel", "Rguez Perez", 1, 1.1);
    Persona p2("Angel", "Rguez Garcia", 2, 2.2);
    Persona p3("Nombre 3", "Apellidos 3", 3, 3.3);
    Persona p4("Nombre 4", "Apellidos 4", 4, 4.4);

    vector<Persona> v;
    v.push_back(p1);
    v.push_back(p4);
    v.push_back(p2);
    v.push_back(p3);

    mysort(v);

    cout << "El vector de personas es:" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->getDatos() << endl;
    }

    v.clear();
}