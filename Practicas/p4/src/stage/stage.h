#ifndef STAGE_H
#define STAGE_H

#include <string>
#include <map>
#include <iostream>
#include <ctime>
#include <cstdlib>  
#include "catalog.h"
#include "persons.h"
using namespace std;

class Stage
{
    private:

    map<string, int> delay_;
    int hard_;

    public:

    Stage(int hard)
    {
        if(hard < 1)
        {
            hard_ =1;
        }
        else if(hard > 5)
        {
            hard_ = 5;
        }
        else
        {
            hard_ = hard;
        }
    }

    int ganador = srand(time(NULL));

    int  Simulate(vector<Cyclist> cyclists)
    {
        if(cyclists.empty())
        {
            return 0;
        }

        ganador = rand() % cyclists.size();
        string id_ganador = cyclists[ganador].getCyclist_Id();

        delay_[id_ganador] = 0;

        for(auto it = cyclists.begin(); it != cyclists.end(); it++)
        {
            string id = cyclists[id].getCyclist_Id();
            if(id != id_ganador)
            {
                int max_delay = hard_ * 400;
                int rand_delay = (rand() % max_delay) + 1;
                delay_[id] = rand_delay;
            }
        }
    }


    map<string, int> GetDelays()
    {
        return delay_;
    }

    int GetHard()
    {
        return hard_;
    }


};


#endif