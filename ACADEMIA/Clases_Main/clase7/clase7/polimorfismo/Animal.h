#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sonido()
    {
        cout << "El animal hace un sonido" << endl;
    }
};