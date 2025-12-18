#include <string>
using namespace std;

void intercambia(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

void intercambia(float &a, float &b)
{
    float aux = a;
    a = b;
    b = aux;
}

void intercambia(string &a, string &b)
{
    string aux = a;
    a = b;
    b = aux;
}