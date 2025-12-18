#ifndef CATALOG_H
#define CATALOG_H

using namespace std;
#include <string>
#include <vector>
#include <fstream>
#include "persons.h"
#include "catalog.h"
#include <sstream>
#include <iostream>


class CyclistCatalog
{

    private:

    vector<Cyclist> cyclist_;

    public:

    bool Load(const std::string& path) 
    {
        Cyclist c;
        std::string name, birth_s, id, team;
        int birthyear = 0;
        cyclist_.clear(); // Elimina todos los elementos si hubiera
        std::ifstream in(path);
        if (!in) 
        {
            std::cerr << "-ERROR: No se pudo abrir " << path << "\n";
            return false;
        }
        std::string line;
        if (!std::getline(in, line)) return false; // saltar cabecera
        while (std::getline(in, line)) 
        {
            if (line.empty()) continue;
            std::istringstream iss(line); // Define un stream de lectura a partir de line
            if (!std::getline(iss, name, ',')) continue;
            if (!std::getline(iss, birth_s, ',')) continue;
            if (!std::getline(iss, id, ',')) continue;
            if (!std::getline(iss, team)) continue;
            birthyear = std::stoi(birth_s);
            c.SetName(name);
            c.SetBirthYear(birthyear);
            c.SetCyclistId(id);
            c.SetTeam(team);
            cyclist_.push_back(c); // se hace una copia al final del vector
        }
    return !cyclist_.empty();
}

    int Size()
    {
        return cyclist_.size();
    }


    vector<Cyclist> Data()
    {
        return cyclist_;
    }

    string GetTeam(string cyclist_id)
    {
        for(auto it = cyclist_.begin(); it != cyclist_.end(); it++)
        {
            if(it-> GetCyclistId() == cyclist_id)
            {
                return it-> GetTeam();
            }
        }
        printf("El equipo no ha sido encontrado\n");
        return 0;
    }

    vector<Cyclist> GetByTeam(string team)
    {
        for(auto it = cyclist_.begin(); it != cyclist_.end(); it++)
        {
            if(it->GetTeam() == team)
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

        int joven = cyclist_.begin()-> GetBirthYear();

        for(auto it = cyclist_.begin(); it != cyclist_.end(); it++)
        {
            if(it-> GetBirthYear() > joven)  
            {
                joven = it-> GetBirthYear();
            }
        }

        for(auto it = cyclist_.begin(); it != cyclist_.end(); it++)
        {
            if(it-> GetBirthYear() == joven)
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

    bool Load(const std::string& path) 
    {
        Director d;
        std::string name, birth_s, id, team, director_s;
        int birthyear = 0;
        int director_since = 0;
        directors_.clear(); // Elimina todos los elementos si hubiera
        std::ifstream in(path);
        if (!in) 
        {
            std::cerr << "-ERROR: No se pudo abrir " << path << "\n";
            return false;
        }
        std::string line;
        if (!std::getline(in, line)) return false; // saltar cabecera
        while (std::getline(in, line)) 
        {
            if (line.empty()) continue;
            std::istringstream iss(line); // Define un stream de lectura a partir de line
            if (!std::getline(iss, name, ',')) continue;
            if (!std::getline(iss, birth_s, ',')) continue;
            if (!std::getline(iss, id, ',')) continue;
            if (!std::getline(iss, team, ',')) continue;
            if (!std::getline(iss, director_s))continue;
            birthyear = std::stoi(birth_s);
            director_since = std::stoi(director_s);
            d.SetName(name);
            d.SetBirthYear(birthyear);
            d.SetUciLicenseId(id);
            d.SetTeam(team);
            d.SetDirectorSince(director_since);
            directors_.push_back(d); // se hace una copia al final del vector
        }
    return !directors_.empty();
}

    int Size()
    {
        return directors_.size();
    }


    vector<Director> Data()
    {
        return directors_;
    }
};


#endif