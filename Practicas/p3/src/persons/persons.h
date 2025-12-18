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

    string GetName()
    {
        return name_;
    }

    int GetBirthYear()
    {
        return birth_year_;
    }

    void SetName(string name)
    {
        name_ = name;
    }

    void SetBirthYear(int birth_year)
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

    Cyclist(string name, int birth_year, string team, string cyclist_id) : Person(name, birth_year)
    {
        team_ = team;
        cyclist_id_ = cyclist_id;
    }

    string GetTeam()
    {
        return team_;
    }

    string GetCyclistId()
    {
        return cyclist_id_;
    }

    void SetTeam(string team)
    {
        team_ = team;
    }

    void SetCyclistId(string cyclist_id)
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

    Director(string name, int birth_year, string team, string uci_license_id, int director_since) : Person(name, birth_year)
    {
        team_ = team;
        uci_license_id_ = uci_license_id;
        director_since_ = director_since;
    }

    string GetTeam()
    {
        return team_;
    }

    string GetUciLicenseId()
    {
        return uci_license_id_;
    }

    int GetDirectorSince()
    {
        return director_since_;
    }

    void SetTeam(string team)
    {
        team_ = team;
    }

    void SetUciLicenseId(string uci_license_id)
    {
        uci_license_id_ = uci_license_id;
    }

    void SetDirectorSince(int director_since)
    {
        director_since_ = director_since;
    }

};


#endif