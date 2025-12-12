#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "stage.h" 
#include "catalog.h"

using namespace std;


void Imprimir(vector<Cyclist> cyclists, map<string, int> delays) 
{
    for (auto it = cyclists.begin(); it != cyclists.end(); it++) {
        string id = it->getCyclist_Id();
        if (it != delays.end()) 
        {
            int delay = it-> second;
            cout << it->getName() << "," << id << "," << delay << endl;
        }
        else 
        {
            cout << "Error no se ha encontrado el id" << endl;
        }
    }
}


int main() {

    vector<Cyclist> cyclist_=
    {
        (101, "Daniel Basilio"), (102, "Marcos Llorente"),(103, "Enrique Báez"),
        (104, "Paco Salas"),(105, "Richard Muñoz"),(106, "Juan Lopez")  
    };

    int dureza = 4;
    Stage etapa(dureza); 
    
    cout << "Esta es la dureza de la etapa: " << etapa.GetHard() <<endl; 

    etapa.Simulate(cyclist_);

    map<string, int> delay = etapa.GetDelays();

    Imprimir(cyclist_, delay);

    return 0;
}
