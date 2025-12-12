#ifndef PERSONS_H
#define PERSONS_H

using namespace std;
#include <string>

class Person
{
    private:
    string name_;
    int birth_year_;

    public:

    Person()
    {
        name_ = "UNKNOWN";
        birth_year_ = -1;
    }

    Person(string name, int birth_year)
    {
        name_ = name;
        birth_year_ = birth_year;
    }

    string getName()
    {
        return name_;
    }

    int getBirth_Year()
    {
        return birth_year_;
    }

    void setName(string name)
    {
        name_ = name;
    }

    void setBirth_Year(int birth_year)
    {
        birth_year_ = birth_year;
    }
};

class Cyclist : public Person
{
    private:
    
    string team_;
    string cyclist_id_;

    public:

    Cyclist()
    {
        team_ = "UNKNOWN";
        cyclist_id_ = "UNKNOWN";
    }

    Cyclist(string team, string cyclist_id, string name, int birth_year) : Person(name, birth_year)
    {
        team_ = team;
        cyclist_id_ = cyclist_id;
    }

    string getTeam()
    {
        return team_;
    }

    string getCyclist_Id()
    {
        return cyclist_id_;
    }

    void setTeam(string team)
    {
        team_ = team;
    }

    void setCyclist_Id(string cyclist_id)
    {
        cyclist_id_ = cyclist_id;
    }
};

class Director : public Person
{
    private:

    string team_;
    string uci_license_id_;
    int director_since_;

    public:
    
    Director()
    {
        team_ = "UNKNOWN";
        uci_license_id_ = "UNKNOWN";
        director_since_ = -1;
    }

    Director(string team, string uci_license_id, int director_since, string name, int birth_year) : Person(name, birth_year)
    {
        team_ = team;
        uci_license_id_ = uci_license_id;
        director_since_ = director_since;
    }

    string getTeam()
    {
        return team_;
    }

    string getUci_License_Id()
    {
        return uci_license_id_;
    }

    int getDirector_Since()
    {
        return director_since_;
    }

    void setTeam(string team)
    {
        team_ = team;
    }

    void setUci_License_Id(string uci_license_id)
    {
        uci_license_id_ = uci_license_id;
    }

    void setDirector_Since(int director_since)
    {
        director_since_ = director_since;
    }

};


#endif