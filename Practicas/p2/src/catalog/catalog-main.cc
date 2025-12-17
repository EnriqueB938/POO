#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include "catalog.h"
#include "persons.h"


int main() {

    CyclistCatalog cyclist_catalog;
    DirectorCatalog director_catalog;

    string CYCLIST_PATH = "/home/quiconcio/poo/POO/Practicas/p2/data/cyclists.csv";
    string DIRECTOR_PATH = "/home/quiconcio/poo/POO/Practicas/p2/data/directors.csv";

    cyclist_catalog.Load(CYCLIST_PATH);
    director_catalog.Load(DIRECTOR_PATH);

    cout << "\n--- Catálogo de Ciclistas ---" << endl;
    vector<Cyclist> cyclists = cyclist_catalog.Data();
    cout << "Se han cargado " << cyclists.size() << " ciclistas" << endl;
    cout << "Listado de Ciclistas: " << endl;
    for (size_t i = 0; i < cyclists.size(); ++i) {
        cout << cyclists[i].getName() << ", "
             << cyclists[i].getBirth_Year() << ", "
             << cyclists[i].getCyclist_Id() << ", "
             << cyclists[i].getTeam() << endl;
    }

    cout << "\n--- Catálogo de Directores ---" << endl;
    vector<Director> directors = director_catalog.Data();
    cout << "Se han cargado " << directors.size() << " directores" << endl;
    cout << "Listado de Directores: " << endl;
    
    for (auto director : directors) {
        cout << director.getName() << ", "
             << director.getBirth_Year() << ", "
             << director.getUci_License_Id() << ", "
             << director.getDirector_Since() << ", " 
             << director.getTeam() << endl;
    }

    return 0;
}