#include <iostream>
#include <map>

using namespace std;

bool buscarProducto(map<string, int> carrito, string codigoProducto)
{
    // for (auto it = carrito.begin(); it != carrito.end(); it++)
    // {
    //     if(it->first == codigoProducto)
    //     {
    //         return true;
    //     }
    // }
    // return false;

    auto it = carrito.find(codigoProducto);
    if (it != carrito.end())
    {
        return true;
    }
    return false;
}

bool borrarProducto(map<string, int> &carrito, string codigoProducto)
{
    // for (auto it = carrito.begin(); it != carrito.end(); it++)
    // {
    //     if(it->first == codigoProducto)
    //     {
    //          carrito.erase(it);
    //         return true;
    //     }
    // }
    // return false;

    auto it = carrito.find(codigoProducto);
    if (it != carrito.end())
    {
        carrito.erase(it);
        return true;
    }
    return false;
}

int main()
{
    map<string, int> carrito;

    carrito["111A"] = 1;
    carrito["111A"] = 2;
    carrito["222B"] = 1;
    carrito["333C"] = 4;

    cout << "El carrito es: " << endl;
    for (auto it = carrito.begin(); it != carrito.end(); it++)
    {
        cout << "Producto " << it->first << ": " << it->second << " unidades" << endl;
    }

    carrito.clear();

    carrito.size();

    // map<string, Product> carrito;

    // (it->second).getName()
}