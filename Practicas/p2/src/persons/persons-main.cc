#include <iostream>
#include "persons.h"

using namespace std;
#include <string>

int main() {
    Person p;
    Cyclist c;
    Director d;

    string name;
    string team;
    string cyclist_id;
    string uci_license_id;
    int birth_year;
    int director_since;


    cout << "Introduce nombre de la persona: ";
    cin >> name;
    cout << "Introduce año de nacimiento: ";
    cin >> birth_year;
    p.setName(name);
    p.setBirth_Year(birth_year);

    
    cout << "Introduce nombre del ciclista: ";
    cin >> name;
    cout << "Introduce año de nacimiento: ";
    cin >> birth_year;
    cout << "Introduce equipo del ciclista: ";
    cin >> team;
    cout << "Introduce ID del ciclista: ";
    cin >> cyclist_id;
    c.setName(name);
    c.setBirth_Year(birth_year);
    c.setTeam(team);
    c.setCyclist_Id(cyclist_id);

    
    cout << "Introduce nombre del director: ";
    cin >> name;
    cout << "Introduce año de nacimiento: ";
    cin >> birth_year;
    cout << "Introduce equipo del director: ";
    cin >> team;
    cout << "Introduce licencia UCI: ";
    cin >> uci_license_id;
    cout << "Director desde (año): ";
    cin >> director_since;
    d.setName(name);
    d.setBirth_Year(birth_year);
    d.setTeam(team);
    d.setUci_License_Id(uci_license_id);
    d.setDirector_Since(director_since);


    cout << "nombre de la persona: " << p.getName() << endl;
    cout<< "Año de nacimiento: " << p.getBirth_Year() << endl;

    cout << "Nombre del ciclista: " << c.getName() << endl;
    cout<< "Año de nacimiento del ciclista: " << c.getBirth_Year() << endl;
    cout << "Nombre del equipo: " << c.getTeam() <<endl;
    cout<< "ID del ciclista: " << c.getCyclist_Id() << endl;

    cout << "Nombre del director: " << d.getName() << endl;
    cout << "Año de  nacimiento del director: " << d.getBirth_Year() << endl;
    cout << "Nombre del equipo: " << d.getTeam() << endl;
    cout << "Licencia UCI: " << d.getUci_License_Id() << endl;
    cout << "Es director desde: " << d.getDirector_Since() << endl;

    return 0;
}
