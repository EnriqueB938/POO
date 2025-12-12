#include <iostream>
#include "user.h"
using namespace std;
#include <string>


User ReadUserFromConsole()
{
    string id;
    string surname;
    string name;
    string nationality;
    int d;
    int m;
    int y;

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

    cin.ignore(); 

    User u(id, surname, name, nationality, d, m, y);
    return u;
}

void PrintUserToConsole(User u)
{
    cout << "\n--- Datos del Usuario ---\n";
    cout << "ID: " << u.getId() << endl;
    cout << "Apellidos: " << u.getSurname() << endl;
    cout << "Nombre: " << u.getName() << endl;
    cout << "Nacionalidad: " << u.getNationality() << endl;
    cout << "Dia de nacimiento: " << u.getDay() << endl;
    cout << "Mes de nacimiento: " << u.getMonth() << endl;
    cout << "Año de nacimiento: " << u.getYear() << endl;
}

int main()
{
    cout << "[1] Creando objeto User vacio...\n";
    User u("temp");  

    cout << "[2] Leyendo datos desde teclado...\n";
    u = ReadUserFromConsole();

    cout << "[3] Mostrando datos del usuario...\n";
    PrintUserToConsole(u);

    return 0;
}
