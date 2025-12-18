#include "Animal.h"

class Perro : public Animal
{
public:
    void sonido() override
    {
        cout << "El perro ladra" << endl;
    }
};