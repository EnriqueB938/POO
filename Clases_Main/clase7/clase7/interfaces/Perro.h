#include "Animal.h"

class Perro : public Animal
{
public:
    void sonido() override
    {
        cout << "El perro ladra" << endl;
    }

    int esperanzaVida() override
    {
        return 15;
    }
};