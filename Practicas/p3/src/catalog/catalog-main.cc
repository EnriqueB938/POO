#include <iostream>
#include "catalog.h"
#include <string>

int main() {
    CyclistCatalog cyclist_catalog;
    DirectorCatalog director_catalog;

    if (!cyclist_catalog.Load()) {
        cout << "Error cargando el archivo cyclists.csv" << endl;
        return 1;
    }

    if (!director_catalog.Load()) {
        cout << "Error cargando el archivo directors.csv" << endl;
        return 1;
    }

    cout << "\n--- CICLISTAS CARGADOS: " << cyclist_catalog.Size() << " ---\n";

    vector<Cyclist> cyclists = cyclist_catalog.Data();
    for (size_t i = 0; i < cyclists.size(); ++i) 
    {
        Cyclist c = cyclists[i];
        cout << i + 1 << ") " << c.getName() << ", " << c.getBirth_Year() << ", " << c.getTeam() << ", " << c.getCyclist_Id() << endl;
    }

    cout << "\n--- DIRECTORES CARGADOS: " << director_catalog.Size() << " ---\n";

    vector<Director> directors = director_catalog.Data();
    for (size_t i = 0;i < directors.size(); i++) 
    {
        Director d = directors[i];
        cout << d.getName() << ", " << d.getBirth_Year() << ", " << d.getTeam() << ", " << d.getUci_License_Id() << ", " << d.getDirector_Since() << endl;
    }

    string team;
    cout << "Introduzca el nombre del equipo: \n" << endl;
    getline(cin, team);

    vector<Cyclist> equipo = cyclist_catalog.GetByTeam(team);
    cout << "Estos son los ciclistas del equipo" << team << endl;

    if(equipo.empty())
    {
        cout<< "No hay ciclistas en este equipo" << endl;
    }
    else
    {
        for(auto it = equipo.begin(); it != equipo.end(); it++)
        {
            cout << it->getName() << ", " << it->getBirth_Year() << ", " << it->getCyclist_Id() << it->getTeam() << ", " << endl;
        }
    }

    vector<Cyclist> joven = cyclist_catalog.GetYoungest();

    for(auto it = joven.begin(); it != joven.end(); it++)
    {
        cout << it->getName() << ", " << it->getBirth_Year() << ", " << it->getCyclist_Id() << it->getTeam() << ", " << endl;
    }

    return 0;

}
