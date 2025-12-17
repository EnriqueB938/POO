#include "Animal.h"

class Gato : public Animal
{
public:
    void sonido() override
    {
        cout << "El perro maúlla" << endl;
    }

    int esperanzaVida() override
    {
        return 20;
    }
};
