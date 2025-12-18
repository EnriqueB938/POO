#ifndef COMPUTER_H
#define COMPUTER_H

using namespace std;
#include <string>

class Product
{
    private:
    string name_;
    string model_;
    int price_;

    public:

    Product(string name, string model = "Model", int price = 1)
    {
        if(name == "")
        {
            name = "ERROR";
        }
        name_ = name;

        if(model == "")
        {
            model = "Model";
        }
        model_ = model;

        if(price < 1)
        {
            price = 1;
        }
        price_ = price;
    }

    //GETTERS
    string getName() 
    {
        return name_;
    }

    string getModel() 
    {
        return model_;
    }

    int getPrice() 
    {
        return price_;
    }

    //SETTERS

    bool setName(string name)
    {
        if(name != "")
        {
            name_ = name;
            return true;
        }
        return false;
    }

    bool setModel(string model)
    {
        if(model != "")
        {
            model_ = model;
            return true;
        }
        return false;
    }

    bool setPrice(int price)
    {
        if(price > 0)
        {
            price_ = price;
            return true;
        }
        return false;
    }

    string getString()
    {
        return name_ + ", " + model_ + ", " + to_string(price_);
    }
};

#endif 