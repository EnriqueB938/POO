#ifndef USER_H
#define USER_H

using namespace std;
#include <string>

class User
{
    private:
    string id_;
    string surname_;
    string name_;
    string nationality_;
    int d_;
    int m_;
    int y_;
    bool complete_;

    public:

    User(string id)
    {
        id_ = id;
        surname_ = "";
        name_ = "";
        nationality_ = "";
        d_ = 0;
        m_ = 0;
        y_ = 0;
        complete_ = false;
    }

    User(string id, string surname , string name , string nationality , int d , int m , int y, bool complete)
    {
        id_ = id;
        surname_ = surname;
        name_ = name;
        nationality_ = nationality;
        d_ = d;
        m_ = m;
        y_ = y;
        complete_ = complete;

        if(id == "" || surname == "" || name == "" || nationality == "" || d < 1 || m < 1 || y < 1)
        {
            complete = false;
        }
        complete = true;
    }

    string getId()
    {
        return id_;
    }

    string getNationality()
    {
        return nationality_;
    }

    string getSurname()
    {
        return surname_;
    }

    string getName()
    {
        return name_;
    }

    int getDay()
    {
        return d_;
    }

    int getMonth()
    {
        return m_;
    }

    int getYear()
    {
        return y_;
    }

    bool getComplete()
    {
        return complete_;
    }

    bool setId(string id)
    {
        if(id == "")
        {
            return false;
        }
        id_ = id;
        return true;
    }

    bool setSurname(string surname)
    {
        if(surname == "")
        {
            return false;
        }
        surname_ = surname;
        return true;
    }

    bool setName(string name)
    {
        if(name == "")
        {
            return false;
        }
        name_ = name;
        return true;
    }

    bool setNationality(string nationality)
    {
        if(nationality == "")
        {
            return false;
        }
        nationality_ = nationality;
        return true;
    }

    bool setDay(int d)
    {
        if(d < 1)
        {
            return false;
        }
        d_ = d;
        return true;
    }

    bool setMonth(int m)
    {
        if(m < 1)
        {
            return false;
        }
        m_ = m;
        return true;
    }

    bool setYear(int y)
    {
        if(y < 1)
        {
            return false;
        }
        y_ = y;
        return true;
    }

};


#endif