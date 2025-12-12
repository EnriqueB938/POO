#ifndef CART_H
#define CART_H

#include <string>
#include <list>
#include <fstream>
#include "product.h"
using namespace std;

class Cart
{
    private:
    list<Product> lista_;
    int id_;

    public:

    Cart(int id)
    {
        id_ = id;
    }

    int getId()
    {
        return id_;
    }

    int getN()
    {
        return lista_.size();
    }

    void addProduct(Product p)
    {
        for(auto it = lista_.begin(); it != lista_.end(); i++)
        {

        }
    }

    bool deleteProduct(string name , string model)
    {
        for(auto it = lista_.begin(); it != lista_.end(); i++)
            {
                if(it->getName() == name and it->getModel() == model)
                {

                    return true;
                }
            }
            return false;
    }

    void print()
    {
        
    }


    void write()
    {
        ofstream fich (salidad.txt);
        if(fich.is_open())
        {
            int i= 1;
            for(auto it = lista_.begin(); it != lista_.end(); i++)
            {
                fich << i << "/" << lista_.size() << "," << 
                i++;
            }
            fich.close();
        }

    }

};


#endif