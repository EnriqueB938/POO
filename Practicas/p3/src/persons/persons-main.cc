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


    cout << "Introduce el nombre de la persona: ";
    cin >> name;
    cout << "Introduce el año de nacimiento: ";
    cin >> birth_year;
    p.SetName(name);
    p.SetBirthYear(birth_year);
    
    cout << "\n" << endl;

    cout << "Introduce el nombre del ciclista: ";
    cin >> name;
    cout << "Introduce el año de nacimiento: ";
    cin >> birth_year;
    cout << "Introduce el equpio del ciclista: ";
    cin >> team;
    cout << "Introduce el ID del ciclista: ";
    cin >> cyclist_id;
    c.SetName(name);
    c.SetBirthYear(birth_year);
    c.SetTeam(team);
    c.SetCyclistId(cyclist_id);

    cout << "\n" << endl; 

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
    d.SetName(name);
    d.SetBirthYear(birth_year);
    d.SetTeam(team);
    d.SetUciLicenseId(uci_license_id);
    d.SetDirectorSince(director_since);

    cout << "\n" << endl;

    cout << "Nombre de la persona: " << p.GetName() << endl;
    cout<< "Año de nacimiento: " << p.GetBirthYear() << endl;

    cout << "\n" << endl;

    cout << "Nombre del ciclista: " << c.GetName() << endl;
    cout<< "Año de nacimiento del ciclista: " << c.GetBirthYear() << endl;
    cout << "Nombre del equipo: " << c.GetTeam() <<endl;
    cout<< "ID del ciclista: " << c.GetCyclistId() << endl;

    cout << "\n" << endl;

    cout << "Nombre del director: " << d.GetName() << endl;
    cout << "Año de  nacimiento del director: " << d.GetBirthYear() << endl;
    cout << "Nombre del equipo: " << d.GetTeam() << endl;
    cout << "Licencia UC del director: " << d.GetUciLicenseId() << endl;
    cout << "Es director desde: " << d.GetDirectorSince() << endl;

    return 0;
}
