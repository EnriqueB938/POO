#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lista;

    cout << "El tamaño de la lista es " << lista.size() << endl;

    lista.push_back(5);
    lista.push_back(6);
    lista.push_back(7);

    lista.push_front(4);
    lista.push_front(3);
    lista.push_front(2);

    cout << "Los elementos de la lista son:" << endl;
    for (auto it = lista.begin(); it != lista.end(); it++)
    {
        cout << (*it) << " --> ";
    }
    cout << "NULL" << endl;

    lista.clear();

    return 0;
}