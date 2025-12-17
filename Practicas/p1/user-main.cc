#include <iostream>
#include "user.h"
using namespace std;
#include <string>


int main()
{
    string id;
    string surname;
    string name;
    string nationality;
    int d;
    int m;
    int y;
    bool complete;

    cout << "Introduce ID: ";
    getline(cin, id);

    cout << "Introduce apellidos: ";
    getline(cin, surname);

    cout << "Introduce nombre: ";
    getline(cin, name);

    cout << "Introduce nacionalidad: ";
    getline(cin, nationality);

    cout << "Introduce dia de nacimiento: ";
    cin >> d;

    cout << "Introduce mes de nacimiento: ";
    cin >> m;

    cout << "Introduce año de nacimiento: ";
    cin >> y;

    cout << "¿Los datos estan completos? (1 para si, 0 para no): ";
    cin >> complete;

    if(complete == 1)
    {
        complete = true;
    }
    else
    {
        complete = false;
    }

    cin.ignore(); 

    User u(id, surname, name, nationality, d, m, y, complete);


    cout << "\n--- Datos del Usuario ---\n";
    cout << "ID: " << u.getId() << endl;
    cout << "Apellidos: " << u.getSurname() << endl;
    cout << "Nombre: " << u.getName() << endl;
    cout << "Nacionalidad: " << u.getNationality() << endl;
    cout << "Dia de nacimiento: " << u.getDay() << endl;
    cout << "Mes de nacimiento: " << u.getMonth() << endl;
    cout << "Año de nacimiento: " << u.getYear() << endl;


    return 0;
}
