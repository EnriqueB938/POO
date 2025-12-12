#ifndef CATALOG_H
#define CATALOG_H

using namespace std;
#include <string>
#include <vector>
#include <fstream>
#include "persons.h"


class CyclistCatalog
{

    private:

    vector<Cyclist> cyclist_;

    public:
    bool Load()
    {
        //NO LO ENTIENDO (NO ENTIENDO L0 QUE PIDE)
    }

    int Size()
    {
        return cyclist_.size();
    }


    vector<Cyclist> Data()
    {
        ifstream fich (cyclist.csv);
        if(fich.is_open())
        {
            Cyclist c;
            for(auto it = cyclist_.begin(); it != cyclist_.end(); it++)
            {
                cyclist_.push_back(c);
            }
            fich.close();
        }
        return cyclist_;
    }

    string GetTeam(string cyclist_id)
    {
        for(auto it = cyclist_.begin(); it != cyclist_.end(); it++)
        {
            if(it-> getCyclist_Id() == cyclist_id)
            {
                return it-> getTeam();
            }
        }
        printf("El equipo no ha sido encontrado\n");
        return 0;
    }

    vector<Cyclist> GetByTeam(string team)
    {
        for(auto it = cyclist_.begin(); it != cyclist_.end(); it++)
        {
            if(it->getTeam() == team)
            {
                cyclist_.push_back(*it);
            }
        }
        return cyclist_;
    }

    vector<Cyclist> GetYoungest()
    {
        if(cyclist_.empty())
        {
            return cyclist_;
        }

        int joven = cyclist_.begin()-> getBirth_Year();

        for(auto it = cyclist_.begin(); it != cyclist_.end(); it++)
        {
            if(it-> getBirth_Year() > joven)  
            {
                joven = it-> getBirth_Year();
            }
        }

        for(auto it = cyclist_.begin(); it != cyclist_.end(); it++)
        {
            if(it-> getBirth_Year() == joven)
            {
                cyclist_.push_back(*it);
            }
        }

        return cyclist_;
    }
};


class DirectorCatalog
{
    private:
    vector<Director> directors_;

    public:

    bool Load()
    {
       //NO LO ENTIENDO 
    }

    int Size()
    {
        return directors_.size();
    }


    vector<Director> Data()
    {
        ifstream fich (directors.csv);
        if(fich.is_open())
        {
            Director d;
            for(auto it = directors_.begin(); it != directors_.end(); it++)
            {
                directors_.push_back(d);
            }
            fich.close();
        }
        return directors_;
    }
};


#endif