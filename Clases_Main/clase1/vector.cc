#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    cout << "El vector tiene tamaño: " << v.size() << endl;

    v.push_back(4);
    v.push_back(9);
    v.push_back(2);

    cout << "El vector tiene tamaño: " << v.size() << endl;

    // Imprimir el vector
    cout << "Los elementos del vector son:" << endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Calcular la suma del vector
    int suma = 0;
    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    for (auto it = v.begin(); it != v.end(); it++)
    {
        suma += (*it);
    }
    cout << "La suma de los elementos del vector es : " << suma << endl;

    int borrar;
    cout << "Introduce el número que quieres borrar: ";
    cin >> borrar;

    for (auto it = v.begin(); it != v.end(); it++)
    {
        if ((*it) == borrar)
        {
            v.erase(it);
        }
    }

    cout << "Los elementos del vector son:" << endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Vaciar el vector
    v.clear();

    return 0;
}