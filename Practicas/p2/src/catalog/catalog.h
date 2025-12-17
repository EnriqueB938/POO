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
            c.setName(name);
            c.setBirth_Year(birthyear);
            c.setCyclist_Id(id);
            c.setTeam(team);
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
            d.setName(name);
            d.setBirth_Year(birthyear);
            d.setUci_License_Id(id);
            d.setTeam(team);
            d.setDirector_Since(director_since);
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